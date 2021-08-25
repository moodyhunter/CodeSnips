#include <QCheckBox>
#include <QDialog>
#include <QDoubleSpinBox>
#include <QEventLoop>
#include <QFormLayout>
#include <QJsonObject>
#include <QLabel>
#include <QLineEdit>
#include <QListWidget>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QToolButton>
#include <QWidget>


class StructuredEditor : public QWidget
{
    Q_OBJECT

  public:
    explicit StructuredEditor(ElementInfo::ElementType arrayType, const QList<ElementInfo> &subObjects, QWidget *parent = nullptr) : QWidget(parent), isArrayType(true)
    {
        itemListView = new QListWidget(this);

        QToolButton *addBtn = new QToolButton(this);
        QToolButton *removeBtn = new QToolButton(this);
        addBtn->setIcon(QIcon::fromTheme("add"));
        removeBtn->setIcon(QIcon::fromTheme("remove"));

        ElementInfo contentObjectInfo;
        contentObjectInfo.key = "item";
        contentObjectInfo.name = tr("Item");
        contentObjectInfo.type = arrayType;
        contentObjectInfo.objectElements = subObjects;

        StructuredEditor *contentWidget = new StructuredEditor({ contentObjectInfo }, this);
        contentWidget->setEnabled(false);

        {
            // Setup layouts
            QHBoxLayout *horizontalLayout = new QHBoxLayout();
            horizontalLayout->addWidget(addBtn);
            horizontalLayout->addWidget(removeBtn);

            QVBoxLayout *verticalLayout = new QVBoxLayout();
            verticalLayout->addWidget(itemListView);
            verticalLayout->addLayout(horizontalLayout);

            QGridLayout *gridLayout = new QGridLayout(this);
            gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);
            gridLayout->addWidget(contentWidget, 0, 1, 1, 1);
            gridLayout->setColumnStretch(1, 1);
        }

        connect(itemListView, &QListWidget::currentItemChanged, this,
                [this, contentWidget](QListWidgetItem *current, QListWidgetItem *previous)
                {
                    if (previous)
                    {
                        const auto content = contentWidget->GetContent().toMap().value("item");
                        contentList.replace(itemListView->indexFromItem(previous).row(), content);
                        previous->setText(content.toString().isEmpty() ? "[Item]" : content.toString());
                    }
                    contentWidget->setEnabled(current != nullptr);

                    if (current)
                        contentWidget->SetContent(QVariantMap{ { "item", contentList.at(itemListView->indexFromItem(current).row()) } });
                });

        connect(addBtn, &QToolButton::clicked, this,
                [this, _arrayType = arrayType]()
                {
                    const auto index = itemListView->currentRow() + 1;
                    contentList.insert(index, QVariant(QMetaType(_arrayType)));
                    itemListView->insertItem(index, "Item");
                    itemListView->setCurrentRow(index);
                });

        connect(removeBtn, &QToolButton::clicked, this,
                [this, contentWidget]()
                {
                    const auto item = itemListView->currentItem();
                    if (!item)
                        return;
                    const auto index = itemListView->indexFromItem(item).row();
                    delete itemListView->takeItem(index);
                    contentList.removeAt(index);
                    contentWidget->setEnabled(false);
                });
    }

    explicit StructuredEditor(const QList<ElementInfo> &_info, QWidget *parent = nullptr) : QWidget(parent), isArrayType(false), info(_info)
    {
        const auto _layout = new QFormLayout;
        setLayout(_layout);

        for (const auto &[key, name, type, childObjectChildren, childArrayType] : info)
        {
            QWidget *widget;
            switch (type)
            {
                case ElementInfo::Bool:
                {
                    widget = new QCheckBox(this);
                    connect((QCheckBox *) widget, &QCheckBox::toggled, this, [this, _key = key](bool b) { this->contentObject.insert(_key, b); });
                    break;
                }
                case ElementInfo::Double:
                {
                    widget = new QDoubleSpinBox(this);
                    connect((QDoubleSpinBox *) widget, &QDoubleSpinBox::valueChanged, this, [this, _key = key](double b) { this->contentObject.insert(_key, b); });
                    break;
                }
                case ElementInfo::Integer:
                {
                    widget = new QSpinBox(this);
                    connect((QSpinBox *) widget, &QSpinBox::valueChanged, this, [this, _key = key](int b) { this->contentObject.insert(_key, b); });
                    break;
                }
                case ElementInfo::String:
                {
                    widget = new QLineEdit(this);
                    connect((QLineEdit *) widget, &QLineEdit::textEdited, this,
                            [this, _key = key](const QString &str)
                            {
                                if (str.isEmpty())
                                    this->contentObject.remove(_key);
                                else
                                    this->contentObject.insert(_key, str);
                            });
                    break;
                }
                case ElementInfo::Object:
                {
                    widget = new QPushButton(tr("Edit") + u" "_qs + name, this);
                    connect((QPushButton *) widget, &QPushButton::clicked, this,
                            [this, _key = key, _children = childObjectChildren]()
                            {
                                QDialog dialog{ this };
                                dialog.setLayout(new QGridLayout);
                                dialog.layout()->setContentsMargins(9, 9, 9, 9);
                                StructuredEditor d{ _children, &dialog };
                                d.SetContent(this->contentObject.value(_key, QVariantMap{}));
                                dialog.layout()->addWidget(&d);
                                dialog.exec();
                                this->contentObject.insert(_key, d.GetContent().toMap());
                            });
                    break;
                }
                case ElementInfo::Array:
                {
                    widget = new QPushButton(tr("Edit") + u" "_qs + name, this);
                    connect((QPushButton *) widget, &QPushButton::clicked, this,
                            [this, _key = key, _arrayType = childArrayType, _children = childObjectChildren]()
                            {
                                QDialog dialog{ this };
                                dialog.setLayout(new QGridLayout);
                                dialog.layout()->setContentsMargins(9, 9, 9, 9);
                                StructuredEditor d{ _arrayType, _children, &dialog };
                                d.SetContent(this->contentObject.value(_key, QVariantList{}));
                                dialog.layout()->addWidget(&d);
                                dialog.exec();
                                this->contentObject.insert(_key, d.GetContent());
                            });
                    break;
                }
            }

            widget->setObjectName(key);
            _layout->addRow(new QLabel(name, this), widget);
        }
    }

    void SetContent(const QVariant &c)
    {
        if (isArrayType)
        {
            assert(itemListView);
            contentList = c.isValid() ? c.toList() : QVariantList{};
            for (const auto &item : contentList)
                itemListView->addItem(item.toString().isEmpty() ? "[Item]" : item.toString());
        }
        else
        {
            contentObject = c.toMap();
            for (const auto &[key, name, type, childObjectChildren, childArrayType] : info)
            {
                auto c = findChild<QWidget *>(key);
                if (!c)
                {
                    qWarning() << "Failed to find child object named" << key;
                    continue;
                }

                switch (type)
                {
                    case ElementInfo::Bool:
                    {
                        ((QCheckBox *) c)->setChecked(contentObject.value(key).toBool());
                        break;
                    }
                    case ElementInfo::Double:
                    {
                        ((QDoubleSpinBox *) c)->setValue(contentObject.value(key).toDouble());
                        break;
                    }
                    case ElementInfo::Integer:
                    {
                        ((QSpinBox *) c)->setValue(contentObject.value(key).toLongLong());
                        break;
                    }
                    case ElementInfo::String:
                    {
                        ((QLineEdit *) c)->setText(contentObject.value(key).toString());
                        break;
                    }
                    case ElementInfo::Object:
                    case ElementInfo::Array:
                    {
                        // Will set content when click on the button.
                        break;
                    }
                }
            }
        }
    }

    QVariant GetContent() const
    {
        return isArrayType ? QVariant{ contentList } : QVariant{ contentObject };
    }

  private:
    const bool isArrayType;

    // For objects
    QVariantMap contentObject;
    const QList<ElementInfo> info;

    // For arrays
    QListWidget *itemListView;
    QVariantList contentList;
};
