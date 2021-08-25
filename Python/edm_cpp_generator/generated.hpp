#include <chrono>
#include <memory>
#include <QString>
#include <QByteArray>
#include <QDateTime>
#include <QList>
// clang-format off
namespace microsoft::graph {
    class user;
    class calendar;
    class calendarGroup;
    class event;
    class drive;
    class site;
    class onenote;
    class userActivity;
    class team;
    class baseItem;
    class driveItem;
    class list;
    class itemAnalytics;
} // namespace microsoft::graph

namespace microsoft::graph::termStore {
    class store;
} // namespace microsoft::graph::termStore

namespace microsoft::graph {
    class notebook;
    class onenotePage;
    class sectionGroup;
    class onenoteSection;
    class activityHistoryItem;
    class channel;
    class group;
    class itemActivityStat;
    class listItem;
    class educationUser;
    class educationSchool;
    class educationClass;
    class workbook;
    class workbookNamedItem;
    class workbookTable;
    class workbookWorksheet;
    class workbookChart;
    class workbookPivotTable;
    class eventMessage;
    class itemActivity;
    class termsAndConditions;
    class deviceAndAppManagementRoleAssignment;
    class roleDefinition;
    class termsAndConditionsAcceptanceStatus;
    class roleAssignment;
    class printer;
    class printerShare;
    class printTaskDefinition;
    class printJob;
    class printerBase;
    class printTaskTrigger;
    class printTask;
} // namespace microsoft::graph

namespace microsoft::graph::termStore {
    class group;
    class set;
    class term;
    class relation;
} // namespace microsoft::graph::termStore

namespace microsoft::graph {
    enum class appliedConditionalAccessPolicyResult {
        success = 0,
        failure = 1,
        notApplied = 2,
        notEnabled = 3,
        unknown = 4,
        unknownFutureValue = 5,
    };

    enum class conditionalAccessStatus {
        success = 0,
        failure = 1,
        notApplied = 2,
        unknownFutureValue = 3,
    };

    enum class groupType {
        unifiedGroups = 0,
        azureAD = 1,
        unknownFutureValue = 2,
    };

    enum class initiatorType {
        user = 0,
        application = 1,
        system = 2,
        unknownFutureValue = 3,
    };

    enum class operationResult {
        success = 0,
        failure = 1,
        timeout = 2,
        unknownFutureValue = 3,
    };

    enum class provisioningAction {
        other = 0,
        create = 1,
        _delete = 2,
        disable = 3,
        update = 4,
        stagedDelete = 5,
        unknownFutureValue = 6,
    };

    enum class provisioningResult {
        success = 0,
        failure = 1,
        skipped = 2,
        warning = 3,
        unknownFutureValue = 4,
    };

    enum class provisioningStatusErrorCategory {
        failure = 0,
        nonServiceFailure = 1,
        success = 2,
        unknownFutureValue = 3,
    };

    enum class provisioningStepType {
        import = 0,
        scoping = 1,
        matching = 2,
        processing = 3,
        referenceResolution = 4,
        _export = 5,
        unknownFutureValue = 6,
    };

    enum class riskDetail {
        none = 0,
        adminGeneratedTemporaryPassword = 1,
        userPerformedSecuredPasswordChange = 2,
        userPerformedSecuredPasswordReset = 3,
        adminConfirmedSigninSafe = 4,
        aiConfirmedSigninSafe = 5,
        userPassedMFADrivenByRiskBasedPolicy = 6,
        adminDismissedAllRiskForUser = 7,
        adminConfirmedSigninCompromised = 8,
        hidden = 9,
        adminConfirmedUserCompromised = 10,
        unknownFutureValue = 11,
    };

    enum class riskEventType {
        unlikelyTravel = 0,
        anonymizedIPAddress = 1,
        maliciousIPAddress = 2,
        unfamiliarFeatures = 3,
        malwareInfectedIPAddress = 4,
        suspiciousIPAddress = 5,
        leakedCredentials = 6,
        investigationsThreatIntelligence = 7,
        generic = 8,
        adminConfirmedUserCompromised = 9,
        mcasImpossibleTravel = 10,
        mcasSuspiciousInboxManipulationRules = 11,
        investigationsThreatIntelligenceSigninLinked = 12,
        maliciousIPAddressValidCredentialsBlockedIP = 13,
        unknownFutureValue = 14,
    };

    enum class riskLevel {
        low = 0,
        medium = 1,
        high = 2,
        hidden = 3,
        none = 4,
        unknownFutureValue = 5,
    };

    enum class riskState {
        none = 0,
        confirmedSafe = 1,
        remediated = 2,
        dismissed = 3,
        atRisk = 4,
        confirmedCompromised = 5,
        unknownFutureValue = 6,
    };

    enum class authenticationMethodState {
        enabled = 0,
        disabled = 1,
    };

    enum class authenticationMethodTargetType {
        user = 0,
        group = 1,
        unknownFutureValue = 2,
    };

    enum class authenticatorAppFeatureSettings {
        requireNumberMatching = 1,
    };

    enum class externalEmailOtpState {
        _default = 0,
        enabled = 1,
        disabled = 2,
        unknownFutureValue = 3,
    };

    enum class fido2RestrictionEnforcementType {
        allow = 0,
        block = 1,
        unknownFutureValue = 2,
    };

    enum class microsoftAuthenticatorAuthenticationMode {
        deviceBasedPush = 0,
        push = 1,
        any = 2,
    };

    enum class volumeType {
        operatingSystemVolume = 1,
        fixedDataVolume = 2,
        removableDataVolume = 3,
        unknownFutureValue = 4,
    };

    enum class identityUserFlowAttributeDataType {
        string = 1,
        boolean = 2,
        int64 = 3,
        stringCollection = 4,
        dateTime = 5,
        unknownFutureValue = 6,
    };

    enum class identityUserFlowAttributeInputType {
        textBox = 1,
        dateTimeDropdown = 2,
        radioSingleSelect = 3,
        dropdownSingleSelect = 4,
        emailBox = 5,
        checkboxMultiSelect = 6,
    };

    enum class identityUserFlowAttributeType {
        builtIn = 1,
        custom = 2,
        required = 3,
        unknownFutureValue = 4,
    };

    enum class userFlowType {
        signUp = 1,
        signIn = 2,
        signUpOrSignIn = 3,
        passwordReset = 4,
        profileUpdate = 5,
        resourceOwner = 6,
        unknownFutureValue = 7,
    };

    enum class allowInvitesFrom {
        none = 0,
        adminsAndGuestInviters = 1,
        adminsGuestInvitersAndAllMembers = 2,
        everyone = 3,
        unknownFutureValue = 4,
    };

    enum class permissionClassificationType {
        low = 1,
        medium = 2,
        high = 3,
        unknownFutureValue = 4,
    };

    enum class permissionType {
        application = 3,
        delegated = 2,
        delegatedUserConsentable = 1,
    };

    enum class phoneType {
        home = 0,
        business = 1,
        mobile = 2,
        other = 3,
        assistant = 4,
        homeFax = 5,
        businessFax = 6,
        otherFax = 7,
        pager = 8,
        radio = 9,
    };

    enum class bodyType {
        text = 0,
        html = 1,
    };

    enum class educationAddedStudentAction {
        none = 0,
        assignIfOpen = 1,
        unknownFutureValue = 2,
    };

    enum class educationAssignmentStatus {
        draft = 0,
        published = 1,
        assigned = 2,
        unknownFutureValue = 3,
    };

    enum class educationSubmissionStatus {
        working = 0,
        submitted = 1,
        released = 2,
        returned = 3,
        unknownFutureValue = 4,
    };

    enum class educationExternalSource {
        sis = 0,
        manual = 1,
        unknownFutureValue = 2,
    };

    enum class educationGender {
        female = 0,
        male = 1,
        other = 2,
        unknownFutureValue = 3,
    };

    enum class educationUserRole {
        student = 0,
        teacher = 1,
        none = 2,
        unknownFutureValue = 3,
    };

    enum class workbookOperationStatus {
        notStarted = 0,
        running = 1,
        succeeded = 2,
        failed = 3,
    };

    enum class activityDomain {
        unknown = 0,
        work = 1,
        personal = 2,
        unrestricted = 3,
    };

    enum class attendeeType {
        required = 0,
        optional = 1,
        resource = 2,
    };

    enum class freeBusyStatus {
        unknown = -1,
        free = 0,
        tentative = 1,
        busy = 2,
        oof = 3,
        workingElsewhere = 4,
    };

    enum class locationType {
        _default = 0,
        conferenceRoom = 1,
        homeAddress = 2,
        businessAddress = 3,
        geoCoordinates = 4,
        streetAddress = 5,
        hotel = 6,
        restaurant = 7,
        localBusiness = 8,
        postalAddress = 9,
    };

    enum class locationUniqueIdType {
        unknown = 0,
        locationStore = 1,
        directory = 2,
        _private = 3,
        bing = 4,
    };

    enum class physicalAddressType {
        unknown = 0,
        home = 1,
        business = 2,
        other = 3,
    };

    enum class bookingType {
        unknown = 0,
        standard = 1,
        reserved = 2,
    };

    enum class attachmentType {
        file = 0,
        item = 1,
        reference = 2,
    };

    enum class automaticRepliesStatus {
        disabled = 0,
        alwaysEnabled = 1,
        scheduled = 2,
    };

    enum class calendarColor {
        _auto = -1,
        lightBlue = 0,
        lightGreen = 1,
        lightOrange = 2,
        lightGray = 3,
        lightYellow = 4,
        lightTeal = 5,
        lightPink = 6,
        lightBrown = 7,
        lightRed = 8,
        maxColor = 9,
    };

    enum class calendarRoleType {
        none = 0,
        freeBusyRead = 1,
        limitedRead = 2,
        read = 3,
        write = 4,
        delegateWithoutPrivateEventAccess = 5,
        delegateWithPrivateEventAccess = 6,
        custom = 7,
    };

    enum class calendarSharingAction {
        accept = 0,
        acceptAndViewCalendar = 1,
        viewCalendar = 2,
        addThisCalendar = 3,
    };

    enum class calendarSharingActionImportance {
        primary = 0,
        secondary = 1,
    };

    enum class calendarSharingActionType {
        accept = 0,
    };

    enum class categoryColor {
        none = -1,
        preset0 = 0,
        preset1 = 1,
        preset2 = 2,
        preset3 = 3,
        preset4 = 4,
        preset5 = 5,
        preset6 = 6,
        preset7 = 7,
        preset8 = 8,
        preset9 = 9,
        preset10 = 10,
        preset11 = 11,
        preset12 = 12,
        preset13 = 13,
        preset14 = 14,
        preset15 = 15,
        preset16 = 16,
        preset17 = 17,
        preset18 = 18,
        preset19 = 19,
        preset20 = 20,
        preset21 = 21,
        preset22 = 22,
        preset23 = 23,
        preset24 = 24,
    };

    enum class dayOfWeek {
        sunday = 0,
        monday = 1,
        tuesday = 2,
        wednesday = 3,
        thursday = 4,
        friday = 5,
        saturday = 6,
    };

    enum class delegateMeetingMessageDeliveryOptions {
        sendToDelegateAndInformationToPrincipal = 0,
        sendToDelegateAndPrincipal = 1,
        sendToDelegateOnly = 2,
    };

    enum class eventType {
        singleInstance = 0,
        occurrence = 1,
        exception = 2,
        seriesMaster = 3,
    };

    enum class exchangeIdFormat {
        entryId = 0,
        ewsId = 1,
        immutableEntryId = 2,
        restId = 3,
        restImmutableEntryId = 4,
    };

    enum class externalAudienceScope {
        none = 0,
        contactsOnly = 1,
        all = 2,
    };

    enum class followupFlagStatus {
        notFlagged = 0,
        complete = 1,
        flagged = 2,
    };

    enum class importance {
        low = 0,
        normal = 1,
        high = 2,
    };

    enum class inferenceClassificationType {
        focused = 0,
        other = 1,
    };

    enum class mailTipsType {
        automaticReplies = 1,
        mailboxFullStatus = 2,
        customMailTip = 4,
        externalMemberCount = 8,
        totalMemberCount = 16,
        maxMessageSize = 32,
        deliveryRestriction = 64,
        moderationStatus = 128,
        recipientScope = 256,
        recipientSuggestions = 512,
    };

    enum class meetingMessageType {
        none = 0,
        meetingRequest = 1,
        meetingCancelled = 2,
        meetingAccepted = 3,
        meetingTenativelyAccepted = 4,
        meetingDeclined = 5,
    };

    enum class meetingRequestType {
        none = 0,
        newMeetingRequest = 1,
        fullUpdate = 65536,
        informationalUpdate = 131072,
        silentUpdate = 262144,
        outdated = 524288,
        principalWantsCopy = 1048576,
    };

    enum class messageActionFlag {
        any = 0,
        call = 1,
        doNotForward = 2,
        followUp = 3,
        fyi = 4,
        forward = 5,
        noResponseNecessary = 6,
        read = 7,
        reply = 8,
        replyToAll = 9,
        review = 10,
    };

    enum class onlineMeetingProviderType {
        unknown = 0,
        skypeForBusiness = 1,
        skypeForConsumer = 2,
        teamsForBusiness = 3,
    };

    enum class recipientScopeType {
        none = 0,
        internal = 1,
        external = 2,
        externalPartner = 4,
        externalNonPartner = 8,
    };

    enum class recurrencePatternType {
        daily = 0,
        weekly = 1,
        absoluteMonthly = 2,
        relativeMonthly = 3,
        absoluteYearly = 4,
        relativeYearly = 5,
    };

    enum class recurrenceRangeType {
        endDate = 0,
        noEnd = 1,
        numbered = 2,
    };

    enum class responseType {
        none = 0,
        organizer = 1,
        tentativelyAccepted = 2,
        accepted = 3,
        declined = 4,
        notResponded = 5,
    };

    enum class selectionLikelihoodInfo {
        notSpecified = 0,
        high = 1,
    };

    enum class sensitivity {
        normal = 0,
        personal = 1,
        _private = 2,
        confidential = 3,
    };

    enum class timeZoneStandard {
        windows = 0,
        iana = 1,
    };

    enum class websiteType {
        other = 0,
        home = 1,
        work = 2,
        blog = 3,
        profile = 4,
    };

    enum class weekIndex {
        first = 0,
        second = 1,
        third = 2,
        fourth = 3,
        last = 4,
    };

    enum class stagedFeatureName {
        passthroughAuthentication = 0,
        seamlessSso = 1,
        passwordHashSync = 2,
        emailAsAlternateId = 3,
        unknownFutureValue = 4,
    };

    enum class accessReviewInstanceDecisionItemFilterByCurrentUserOptions {
        reviewer = 1,
        unknownFutureValue = 2,
    };

    enum class accessReviewInstanceFilterByCurrentUserOptions {
        reviewer = 1,
        unknownFutureValue = 2,
    };

    enum class accessReviewScheduleDefinitionFilterByCurrentUserOptions {
        reviewer = 1,
        unknownFutureValue = 2,
    };

    enum class approvalFilterByCurrentUserOptions {
        target = 0,
        createdBy = 1,
        approver = 2,
        unknownFutureValue = 3,
    };

    enum class consentRequestFilterByCurrentUserOptions {
        reviewer = 0,
        unknownFutureValue = 1,
    };

    enum class agreementAcceptanceState {
        accepted = 2,
        declined = 3,
        unknownFutureValue = 5,
    };

    enum class cloudAppSecuritySessionControlType {
        mcasConfigured = 0,
        monitorOnly = 1,
        blockDownloads = 2,
        unknownFutureValue = 3,
    };

    enum class conditionalAccessClientApp {
        all = 0,
        browser = 1,
        mobileAppsAndDesktopClients = 2,
        exchangeActiveSync = 3,
        easSupported = 4,
        other = 5,
        unknownFutureValue = 6,
    };

    enum class conditionalAccessDevicePlatform {
        android = 0,
        iOS = 1,
        windows = 2,
        windowsPhone = 3,
        macOS = 4,
        all = 5,
        unknownFutureValue = 6,
    };

    enum class conditionalAccessGrantControl {
        block = 0,
        mfa = 1,
        compliantDevice = 2,
        domainJoinedDevice = 3,
        approvedApplication = 4,
        compliantApplication = 5,
        passwordChange = 6,
        unknownFutureValue = 7,
    };

    enum class conditionalAccessPolicyState {
        enabled = 0,
        disabled = 1,
        enabledForReportingButNotEnforced = 2,
    };

    enum class countryLookupMethodType {
        clientIpAddress = 0,
        authenticatorAppGps = 1,
        unknownFutureValue = 2,
    };

    enum class persistentBrowserSessionMode {
        always = 0,
        never = 1,
    };

    enum class signinFrequencyType {
        days = 0,
        hours = 1,
    };

    enum class complianceStatus {
        unknown = 0,
        notApplicable = 1,
        compliant = 2,
        remediated = 3,
        nonCompliant = 4,
        error = 5,
        conflict = 6,
        notAssigned = 7,
    };

    enum class installIntent {
        available = 0,
        required = 1,
        uninstall = 2,
        availableWithoutEnrollment = 3,
    };

    enum class managedAppAvailability {
        global = 0,
        lineOfBusiness = 1,
    };

    enum class mdmAppConfigKeyType {
        stringType = 0,
        integerType = 1,
        realType = 2,
        booleanType = 3,
        tokenType = 4,
    };

    enum class microsoftStoreForBusinessLicenseType {
        offline = 0,
        online = 1,
    };

    enum class mobileAppContentFileUploadState {
        success = 0,
        transientError = 1,
        error = 2,
        unknown = 3,
        azureStorageUriRequestSuccess = 100,
        azureStorageUriRequestPending = 101,
        azureStorageUriRequestFailed = 102,
        azureStorageUriRequestTimedOut = 103,
        azureStorageUriRenewalSuccess = 200,
        azureStorageUriRenewalPending = 201,
        azureStorageUriRenewalFailed = 202,
        azureStorageUriRenewalTimedOut = 203,
        commitFileSuccess = 300,
        commitFilePending = 301,
        commitFileFailed = 302,
        commitFileTimedOut = 303,
    };

    enum class mobileAppPublishingState {
        notPublished = 0,
        processing = 1,
        published = 2,
    };

    enum class runAsAccountType {
        system = 0,
        user = 1,
    };

    enum class vppTokenAccountType {
        business = 0,
        education = 1,
    };

    enum class win32LobAppDeliveryOptimizationPriority {
        notConfigured = 0,
        foreground = 1,
    };

    enum class win32LobAppFileSystemOperationType {
        notConfigured = 0,
        exists = 1,
        modifiedDate = 2,
        createdDate = 3,
        version = 4,
        sizeInMB = 5,
    };

    enum class win32LobAppMsiPackageType {
        perMachine = 0,
        perUser = 1,
        dualPurpose = 2,
    };

    enum class win32LobAppNotification {
        showAll = 0,
        showReboot = 1,
        hideAll = 2,
    };

    enum class win32LobAppPowerShellScriptRuleOperationType {
        notConfigured = 0,
        string = 1,
        dateTime = 2,
        integer = 3,
        _float = 4,
        version = 5,
        boolean = 6,
    };

    enum class win32LobAppRegistryRuleOperationType {
        notConfigured = 0,
        exists = 1,
        doesNotExist = 2,
        string = 3,
        integer = 4,
        version = 5,
    };

    enum class win32LobAppRestartBehavior {
        basedOnReturnCode = 0,
        allow = 1,
        suppress = 2,
        force = 3,
    };

    enum class win32LobAppReturnCodeType {
        failed = 0,
        success = 1,
        softReboot = 2,
        hardReboot = 3,
        retry = 4,
    };

    enum class win32LobAppRuleOperator {
        notConfigured = 0,
        equal = 1,
        notEqual = 2,
        greaterThan = 4,
        greaterThanOrEqual = 5,
        lessThan = 8,
        lessThanOrEqual = 9,
    };

    enum class win32LobAppRuleType {
        detection = 0,
        requirement = 1,
    };

    enum class windowsArchitecture {
        none = 0,
        x86 = 1,
        x64 = 2,
        arm = 4,
        neutral = 8,
    };

    enum class windowsDeviceType {
        none = 0,
        desktop = 1,
        mobile = 2,
        holographic = 4,
        team = 8,
    };

    enum class installState {
        notApplicable = 0,
        installed = 1,
        failed = 2,
        notInstalled = 3,
        uninstallFailed = 4,
        unknown = 5,
    };

    enum class androidRequiredPasswordType {
        deviceDefault = 0,
        alphabetic = 1,
        alphanumeric = 2,
        alphanumericWithSymbols = 3,
        lowSecurityBiometric = 4,
        numeric = 5,
        numericComplex = 6,
        any = 7,
    };

    enum class androidWorkProfileCrossProfileDataSharingType {
        deviceDefault = 0,
        preventAny = 1,
        allowPersonalToWork = 2,
        noRestrictions = 3,
    };

    enum class androidWorkProfileDefaultAppPermissionPolicyType {
        deviceDefault = 0,
        prompt = 1,
        autoGrant = 2,
        autoDeny = 3,
    };

    enum class androidWorkProfileRequiredPasswordType {
        deviceDefault = 0,
        lowSecurityBiometric = 1,
        required = 2,
        atLeastNumeric = 3,
        numericComplex = 4,
        atLeastAlphabetic = 5,
        atLeastAlphanumeric = 6,
        alphanumericWithSymbols = 7,
    };

    enum class applicationGuardBlockClipboardSharingType {
        notConfigured = 0,
        blockBoth = 1,
        blockHostToContainer = 2,
        blockContainerToHost = 3,
        blockNone = 4,
    };

    enum class applicationGuardBlockFileTransferType {
        notConfigured = 0,
        blockImageAndTextFile = 1,
        blockImageFile = 2,
        blockNone = 3,
        blockTextFile = 4,
    };

    enum class appListType {
        none = 0,
        appsInListCompliant = 1,
        appsNotInListCompliant = 2,
    };

    enum class appLockerApplicationControlType {
        notConfigured = 0,
        enforceComponentsAndStoreApps = 1,
        auditComponentsAndStoreApps = 2,
        enforceComponentsStoreAppsAndSmartlocker = 3,
        auditComponentsStoreAppsAndSmartlocker = 4,
    };

    enum class automaticUpdateMode {
        userDefined = 0,
        notifyDownload = 1,
        autoInstallAtMaintenanceTime = 2,
        autoInstallAndRebootAtMaintenanceTime = 3,
        autoInstallAndRebootAtScheduledTime = 4,
        autoInstallAndRebootWithoutEndUserControl = 5,
    };

    enum class bitLockerEncryptionMethod {
        aesCbc128 = 3,
        aesCbc256 = 4,
        xtsAes128 = 6,
        xtsAes256 = 7,
    };

    enum class defenderCloudBlockLevelType {
        notConfigured = 0,
        high = 1,
        highPlus = 2,
        zeroTolerance = 3,
    };

    enum class defenderMonitorFileActivity {
        userDefined = 0,
        disable = 1,
        monitorAllFiles = 2,
        monitorIncomingFilesOnly = 3,
        monitorOutgoingFilesOnly = 4,
    };

    enum class defenderPromptForSampleSubmission {
        userDefined = 0,
        alwaysPrompt = 1,
        promptBeforeSendingPersonalData = 2,
        neverSendData = 3,
        sendAllDataWithoutPrompting = 4,
    };

    enum class defenderScanType {
        userDefined = 0,
        disabled = 1,
        quick = 2,
        full = 3,
    };

    enum class defenderThreatAction {
        deviceDefault = 0,
        clean = 1,
        quarantine = 2,
        remove = 3,
        allow = 4,
        userDefined = 5,
        block = 6,
    };

    enum class deviceComplianceActionType {
        noAction = 0,
        notification = 1,
        block = 2,
        retire = 3,
        wipe = 4,
        removeResourceAccessProfiles = 5,
        pushNotification = 9,
    };

    enum class deviceThreatProtectionLevel {
        unavailable = 0,
        secured = 1,
        low = 2,
        medium = 3,
        high = 4,
        notSet = 10,
    };

    enum class diagnosticDataSubmissionMode {
        userDefined = 0,
        none = 1,
        basic = 2,
        enhanced = 3,
        full = 4,
    };

    enum class edgeCookiePolicy {
        userDefined = 0,
        allow = 1,
        blockThirdParty = 2,
        blockAll = 3,
    };

    enum class edgeSearchEngineType {
        _default = 0,
        bing = 1,
    };

    enum class editionUpgradeLicenseType {
        productKey = 0,
        licenseFile = 1,
    };

    enum class firewallCertificateRevocationListCheckMethodType {
        deviceDefault = 0,
        none = 1,
        attempt = 2,
        require = 3,
    };

    enum class firewallPacketQueueingMethodType {
        deviceDefault = 0,
        disabled = 1,
        queueInbound = 2,
        queueOutbound = 3,
        queueBoth = 4,
    };

    enum class firewallPreSharedKeyEncodingMethodType {
        deviceDefault = 0,
        none = 1,
        utF8 = 2,
    };

    enum class internetSiteSecurityLevel {
        userDefined = 0,
        medium = 1,
        mediumHigh = 2,
        high = 3,
    };

    enum class iosNotificationAlertType {
        deviceDefault = 0,
        banner = 1,
        modal = 2,
        none = 3,
    };

    enum class iosUpdatesInstallStatus {
        deviceOsHigherThanDesiredOsVersion = -2016330696,
        sharedDeviceUserLoggedInError = -2016330699,
        notSupportedOperation = -2016330701,
        installFailed = -2016330702,
        installPhoneCallInProgress = -2016330703,
        installInsufficientPower = -2016330704,
        installInsufficientSpace = -2016330705,
        installing = -2016330706,
        downloadInsufficientNetwork = -2016330707,
        downloadInsufficientPower = -2016330708,
        downloadInsufficientSpace = -2016330709,
        downloadRequiresComputer = -2016330710,
        downloadFailed = -2016330711,
        downloading = -2016330712,
        success = 0,
        available = 1,
        idle = 2,
        unknown = 3,
    };

    enum class miracastChannel {
        userDefined = 0,
        one = 1,
        two = 2,
        three = 3,
        four = 4,
        five = 5,
        six = 6,
        seven = 7,
        eight = 8,
        nine = 9,
        ten = 10,
        eleven = 11,
        thirtySix = 36,
        forty = 40,
        fortyFour = 44,
        fortyEight = 48,
        oneHundredFortyNine = 149,
        oneHundredFiftyThree = 153,
        oneHundredFiftySeven = 157,
        oneHundredSixtyOne = 161,
        oneHundredSixtyFive = 165,
    };

    enum class policyPlatformType {
        android = 0,
        iOS = 2,
        macOS = 3,
        windowsPhone81 = 4,
        windows81AndLater = 5,
        windows10AndLater = 6,
        androidWorkProfile = 7,
        all = 100,
    };

    enum class prereleaseFeatures {
        userDefined = 0,
        settingsOnly = 1,
        settingsAndExperimentations = 2,
        notAllowed = 3,
    };

    enum class ratingAppsType {
        allAllowed = 0,
        allBlocked = 1,
        agesAbove4 = 2,
        agesAbove9 = 3,
        agesAbove12 = 4,
        agesAbove17 = 5,
    };

    enum class ratingAustraliaMoviesType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        parentalGuidance = 3,
        mature = 4,
        agesAbove15 = 5,
        agesAbove18 = 6,
    };

    enum class ratingAustraliaTelevisionType {
        allAllowed = 0,
        allBlocked = 1,
        preschoolers = 2,
        children = 3,
        general = 4,
        parentalGuidance = 5,
        mature = 6,
        agesAbove15 = 7,
        agesAbove15AdultViolence = 8,
    };

    enum class ratingCanadaMoviesType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        parentalGuidance = 3,
        agesAbove14 = 4,
        agesAbove18 = 5,
        restricted = 6,
    };

    enum class ratingCanadaTelevisionType {
        allAllowed = 0,
        allBlocked = 1,
        children = 2,
        childrenAbove8 = 3,
        general = 4,
        parentalGuidance = 5,
        agesAbove14 = 6,
        agesAbove18 = 7,
    };

    enum class ratingFranceMoviesType {
        allAllowed = 0,
        allBlocked = 1,
        agesAbove10 = 2,
        agesAbove12 = 3,
        agesAbove16 = 4,
        agesAbove18 = 5,
    };

    enum class ratingFranceTelevisionType {
        allAllowed = 0,
        allBlocked = 1,
        agesAbove10 = 2,
        agesAbove12 = 3,
        agesAbove16 = 4,
        agesAbove18 = 5,
    };

    enum class ratingGermanyMoviesType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        agesAbove6 = 3,
        agesAbove12 = 4,
        agesAbove16 = 5,
        adults = 6,
    };

    enum class ratingGermanyTelevisionType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        agesAbove6 = 3,
        agesAbove12 = 4,
        agesAbove16 = 5,
        adults = 6,
    };

    enum class ratingIrelandMoviesType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        parentalGuidance = 3,
        agesAbove12 = 4,
        agesAbove15 = 5,
        agesAbove16 = 6,
        adults = 7,
    };

    enum class ratingIrelandTelevisionType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        children = 3,
        youngAdults = 4,
        parentalSupervision = 5,
        mature = 6,
    };

    enum class ratingJapanMoviesType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        parentalGuidance = 3,
        agesAbove15 = 4,
        agesAbove18 = 5,
    };

    enum class ratingJapanTelevisionType {
        allAllowed = 0,
        allBlocked = 1,
        explicitAllowed = 2,
    };

    enum class ratingNewZealandMoviesType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        parentalGuidance = 3,
        mature = 4,
        agesAbove13 = 5,
        agesAbove15 = 6,
        agesAbove16 = 7,
        agesAbove18 = 8,
        restricted = 9,
        agesAbove16Restricted = 10,
    };

    enum class ratingNewZealandTelevisionType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        parentalGuidance = 3,
        adults = 4,
    };

    enum class ratingUnitedKingdomMoviesType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        universalChildren = 3,
        parentalGuidance = 4,
        agesAbove12Video = 5,
        agesAbove12Cinema = 6,
        agesAbove15 = 7,
        adults = 8,
    };

    enum class ratingUnitedKingdomTelevisionType {
        allAllowed = 0,
        allBlocked = 1,
        caution = 2,
    };

    enum class ratingUnitedStatesMoviesType {
        allAllowed = 0,
        allBlocked = 1,
        general = 2,
        parentalGuidance = 3,
        parentalGuidance13 = 4,
        restricted = 5,
        adults = 6,
    };

    enum class ratingUnitedStatesTelevisionType {
        allAllowed = 0,
        allBlocked = 1,
        childrenAll = 2,
        childrenAbove7 = 3,
        general = 4,
        parentalGuidance = 5,
        childrenAbove14 = 6,
        adults = 7,
    };

    enum class requiredPasswordType {
        deviceDefault = 0,
        alphanumeric = 1,
        numeric = 2,
    };

    enum class safeSearchFilterType {
        userDefined = 0,
        strict = 1,
        moderate = 2,
    };

    enum class settingSourceType {
        deviceConfiguration = 0,
        deviceIntent = 1,
    };

    enum class sharedPCAccountDeletionPolicyType {
        immediate = 0,
        diskSpaceThreshold = 1,
        diskSpaceThresholdOrInactiveThreshold = 2,
    };

    enum class sharedPCAllowedAccountType {
        guest = 1,
        domain = 2,
    };

    enum class siteSecurityLevel {
        userDefined = 0,
        low = 1,
        mediumLow = 2,
        medium = 3,
        mediumHigh = 4,
        high = 5,
    };

    enum class stateManagementSetting {
        notConfigured = 0,
        blocked = 1,
        allowed = 2,
    };

    enum class visibilitySetting {
        notConfigured = 0,
        hide = 1,
        show = 2,
    };

    enum class webBrowserCookieSettings {
        browserDefault = 0,
        blockAlways = 1,
        allowCurrentWebSite = 2,
        allowFromWebsitesVisited = 3,
        allowAlways = 4,
    };

    enum class weeklySchedule {
        userDefined = 0,
        everyday = 1,
        sunday = 2,
        monday = 3,
        tuesday = 4,
        wednesday = 5,
        thursday = 6,
        friday = 7,
        saturday = 8,
    };

    enum class welcomeScreenMeetingInformation {
        userDefined = 0,
        showOrganizerAndTimeOnly = 1,
        showOrganizerAndTimeAndSubject = 2,
    };

    enum class windows10EditionType {
        windows10Enterprise = 0,
        windows10EnterpriseN = 1,
        windows10Education = 2,
        windows10EducationN = 3,
        windows10MobileEnterprise = 4,
        windows10HolographicEnterprise = 5,
        windows10Professional = 6,
        windows10ProfessionalN = 7,
        windows10ProfessionalEducation = 8,
        windows10ProfessionalEducationN = 9,
        windows10ProfessionalWorkstation = 10,
        windows10ProfessionalWorkstationN = 11,
    };

    enum class windowsDeliveryOptimizationMode {
        userDefined = 0,
        httpOnly = 1,
        httpWithPeeringNat = 2,
        httpWithPeeringPrivateGroup = 3,
        httpWithInternetPeering = 4,
        simpleDownload = 99,
        bypassMode = 100,
    };

    enum class windowsSpotlightEnablementSettings {
        notConfigured = 0,
        disabled = 1,
        enabled = 2,
    };

    enum class windowsStartMenuAppListVisibilityType {
        userDefined = 0,
        collapse = 1,
        remove = 2,
        disableSettingsApp = 4,
    };

    enum class windowsStartMenuModeType {
        userDefined = 0,
        fullScreen = 1,
        nonFullScreen = 2,
    };

    enum class windowsUpdateType {
        userDefined = 0,
        all = 1,
        businessReadyOnly = 2,
        windowsInsiderBuildFast = 3,
        windowsInsiderBuildSlow = 4,
        windowsInsiderBuildRelease = 5,
    };

    enum class windowsUserAccountControlSettings {
        userDefined = 0,
        alwaysNotify = 1,
        notifyOnAppChanges = 2,
        notifyOnAppChangesWithoutDimming = 3,
        neverNotify = 4,
    };

    enum class deviceManagementExchangeConnectorStatus {
        none = 0,
        connectionPending = 1,
        connected = 2,
        disconnected = 3,
    };

    enum class deviceManagementExchangeConnectorSyncType {
        fullSync = 0,
        deltaSync = 1,
    };

    enum class deviceManagementExchangeConnectorType {
        onPremises = 0,
        hosted = 1,
        serviceToService = 2,
        dedicated = 3,
    };

    enum class deviceManagementPartnerAppType {
        unknown = 0,
        singleTenantApp = 1,
        multiTenantApp = 2,
    };

    enum class deviceManagementPartnerTenantState {
        unknown = 0,
        unavailable = 1,
        enabled = 2,
        terminated = 3,
        rejected = 4,
        unresponsive = 5,
    };

    enum class enablement {
        notConfigured = 0,
        enabled = 1,
        disabled = 2,
    };

    enum class mdmAuthority {
        unknown = 0,
        intune = 1,
        sccm = 2,
        office365 = 3,
    };

    enum class mobileThreatPartnerTenantState {
        unavailable = 0,
        available = 1,
        enabled = 2,
        unresponsive = 3,
    };

    enum class vppTokenState {
        unknown = 0,
        valid = 1,
        expired = 2,
        invalid = 3,
        assignedToExternalMDM = 4,
    };

    enum class vppTokenSyncStatus {
        none = 0,
        inProgress = 1,
        completed = 2,
        failed = 3,
    };

    enum class windowsHelloForBusinessPinUsage {
        allowed = 0,
        required = 1,
        disallowed = 2,
    };

    enum class actionState {
        none = 0,
        pending = 1,
        canceled = 2,
        active = 3,
        done = 4,
        failed = 5,
        notSupported = 6,
    };

    enum class complianceState {
        unknown = 0,
        compliant = 1,
        noncompliant = 2,
        conflict = 3,
        error = 4,
        inGracePeriod = 254,
        configManager = 255,
    };

    enum class deviceEnrollmentType {
        unknown = 0,
        userEnrollment = 1,
        deviceEnrollmentManager = 2,
        appleBulkWithUser = 3,
        appleBulkWithoutUser = 4,
        windowsAzureADJoin = 5,
        windowsBulkUserless = 6,
        windowsAutoEnrollment = 7,
        windowsBulkAzureDomainJoin = 8,
        windowsCoManagement = 9,
        windowsAzureADJoinUsingDeviceAuth = 10,
        appleUserEnrollment = 11,
        appleUserEnrollmentWithServiceAccount = 12,
    };

    enum class deviceManagementExchangeAccessState {
        none = 0,
        unknown = 1,
        allowed = 2,
        blocked = 3,
        quarantined = 4,
    };

    enum class deviceManagementExchangeAccessStateReason {
        none = 0,
        unknown = 1,
        exchangeGlobalRule = 2,
        exchangeIndividualRule = 3,
        exchangeDeviceRule = 4,
        exchangeUpgrade = 5,
        exchangeMailboxPolicy = 6,
        other = 7,
        compliant = 8,
        notCompliant = 9,
        notEnrolled = 10,
        unknownLocation = 12,
        mfaRequired = 13,
        azureADBlockDueToAccessPolicy = 14,
        compromisedPassword = 15,
        deviceNotKnownWithManagedApp = 16,
    };

    enum class deviceManagementSubscriptionState {
        pending = 0,
        active = 1,
        warning = 2,
        disabled = 3,
        deleted = 4,
        blocked = 5,
        lockedOut = 8,
    };

    enum class deviceRegistrationState {
        notRegistered = 0,
        registered = 2,
        revoked = 3,
        keyConflict = 4,
        approvalPending = 5,
        certificateReset = 6,
        notRegisteredPendingEnrollment = 7,
        unknown = 8,
    };

    enum class managedDeviceOwnerType {
        unknown = 0,
        company = 1,
        personal = 2,
    };

    enum class managedDevicePartnerReportedHealthState {
        unknown = 0,
        activated = 1,
        deactivated = 2,
        secured = 3,
        lowSeverity = 4,
        mediumSeverity = 5,
        highSeverity = 6,
        unresponsive = 7,
        compromised = 8,
        misconfigured = 9,
    };

    enum class managementAgentType {
        eas = 1,
        mdm = 2,
        easMdm = 3,
        intuneClient = 4,
        easIntuneClient = 5,
        configurationManagerClient = 8,
        configurationManagerClientMdm = 10,
        configurationManagerClientMdmEas = 11,
        unknown = 16,
        jamf = 32,
        googleCloudDevicePolicyController = 64,
    };

    enum class enrollmentState {
        unknown = 0,
        enrolled = 1,
        pendingReset = 2,
        failed = 3,
        notContacted = 4,
    };

    enum class importedWindowsAutopilotDeviceIdentityImportStatus {
        unknown = 0,
        pending = 1,
        partial = 2,
        complete = 3,
        error = 4,
    };

    enum class importedWindowsAutopilotDeviceIdentityUploadStatus {
        noUpload = 0,
        pending = 1,
        complete = 2,
        error = 3,
    };

    enum class managedAppClipboardSharingLevel {
        allApps = 0,
        managedAppsWithPasteIn = 1,
        managedApps = 2,
        blocked = 3,
    };

    enum class managedAppDataEncryptionType {
        useDeviceSettings = 0,
        afterDeviceRestart = 1,
        whenDeviceLockedExceptOpenFiles = 2,
        whenDeviceLocked = 3,
    };

    enum class managedAppDataStorageLocation {
        oneDriveForBusiness = 1,
        sharePoint = 2,
        box = 3,
        localStorage = 6,
    };

    enum class managedAppDataTransferLevel {
        allApps = 0,
        managedApps = 1,
        none = 2,
    };

    enum class managedAppFlaggedReason {
        none = 0,
        rootedDevice = 1,
    };

    enum class managedAppPinCharacterSet {
        numeric = 0,
        alphanumericAndSymbol = 1,
    };

    enum class managedBrowserType {
        notConfigured = 0,
        microsoftEdge = 1,
    };

    enum class targetedManagedAppGroupType {
        selectedPublicApps = 0,
        allCoreMicrosoftApps = 1,
        allMicrosoftApps = 2,
        allApps = 4,
    };

    enum class windowsInformationProtectionEnforcementLevel {
        noProtection = 0,
        encryptAndAuditOnly = 1,
        encryptAuditAndPrompt = 2,
        encryptAuditAndBlock = 3,
    };

    enum class windowsInformationProtectionPinCharacterRequirements {
        notAllow = 0,
        requireAtLeastOne = 1,
        allow = 2,
    };

    enum class notificationTemplateBrandingOptions {
        none = 0,
        includeCompanyLogo = 1,
        includeCompanyName = 2,
        includeContactInformation = 4,
    };

    enum class remoteAssistanceOnboardingStatus {
        notOnboarded = 0,
        onboarding = 1,
        onboarded = 2,
    };

    enum class deviceManagementExportJobLocalizationType {
        localizedValuesAsAdditionalColumn = 0,
        replaceLocalizableValues = 1,
    };

    enum class deviceManagementReportFileFormat {
        csv = 0,
        pdf = 1,
    };

    enum class deviceManagementReportStatus {
        unknown = 0,
        notStarted = 1,
        inProgress = 2,
        completed = 3,
        failed = 4,
    };

    enum class deviceEnrollmentFailureReason {
        unknown = 0,
        authentication = 1,
        authorization = 2,
        accountValidation = 3,
        userValidation = 4,
        deviceNotSupported = 5,
        inMaintenance = 6,
        badRequest = 7,
        featureNotSupported = 8,
        enrollmentRestrictionsEnforced = 9,
        clientDisconnected = 10,
        userAbandonment = 11,
    };

    enum class applicationType {
        universal = 1,
        desktop = 2,
    };

    enum class postType {
        regular = 0,
        quick = 1,
        strategic = 2,
        unknownFutureValue = 3,
    };

    enum class serviceHealthClassificationType {
        advisory = 1,
        incident = 2,
        unknownFutureValue = 3,
    };

    enum class serviceHealthOrigin {
        microsoft = 1,
        thirdParty = 2,
        customer = 3,
        unknownFutureValue = 4,
    };

    enum class serviceHealthStatus {
        serviceOperational = 0,
        investigating = 1,
        restoringService = 2,
        verifyingService = 3,
        serviceRestored = 4,
        postIncidentReviewPublished = 5,
        serviceDegradation = 6,
        serviceInterruption = 7,
        extendedRecovery = 8,
        falsePositive = 9,
        investigationSuspended = 10,
        resolved = 11,
        mitigatedExternal = 12,
        mitigated = 13,
        resolvedExternal = 14,
        confirmed = 15,
        reported = 16,
        unknownFutureValue = 17,
    };

    enum class serviceUpdateCategory {
        preventOrFixIssue = 1,
        planForChange = 2,
        stayInformed = 3,
        unknownFutureValue = 4,
    };

    enum class serviceUpdateSeverity {
        normal = 1,
        high = 2,
        critical = 3,
        unknownFutureValue = 4,
    };

    enum class entityType {
        event = 0,
        message = 1,
        driveItem = 2,
        externalItem = 4,
        site = 5,
        list = 6,
        listItem = 7,
        drive = 8,
        unknownfuturevalue = 9,
    };

    enum class plannerPreviewType {
        automatic = 0,
        noPreview = 1,
        checklist = 2,
        description = 3,
        reference = 4,
    };

    enum class onenotePatchActionType {
        Replace = 0,
        Append = 1,
        Delete = 2,
        Insert = 3,
        Prepend = 4,
    };

    enum class onenotePatchInsertPosition {
        After = 0,
        Before = 1,
    };

    enum class onenoteSourceService {
        Unknown = 0,
        OneDrive = 1,
        OneDriveForBusiness = 2,
        OnPremOneDriveForBusiness = 3,
    };

    enum class onenoteUserRole {
        None = -1,
        Owner = 0,
        Contributor = 1,
        Reader = 2,
    };

    enum class operationStatus {
        NotStarted = 0,
        Running = 1,
        Completed = 2,
        Failed = 3,
    };

    enum class printColorMode {
        blackAndWhite = 0,
        grayscale = 1,
        color = 2,
        _auto = 3,
        unknownFutureValue = 4,
    };

    enum class printDuplexMode {
        flipOnLongEdge = 0,
        flipOnShortEdge = 1,
        oneSided = 2,
        unknownFutureValue = 3,
    };

    enum class printerFeedOrientation {
        longEdgeFirst = 0,
        shortEdgeFirst = 1,
        unknownFutureValue = 2,
    };

    enum class printerProcessingState {
        unknown = 0,
        idle = 1,
        processing = 2,
        stopped = 3,
        unknownFutureValue = 4,
    };

    enum class printerProcessingStateDetail {
        paused = 0,
        mediaJam = 2,
        mediaNeeded = 3,
        mediaLow = 4,
        mediaEmpty = 5,
        coverOpen = 6,
        interlockOpen = 7,
        outputTrayMissing = 9,
        outputAreaFull = 10,
        markerSupplyLow = 11,
        markerSupplyEmpty = 12,
        inputTrayMissing = 13,
        outputAreaAlmostFull = 14,
        markerWasteAlmostFull = 15,
        markerWasteFull = 16,
        fuserOverTemp = 17,
        fuserUnderTemp = 18,
        other = 19,
        none = 20,
        movingToPaused = 21,
        shutdown = 22,
        connectingToDevice = 23,
        timedOut = 24,
        stopping = 25,
        stoppedPartially = 26,
        tonerLow = 27,
        tonerEmpty = 28,
        spoolAreaFull = 29,
        doorOpen = 30,
        opticalPhotoConductorNearEndOfLife = 31,
        opticalPhotoConductorLifeOver = 32,
        developerLow = 33,
        developerEmpty = 34,
        interpreterResourceUnavailable = 35,
        unknownFutureValue = 36,
        alertRemovalOfBinaryChangeEntry = 37,
        banderAdded = 38,
        banderAlmostEmpty = 39,
        banderAlmostFull = 40,
        banderAtLimit = 41,
        banderClosed = 42,
        banderConfigurationChange = 43,
        banderCoverClosed = 44,
        banderCoverOpen = 45,
        banderEmpty = 46,
        banderFull = 47,
        banderInterlockClosed = 48,
        banderInterlockOpen = 49,
        banderJam = 50,
        banderLifeAlmostOver = 51,
        banderLifeOver = 52,
        banderMemoryExhausted = 53,
        banderMissing = 54,
        banderMotorFailure = 55,
        banderNearLimit = 56,
        banderOffline = 57,
        banderOpened = 58,
        banderOverTemperature = 59,
        banderPowerSaver = 60,
        banderRecoverableFailure = 61,
        banderRecoverableStorage = 62,
        banderRemoved = 63,
        banderResourceAdded = 64,
        banderResourceRemoved = 65,
        banderThermistorFailure = 66,
        banderTimingFailure = 67,
        banderTurnedOff = 68,
        banderTurnedOn = 69,
        banderUnderTemperature = 70,
        banderUnrecoverableFailure = 71,
        banderUnrecoverableStorageError = 72,
        banderWarmingUp = 73,
        binderAdded = 74,
        binderAlmostEmpty = 75,
        binderAlmostFull = 76,
        binderAtLimit = 77,
        binderClosed = 78,
        binderConfigurationChange = 79,
        binderCoverClosed = 80,
        binderCoverOpen = 81,
        binderEmpty = 82,
        binderFull = 83,
        binderInterlockClosed = 84,
        binderInterlockOpen = 85,
        binderJam = 86,
        binderLifeAlmostOver = 87,
        binderLifeOver = 88,
        binderMemoryExhausted = 89,
        binderMissing = 90,
        binderMotorFailure = 91,
        binderNearLimit = 92,
        binderOffline = 93,
        binderOpened = 94,
        binderOverTemperature = 95,
        binderPowerSaver = 96,
        binderRecoverableFailure = 97,
        binderRecoverableStorage = 98,
        binderRemoved = 99,
        binderResourceAdded = 100,
        binderResourceRemoved = 101,
        binderThermistorFailure = 102,
        binderTimingFailure = 103,
        binderTurnedOff = 104,
        binderTurnedOn = 105,
        binderUnderTemperature = 106,
        binderUnrecoverableFailure = 107,
        binderUnrecoverableStorageError = 108,
        binderWarmingUp = 109,
        cameraFailure = 110,
        chamberCooling = 111,
        chamberFailure = 112,
        chamberHeating = 113,
        chamberTemperatureHigh = 114,
        chamberTemperatureLow = 115,
        cleanerLifeAlmostOver = 116,
        cleanerLifeOver = 117,
        configurationChange = 118,
        deactivated = 119,
        deleted = 120,
        dieCutterAdded = 121,
        dieCutterAlmostEmpty = 122,
        dieCutterAlmostFull = 123,
        dieCutterAtLimit = 124,
        dieCutterClosed = 125,
        dieCutterConfigurationChange = 126,
        dieCutterCoverClosed = 127,
        dieCutterCoverOpen = 128,
        dieCutterEmpty = 129,
        dieCutterFull = 130,
        dieCutterInterlockClosed = 131,
        dieCutterInterlockOpen = 132,
        dieCutterJam = 133,
        dieCutterLifeAlmostOver = 134,
        dieCutterLifeOver = 135,
        dieCutterMemoryExhausted = 136,
        dieCutterMissing = 137,
        dieCutterMotorFailure = 138,
        dieCutterNearLimit = 139,
        dieCutterOffline = 140,
        dieCutterOpened = 141,
        dieCutterOverTemperature = 142,
        dieCutterPowerSaver = 143,
        dieCutterRecoverableFailure = 144,
        dieCutterRecoverableStorage = 145,
        dieCutterRemoved = 146,
        dieCutterResourceAdded = 147,
        dieCutterResourceRemoved = 148,
        dieCutterThermistorFailure = 149,
        dieCutterTimingFailure = 150,
        dieCutterTurnedOff = 151,
        dieCutterTurnedOn = 152,
        dieCutterUnderTemperature = 153,
        dieCutterUnrecoverableFailure = 154,
        dieCutterUnrecoverableStorageError = 155,
        dieCutterWarmingUp = 156,
        extruderCooling = 157,
        extruderFailure = 158,
        extruderHeating = 159,
        extruderJam = 160,
        extruderTemperatureHigh = 161,
        extruderTemperatureLow = 162,
        fanFailure = 163,
        faxModemLifeAlmostOver = 164,
        faxModemLifeOver = 165,
        faxModemMissing = 166,
        faxModemTurnedOff = 167,
        faxModemTurnedOn = 168,
        folderAdded = 169,
        folderAlmostEmpty = 170,
        folderAlmostFull = 171,
        folderAtLimit = 172,
        folderClosed = 173,
        folderConfigurationChange = 174,
        folderCoverClosed = 175,
        folderCoverOpen = 176,
        folderEmpty = 177,
        folderFull = 178,
        folderInterlockClosed = 179,
        folderInterlockOpen = 180,
        folderJam = 181,
        folderLifeAlmostOver = 182,
        folderLifeOver = 183,
        folderMemoryExhausted = 184,
        folderMissing = 185,
        folderMotorFailure = 186,
        folderNearLimit = 187,
        folderOffline = 188,
        folderOpened = 189,
        folderOverTemperature = 190,
        folderPowerSaver = 191,
        folderRecoverableFailure = 192,
        folderRecoverableStorage = 193,
        folderRemoved = 194,
        folderResourceAdded = 195,
        folderResourceRemoved = 196,
        folderThermistorFailure = 197,
        folderTimingFailure = 198,
        folderTurnedOff = 199,
        folderTurnedOn = 200,
        folderUnderTemperature = 201,
        folderUnrecoverableFailure = 202,
        folderUnrecoverableStorageError = 203,
        folderWarmingUp = 204,
        hibernate = 205,
        holdNewJobs = 206,
        identifyPrinterRequested = 207,
        imprinterAdded = 208,
        imprinterAlmostEmpty = 209,
        imprinterAlmostFull = 210,
        imprinterAtLimit = 211,
        imprinterClosed = 212,
        imprinterConfigurationChange = 213,
        imprinterCoverClosed = 214,
        imprinterCoverOpen = 215,
        imprinterEmpty = 216,
        imprinterFull = 217,
        imprinterInterlockClosed = 218,
        imprinterInterlockOpen = 219,
        imprinterJam = 220,
        imprinterLifeAlmostOver = 221,
        imprinterLifeOver = 222,
        imprinterMemoryExhausted = 223,
        imprinterMissing = 224,
        imprinterMotorFailure = 225,
        imprinterNearLimit = 226,
        imprinterOffline = 227,
        imprinterOpened = 228,
        imprinterOverTemperature = 229,
        imprinterPowerSaver = 230,
        imprinterRecoverableFailure = 231,
        imprinterRecoverableStorage = 232,
        imprinterRemoved = 233,
        imprinterResourceAdded = 234,
        imprinterResourceRemoved = 235,
        imprinterThermistorFailure = 236,
        imprinterTimingFailure = 237,
        imprinterTurnedOff = 238,
        imprinterTurnedOn = 239,
        imprinterUnderTemperature = 240,
        imprinterUnrecoverableFailure = 241,
        imprinterUnrecoverableStorageError = 242,
        imprinterWarmingUp = 243,
        inputCannotFeedSizeSelected = 244,
        inputManualInputRequest = 245,
        inputMediaColorChange = 246,
        inputMediaFormPartsChange = 247,
        inputMediaSizeChange = 248,
        inputMediaTrayFailure = 249,
        inputMediaTrayFeedError = 250,
        inputMediaTrayJam = 251,
        inputMediaTypeChange = 252,
        inputMediaWeightChange = 253,
        inputPickRollerFailure = 254,
        inputPickRollerLifeOver = 255,
        inputPickRollerLifeWarn = 256,
        inputPickRollerMissing = 257,
        inputTrayElevationFailure = 258,
        inputTrayPositionFailure = 259,
        inserterAdded = 260,
        inserterAlmostEmpty = 261,
        inserterAlmostFull = 262,
        inserterAtLimit = 263,
        inserterClosed = 264,
        inserterConfigurationChange = 265,
        inserterCoverClosed = 266,
        inserterCoverOpen = 267,
        inserterEmpty = 268,
        inserterFull = 269,
        inserterInterlockClosed = 270,
        inserterInterlockOpen = 271,
        inserterJam = 272,
        inserterLifeAlmostOver = 273,
        inserterLifeOver = 274,
        inserterMemoryExhausted = 275,
        inserterMissing = 276,
        inserterMotorFailure = 277,
        inserterNearLimit = 278,
        inserterOffline = 279,
        inserterOpened = 280,
        inserterOverTemperature = 281,
        inserterPowerSaver = 282,
        inserterRecoverableFailure = 283,
        inserterRecoverableStorage = 284,
        inserterRemoved = 285,
        inserterResourceAdded = 286,
        inserterResourceRemoved = 287,
        inserterThermistorFailure = 288,
        inserterTimingFailure = 289,
        inserterTurnedOff = 290,
        inserterTurnedOn = 291,
        inserterUnderTemperature = 292,
        inserterUnrecoverableFailure = 293,
        inserterUnrecoverableStorageError = 294,
        inserterWarmingUp = 295,
        interlockClosed = 296,
        interpreterCartridgeAdded = 297,
        interpreterCartridgeDeleted = 298,
        interpreterComplexPageEncountered = 299,
        interpreterMemoryDecrease = 300,
        interpreterMemoryIncrease = 301,
        interpreterResourceAdded = 302,
        interpreterResourceDeleted = 303,
        lampAtEol = 304,
        lampFailure = 305,
        lampNearEol = 306,
        laserAtEol = 307,
        laserFailure = 308,
        laserNearEol = 309,
        makeEnvelopeAdded = 310,
        makeEnvelopeAlmostEmpty = 311,
        makeEnvelopeAlmostFull = 312,
        makeEnvelopeAtLimit = 313,
        makeEnvelopeClosed = 314,
        makeEnvelopeConfigurationChange = 315,
        makeEnvelopeCoverClosed = 316,
        makeEnvelopeCoverOpen = 317,
        makeEnvelopeEmpty = 318,
        makeEnvelopeFull = 319,
        makeEnvelopeInterlockClosed = 320,
        makeEnvelopeInterlockOpen = 321,
        makeEnvelopeJam = 322,
        makeEnvelopeLifeAlmostOver = 323,
        makeEnvelopeLifeOver = 324,
        makeEnvelopeMemoryExhausted = 325,
        makeEnvelopeMissing = 326,
        makeEnvelopeMotorFailure = 327,
        makeEnvelopeNearLimit = 328,
        makeEnvelopeOffline = 329,
        makeEnvelopeOpened = 330,
        makeEnvelopeOverTemperature = 331,
        makeEnvelopePowerSaver = 332,
        makeEnvelopeRecoverableFailure = 333,
        makeEnvelopeRecoverableStorage = 334,
        makeEnvelopeRemoved = 335,
        makeEnvelopeResourceAdded = 336,
        makeEnvelopeResourceRemoved = 337,
        makeEnvelopeThermistorFailure = 338,
        makeEnvelopeTimingFailure = 339,
        makeEnvelopeTurnedOff = 340,
        makeEnvelopeTurnedOn = 341,
        makeEnvelopeUnderTemperature = 342,
        makeEnvelopeUnrecoverableFailure = 343,
        makeEnvelopeUnrecoverableStorageError = 344,
        makeEnvelopeWarmingUp = 345,
        markerAdjustingPrintQuality = 346,
        markerCleanerMissing = 347,
        markerDeveloperAlmostEmpty = 348,
        markerDeveloperEmpty = 349,
        markerDeveloperMissing = 350,
        markerFuserMissing = 351,
        markerFuserThermistorFailure = 352,
        markerFuserTimingFailure = 353,
        markerInkAlmostEmpty = 354,
        markerInkEmpty = 355,
        markerInkMissing = 356,
        markerOpcMissing = 357,
        markerPrintRibbonAlmostEmpty = 358,
        markerPrintRibbonEmpty = 359,
        markerPrintRibbonMissing = 360,
        markerSupplyAlmostEmpty = 361,
        markerSupplyMissing = 362,
        markerTonerCartridgeMissing = 363,
        markerTonerMissing = 364,
        markerWasteInkReceptacleAlmostFull = 365,
        markerWasteInkReceptacleFull = 366,
        markerWasteInkReceptacleMissing = 367,
        markerWasteMissing = 368,
        markerWasteTonerReceptacleAlmostFull = 369,
        markerWasteTonerReceptacleFull = 370,
        markerWasteTonerReceptacleMissing = 371,
        materialEmpty = 372,
        materialLow = 373,
        materialNeeded = 374,
        mediaDrying = 375,
        mediaPathCannotDuplexMediaSelected = 376,
        mediaPathFailure = 377,
        mediaPathInputEmpty = 378,
        mediaPathInputFeedError = 379,
        mediaPathInputJam = 380,
        mediaPathInputRequest = 381,
        mediaPathJam = 382,
        mediaPathMediaTrayAlmostFull = 383,
        mediaPathMediaTrayFull = 384,
        mediaPathMediaTrayMissing = 385,
        mediaPathOutputFeedError = 386,
        mediaPathOutputFull = 387,
        mediaPathOutputJam = 388,
        mediaPathPickRollerFailure = 389,
        mediaPathPickRollerLifeOver = 390,
        mediaPathPickRollerLifeWarn = 391,
        mediaPathPickRollerMissing = 392,
        motorFailure = 393,
        outputMailboxSelectFailure = 394,
        outputMediaTrayFailure = 395,
        outputMediaTrayFeedError = 396,
        outputMediaTrayJam = 397,
        perforaterAdded = 398,
        perforaterAlmostEmpty = 399,
        perforaterAlmostFull = 400,
        perforaterAtLimit = 401,
        perforaterClosed = 402,
        perforaterConfigurationChange = 403,
        perforaterCoverClosed = 404,
        perforaterCoverOpen = 405,
        perforaterEmpty = 406,
        perforaterFull = 407,
        perforaterInterlockClosed = 408,
        perforaterInterlockOpen = 409,
        perforaterJam = 410,
        perforaterLifeAlmostOver = 411,
        perforaterLifeOver = 412,
        perforaterMemoryExhausted = 413,
        perforaterMissing = 414,
        perforaterMotorFailure = 415,
        perforaterNearLimit = 416,
        perforaterOffline = 417,
        perforaterOpened = 418,
        perforaterOverTemperature = 419,
        perforaterPowerSaver = 420,
        perforaterRecoverableFailure = 421,
        perforaterRecoverableStorage = 422,
        perforaterRemoved = 423,
        perforaterResourceAdded = 424,
        perforaterResourceRemoved = 425,
        perforaterThermistorFailure = 426,
        perforaterTimingFailure = 427,
        perforaterTurnedOff = 428,
        perforaterTurnedOn = 429,
        perforaterUnderTemperature = 430,
        perforaterUnrecoverableFailure = 431,
        perforaterUnrecoverableStorageError = 432,
        perforaterWarmingUp = 433,
        platformCooling = 434,
        platformFailure = 435,
        platformHeating = 436,
        platformTemperatureHigh = 437,
        platformTemperatureLow = 438,
        powerDown = 439,
        powerUp = 440,
        printerManualReset = 441,
        printerNmsReset = 442,
        printerReadyToPrint = 443,
        puncherAdded = 444,
        puncherAlmostEmpty = 445,
        puncherAlmostFull = 446,
        puncherAtLimit = 447,
        puncherClosed = 448,
        puncherConfigurationChange = 449,
        puncherCoverClosed = 450,
        puncherCoverOpen = 451,
        puncherEmpty = 452,
        puncherFull = 453,
        puncherInterlockClosed = 454,
        puncherInterlockOpen = 455,
        puncherJam = 456,
        puncherLifeAlmostOver = 457,
        puncherLifeOver = 458,
        puncherMemoryExhausted = 459,
        puncherMissing = 460,
        puncherMotorFailure = 461,
        puncherNearLimit = 462,
        puncherOffline = 463,
        puncherOpened = 464,
        puncherOverTemperature = 465,
        puncherPowerSaver = 466,
        puncherRecoverableFailure = 467,
        puncherRecoverableStorage = 468,
        puncherRemoved = 469,
        puncherResourceAdded = 470,
        puncherResourceRemoved = 471,
        puncherThermistorFailure = 472,
        puncherTimingFailure = 473,
        puncherTurnedOff = 474,
        puncherTurnedOn = 475,
        puncherUnderTemperature = 476,
        puncherUnrecoverableFailure = 477,
        puncherUnrecoverableStorageError = 478,
        puncherWarmingUp = 479,
        resuming = 480,
        scanMediaPathFailure = 481,
        scanMediaPathInputEmpty = 482,
        scanMediaPathInputFeedError = 483,
        scanMediaPathInputJam = 484,
        scanMediaPathInputRequest = 485,
        scanMediaPathJam = 486,
        scanMediaPathOutputFeedError = 487,
        scanMediaPathOutputFull = 488,
        scanMediaPathOutputJam = 489,
        scanMediaPathPickRollerFailure = 490,
        scanMediaPathPickRollerLifeOver = 491,
        scanMediaPathPickRollerLifeWarn = 492,
        scanMediaPathPickRollerMissing = 493,
        scanMediaPathTrayAlmostFull = 494,
        scanMediaPathTrayFull = 495,
        scanMediaPathTrayMissing = 496,
        scannerLightFailure = 497,
        scannerLightLifeAlmostOver = 498,
        scannerLightLifeOver = 499,
        scannerLightMissing = 500,
        scannerSensorFailure = 501,
        scannerSensorLifeAlmostOver = 502,
        scannerSensorLifeOver = 503,
        scannerSensorMissing = 504,
        separationCutterAdded = 505,
        separationCutterAlmostEmpty = 506,
        separationCutterAlmostFull = 507,
        separationCutterAtLimit = 508,
        separationCutterClosed = 509,
        separationCutterConfigurationChange = 510,
        separationCutterCoverClosed = 511,
        separationCutterCoverOpen = 512,
        separationCutterEmpty = 513,
        separationCutterFull = 514,
        separationCutterInterlockClosed = 515,
        separationCutterInterlockOpen = 516,
        separationCutterJam = 517,
        separationCutterLifeAlmostOver = 518,
        separationCutterLifeOver = 519,
        separationCutterMemoryExhausted = 520,
        separationCutterMissing = 521,
        separationCutterMotorFailure = 522,
        separationCutterNearLimit = 523,
        separationCutterOffline = 524,
        separationCutterOpened = 525,
        separationCutterOverTemperature = 526,
        separationCutterPowerSaver = 527,
        separationCutterRecoverableFailure = 528,
        separationCutterRecoverableStorage = 529,
        separationCutterRemoved = 530,
        separationCutterResourceAdded = 531,
        separationCutterResourceRemoved = 532,
        separationCutterThermistorFailure = 533,
        separationCutterTimingFailure = 534,
        separationCutterTurnedOff = 535,
        separationCutterTurnedOn = 536,
        separationCutterUnderTemperature = 537,
        separationCutterUnrecoverableFailure = 538,
        separationCutterUnrecoverableStorageError = 539,
        separationCutterWarmingUp = 540,
        sheetRotatorAdded = 541,
        sheetRotatorAlmostEmpty = 542,
        sheetRotatorAlmostFull = 543,
        sheetRotatorAtLimit = 544,
        sheetRotatorClosed = 545,
        sheetRotatorConfigurationChange = 546,
        sheetRotatorCoverClosed = 547,
        sheetRotatorCoverOpen = 548,
        sheetRotatorEmpty = 549,
        sheetRotatorFull = 550,
        sheetRotatorInterlockClosed = 551,
        sheetRotatorInterlockOpen = 552,
        sheetRotatorJam = 553,
        sheetRotatorLifeAlmostOver = 554,
        sheetRotatorLifeOver = 555,
        sheetRotatorMemoryExhausted = 556,
        sheetRotatorMissing = 557,
        sheetRotatorMotorFailure = 558,
        sheetRotatorNearLimit = 559,
        sheetRotatorOffline = 560,
        sheetRotatorOpened = 561,
        sheetRotatorOverTemperature = 562,
        sheetRotatorPowerSaver = 563,
        sheetRotatorRecoverableFailure = 564,
        sheetRotatorRecoverableStorage = 565,
        sheetRotatorRemoved = 566,
        sheetRotatorResourceAdded = 567,
        sheetRotatorResourceRemoved = 568,
        sheetRotatorThermistorFailure = 569,
        sheetRotatorTimingFailure = 570,
        sheetRotatorTurnedOff = 571,
        sheetRotatorTurnedOn = 572,
        sheetRotatorUnderTemperature = 573,
        sheetRotatorUnrecoverableFailure = 574,
        sheetRotatorUnrecoverableStorageError = 575,
        sheetRotatorWarmingUp = 576,
        slitterAdded = 577,
        slitterAlmostEmpty = 578,
        slitterAlmostFull = 579,
        slitterAtLimit = 580,
        slitterClosed = 581,
        slitterConfigurationChange = 582,
        slitterCoverClosed = 583,
        slitterCoverOpen = 584,
        slitterEmpty = 585,
        slitterFull = 586,
        slitterInterlockClosed = 587,
        slitterInterlockOpen = 588,
        slitterJam = 589,
        slitterLifeAlmostOver = 590,
        slitterLifeOver = 591,
        slitterMemoryExhausted = 592,
        slitterMissing = 593,
        slitterMotorFailure = 594,
        slitterNearLimit = 595,
        slitterOffline = 596,
        slitterOpened = 597,
        slitterOverTemperature = 598,
        slitterPowerSaver = 599,
        slitterRecoverableFailure = 600,
        slitterRecoverableStorage = 601,
        slitterRemoved = 602,
        slitterResourceAdded = 603,
        slitterResourceRemoved = 604,
        slitterThermistorFailure = 605,
        slitterTimingFailure = 606,
        slitterTurnedOff = 607,
        slitterTurnedOn = 608,
        slitterUnderTemperature = 609,
        slitterUnrecoverableFailure = 610,
        slitterUnrecoverableStorageError = 611,
        slitterWarmingUp = 612,
        stackerAdded = 613,
        stackerAlmostEmpty = 614,
        stackerAlmostFull = 615,
        stackerAtLimit = 616,
        stackerClosed = 617,
        stackerConfigurationChange = 618,
        stackerCoverClosed = 619,
        stackerCoverOpen = 620,
        stackerEmpty = 621,
        stackerFull = 622,
        stackerInterlockClosed = 623,
        stackerInterlockOpen = 624,
        stackerJam = 625,
        stackerLifeAlmostOver = 626,
        stackerLifeOver = 627,
        stackerMemoryExhausted = 628,
        stackerMissing = 629,
        stackerMotorFailure = 630,
        stackerNearLimit = 631,
        stackerOffline = 632,
        stackerOpened = 633,
        stackerOverTemperature = 634,
        stackerPowerSaver = 635,
        stackerRecoverableFailure = 636,
        stackerRecoverableStorage = 637,
        stackerRemoved = 638,
        stackerResourceAdded = 639,
        stackerResourceRemoved = 640,
        stackerThermistorFailure = 641,
        stackerTimingFailure = 642,
        stackerTurnedOff = 643,
        stackerTurnedOn = 644,
        stackerUnderTemperature = 645,
        stackerUnrecoverableFailure = 646,
        stackerUnrecoverableStorageError = 647,
        stackerWarmingUp = 648,
        standby = 649,
        staplerAdded = 650,
        staplerAlmostEmpty = 651,
        staplerAlmostFull = 652,
        staplerAtLimit = 653,
        staplerClosed = 654,
        staplerConfigurationChange = 655,
        staplerCoverClosed = 656,
        staplerCoverOpen = 657,
        staplerEmpty = 658,
        staplerFull = 659,
        staplerInterlockClosed = 660,
        staplerInterlockOpen = 661,
        staplerJam = 662,
        staplerLifeAlmostOver = 663,
        staplerLifeOver = 664,
        staplerMemoryExhausted = 665,
        staplerMissing = 666,
        staplerMotorFailure = 667,
        staplerNearLimit = 668,
        staplerOffline = 669,
        staplerOpened = 670,
        staplerOverTemperature = 671,
        staplerPowerSaver = 672,
        staplerRecoverableFailure = 673,
        staplerRecoverableStorage = 674,
        staplerRemoved = 675,
        staplerResourceAdded = 676,
        staplerResourceRemoved = 677,
        staplerThermistorFailure = 678,
        staplerTimingFailure = 679,
        staplerTurnedOff = 680,
        staplerTurnedOn = 681,
        staplerUnderTemperature = 682,
        staplerUnrecoverableFailure = 683,
        staplerUnrecoverableStorageError = 684,
        staplerWarmingUp = 685,
        stitcherAdded = 686,
        stitcherAlmostEmpty = 687,
        stitcherAlmostFull = 688,
        stitcherAtLimit = 689,
        stitcherClosed = 690,
        stitcherConfigurationChange = 691,
        stitcherCoverClosed = 692,
        stitcherCoverOpen = 693,
        stitcherEmpty = 694,
        stitcherFull = 695,
        stitcherInterlockClosed = 696,
        stitcherInterlockOpen = 697,
        stitcherJam = 698,
        stitcherLifeAlmostOver = 699,
        stitcherLifeOver = 700,
        stitcherMemoryExhausted = 701,
        stitcherMissing = 702,
        stitcherMotorFailure = 703,
        stitcherNearLimit = 704,
        stitcherOffline = 705,
        stitcherOpened = 706,
        stitcherOverTemperature = 707,
        stitcherPowerSaver = 708,
        stitcherRecoverableFailure = 709,
        stitcherRecoverableStorage = 710,
        stitcherRemoved = 711,
        stitcherResourceAdded = 712,
        stitcherResourceRemoved = 713,
        stitcherThermistorFailure = 714,
        stitcherTimingFailure = 715,
        stitcherTurnedOff = 716,
        stitcherTurnedOn = 717,
        stitcherUnderTemperature = 718,
        stitcherUnrecoverableFailure = 719,
        stitcherUnrecoverableStorageError = 720,
        stitcherWarmingUp = 721,
        subunitAdded = 722,
        subunitAlmostEmpty = 723,
        subunitAlmostFull = 724,
        subunitAtLimit = 725,
        subunitClosed = 726,
        subunitCoolingDown = 727,
        subunitEmpty = 728,
        subunitFull = 729,
        subunitLifeAlmostOver = 730,
        subunitLifeOver = 731,
        subunitMemoryExhausted = 732,
        subunitMissing = 733,
        subunitMotorFailure = 734,
        subunitNearLimit = 735,
        subunitOffline = 736,
        subunitOpened = 737,
        subunitOverTemperature = 738,
        subunitPowerSaver = 739,
        subunitRecoverableFailure = 740,
        subunitRecoverableStorage = 741,
        subunitRemoved = 742,
        subunitResourceAdded = 743,
        subunitResourceRemoved = 744,
        subunitThermistorFailure = 745,
        subunitTimingFailure = 746,
        subunitTurnedOff = 747,
        subunitTurnedOn = 748,
        subunitUnderTemperature = 749,
        subunitUnrecoverableFailure = 750,
        subunitUnrecoverableStorage = 751,
        subunitWarmingUp = 752,
        suspend = 753,
        testing = 754,
        trimmerAdded = 755,
        trimmerAlmostEmpty = 756,
        trimmerAlmostFull = 757,
        trimmerAtLimit = 758,
        trimmerClosed = 759,
        trimmerConfigurationChange = 760,
        trimmerCoverClosed = 761,
        trimmerCoverOpen = 762,
        trimmerEmpty = 763,
        trimmerFull = 764,
        trimmerInterlockClosed = 765,
        trimmerInterlockOpen = 766,
        trimmerJam = 767,
        trimmerLifeAlmostOver = 768,
        trimmerLifeOver = 769,
        trimmerMemoryExhausted = 770,
        trimmerMissing = 771,
        trimmerMotorFailure = 772,
        trimmerNearLimit = 773,
        trimmerOffline = 774,
        trimmerOpened = 775,
        trimmerOverTemperature = 776,
        trimmerPowerSaver = 777,
        trimmerRecoverableFailure = 778,
        trimmerRecoverableStorage = 779,
        trimmerRemoved = 780,
        trimmerResourceAdded = 781,
        trimmerResourceRemoved = 782,
        trimmerThermistorFailure = 783,
        trimmerTimingFailure = 784,
        trimmerTurnedOff = 785,
        trimmerTurnedOn = 786,
        trimmerUnderTemperature = 787,
        trimmerUnrecoverableFailure = 788,
        trimmerUnrecoverableStorageError = 789,
        trimmerWarmingUp = 790,
        unknown = 791,
        wrapperAdded = 792,
        wrapperAlmostEmpty = 793,
        wrapperAlmostFull = 794,
        wrapperAtLimit = 795,
        wrapperClosed = 796,
        wrapperConfigurationChange = 797,
        wrapperCoverClosed = 798,
        wrapperCoverOpen = 799,
        wrapperEmpty = 800,
        wrapperFull = 801,
        wrapperInterlockClosed = 802,
        wrapperInterlockOpen = 803,
        wrapperJam = 804,
        wrapperLifeAlmostOver = 805,
        wrapperLifeOver = 806,
        wrapperMemoryExhausted = 807,
        wrapperMissing = 808,
        wrapperMotorFailure = 809,
        wrapperNearLimit = 810,
        wrapperOffline = 811,
        wrapperOpened = 812,
        wrapperOverTemperature = 813,
        wrapperPowerSaver = 814,
        wrapperRecoverableFailure = 815,
        wrapperRecoverableStorage = 816,
        wrapperRemoved = 817,
        wrapperResourceAdded = 818,
        wrapperResourceRemoved = 819,
        wrapperThermistorFailure = 820,
        wrapperTimingFailure = 821,
        wrapperTurnedOff = 822,
        wrapperTurnedOn = 823,
        wrapperUnderTemperature = 824,
        wrapperUnrecoverableFailure = 825,
        wrapperUnrecoverableStorageError = 826,
        wrapperWarmingUp = 827,
    };

    enum class printEvent {
        jobStarted = 0,
        unknownFutureValue = 1,
    };

    enum class printFinishing {
        none = 3,
        staple = 4,
        punch = 5,
        cover = 6,
        bind = 7,
        saddleStitch = 8,
        stitchEdge = 9,
        stapleTopLeft = 20,
        stapleBottomLeft = 21,
        stapleTopRight = 22,
        stapleBottomRight = 23,
        stitchLeftEdge = 24,
        stitchTopEdge = 25,
        stitchRightEdge = 26,
        stitchBottomEdge = 27,
        stapleDualLeft = 28,
        stapleDualTop = 29,
        stapleDualRight = 30,
        stapleDualBottom = 31,
        unknownFutureValue = 32,
    };

    enum class printJobProcessingState {
        unknown = 0,
        pending = 1,
        processing = 2,
        paused = 3,
        stopped = 4,
        completed = 5,
        canceled = 6,
        aborted = 7,
        unknownFutureValue = 8,
    };

    enum class printJobStateDetail {
        uploadPending = 0,
        transforming = 1,
        completedSuccessfully = 2,
        completedWithWarnings = 3,
        completedWithErrors = 4,
        releaseWait = 5,
        interpreting = 6,
        unknownFutureValue = 7,
    };

    enum class printMultipageLayout {
        clockwiseFromTopLeft = 0,
        counterclockwiseFromTopLeft = 1,
        counterclockwiseFromTopRight = 2,
        clockwiseFromTopRight = 3,
        counterclockwiseFromBottomLeft = 4,
        clockwiseFromBottomLeft = 5,
        counterclockwiseFromBottomRight = 6,
        clockwiseFromBottomRight = 7,
        unknownFutureValue = 8,
    };

    enum class printOperationProcessingState {
        notStarted = 0,
        running = 1,
        succeeded = 2,
        failed = 3,
        unknownFutureValue = 4,
    };

    enum class printOrientation {
        portrait = 3,
        landscape = 4,
        reverseLandscape = 5,
        reversePortrait = 6,
        unknownFutureValue = 7,
    };

    enum class printQuality {
        low = 0,
        medium = 1,
        high = 2,
        unknownFutureValue = 3,
    };

    enum class printScaling {
        _auto = 0,
        shrinkToFit = 1,
        fill = 2,
        fit = 3,
        none = 4,
        unknownFutureValue = 5,
    };

    enum class printTaskProcessingState {
        pending = 0,
        processing = 1,
        completed = 2,
        aborted = 3,
        unknownFutureValue = 4,
    };

    enum class status {
        active = 0,
        updated = 1,
        deleted = 2,
        ignored = 3,
        unknownFutureValue = 4,
    };

    enum class dataPolicyOperationStatus {
        notStarted = 0,
        running = 1,
        complete = 2,
        failed = 3,
        unknownFutureValue = 4,
    };

    enum class alertFeedback {
        unknown = 0,
        truePositive = 1,
        falsePositive = 2,
        benignPositive = 3,
        unknownFutureValue = 127,
    };

    enum class alertSeverity {
        unknown = 0,
        informational = 1,
        low = 2,
        medium = 3,
        high = 4,
        unknownFutureValue = 127,
    };

    enum class alertStatus {
        unknown = 0,
        newAlert = 1,
        inProgress = 2,
        resolved = 3,
        dismissed = 4,
        unknownFutureValue = 127,
    };

    enum class connectionDirection {
        unknown = 0,
        inbound = 1,
        outbound = 2,
        unknownFutureValue = 127,
    };

    enum class connectionStatus {
        unknown = 0,
        attempted = 1,
        succeeded = 2,
        blocked = 3,
        failed = 4,
        unknownFutureValue = 127,
    };

    enum class emailRole {
        unknown = 0,
        sender = 1,
        recipient = 2,
        unknownFutureValue = 127,
    };

    enum class fileHashType {
        unknown = 0,
        sha1 = 1,
        sha256 = 2,
        md5 = 3,
        authenticodeHash256 = 4,
        lsHash = 5,
        ctph = 6,
        unknownFutureValue = 127,
    };

    enum class logonType {
        unknown = 0,
        interactive = 1,
        remoteInteractive = 2,
        network = 3,
        batch = 4,
        service = 5,
        unknownFutureValue = 127,
    };

    enum class processIntegrityLevel {
        unknown = 0,
        untrusted = 1,
        low = 2,
        medium = 3,
        high = 4,
        system = 5,
        unknownFutureValue = 127,
    };

    enum class registryHive {
        unknown = 0,
        currentConfig = 1,
        currentUser = 2,
        localMachineSam = 3,
        localMachineSecurity = 4,
        localMachineSoftware = 5,
        localMachineSystem = 6,
        usersDefault = 7,
        unknownFutureValue = 127,
    };

    enum class registryOperation {
        unknown = 0,
        create = 1,
        modify = 2,
        _delete = 3,
        unknownFutureValue = 127,
    };

    enum class registryValueType {
        unknown = 0,
        binary = 1,
        dword = 2,
        dwordLittleEndian = 3,
        dwordBigEndian = 4,
        expandSz = 5,
        link = 6,
        multiSz = 7,
        none = 8,
        qword = 9,
        qwordlittleEndian = 10,
        sz = 11,
        unknownFutureValue = 127,
    };

    enum class securityNetworkProtocol {
        unknown = -1,
        ip = 0,
        icmp = 1,
        igmp = 2,
        ggp = 3,
        ipv4 = 4,
        tcp = 6,
        pup = 12,
        udp = 17,
        idp = 22,
        ipv6 = 41,
        ipv6RoutingHeader = 43,
        ipv6FragmentHeader = 44,
        ipSecEncapsulatingSecurityPayload = 50,
        ipSecAuthenticationHeader = 51,
        icmpV6 = 58,
        ipv6NoNextHeader = 59,
        ipv6DestinationOptions = 60,
        nd = 77,
        raw = 255,
        ipx = 1000,
        spx = 1256,
        spxII = 1257,
        unknownFutureValue = 32767,
    };

    enum class securityResourceType {
        unknown = 0,
        attacked = 1,
        related = 2,
        unknownFutureValue = 3,
    };

    enum class userAccountSecurityType {
        unknown = 0,
        standard = 1,
        power = 2,
        administrator = 3,
        unknownFutureValue = 127,
    };

    enum class callDirection {
        incoming = 0,
        outgoing = 1,
    };

    enum class callState {
        incoming = 0,
        establishing = 1,
        established = 3,
        hold = 4,
        transferring = 5,
        transferAccepted = 6,
        redirecting = 7,
        terminating = 8,
        terminated = 9,
        unknownFutureValue = 10,
    };

    enum class callTranscriptionState {
        notStarted = 0,
        active = 1,
        inactive = 2,
        unknownFutureValue = 3,
    };

    enum class changeType {
        created = 0,
        updated = 1,
        deleted = 2,
    };

    enum class endpointType {
        _default = 0,
        voicemail = 1,
        skypeForBusiness = 2,
        skypeForBusinessVoipPhone = 3,
        unknownFutureValue = 4,
    };

    enum class lobbyBypassScope {
        organizer = 0,
        organization = 1,
        organizationAndFederated = 2,
        everyone = 3,
        unknownFutureValue = 4,
    };

    enum class mediaDirection {
        inactive = 0,
        sendOnly = 1,
        receiveOnly = 2,
        sendReceive = 3,
    };

    enum class mediaState {
        active = 0,
        inactive = 1,
        unknownFutureValue = 2,
    };

    enum class meetingChatMode {
        enabled = 0,
        disabled = 1,
        limited = 2,
        unknownFutureValue = 3,
    };

    enum class modality {
        audio = 1,
        video = 2,
        videoBasedScreenSharing = 3,
        data = 4,
        unknownFutureValue = 5,
    };

    enum class onlineMeetingPresenters {
        everyone = 0,
        organization = 1,
        roleIsPresenter = 2,
        organizer = 3,
        unknownFutureValue = 4,
    };

    enum class onlineMeetingRole {
        attendee = 0,
        presenter = 1,
        unknownFutureValue = 2,
    };

    enum class recordingStatus {
        unknown = 0,
        notRecording = 1,
        recording = 2,
        failed = 3,
        unknownFutureValue = 4,
    };

    enum class rejectReason {
        none = 0,
        busy = 1,
        forbidden = 2,
        unknownFutureValue = 3,
    };

    enum class routingType {
        forwarded = 0,
        lookup = 1,
        selfFork = 2,
        unknownFutureValue = 3,
    };

    enum class screenSharingRole {
        viewer = 0,
        sharer = 1,
    };

    enum class tone {
        tone0 = 0,
        tone1 = 1,
        tone2 = 2,
        tone3 = 3,
        tone4 = 4,
        tone5 = 5,
        tone6 = 6,
        tone7 = 7,
        tone8 = 8,
        tone9 = 9,
        star = 10,
        pound = 11,
        a = 12,
        b = 13,
        c = 14,
        d = 15,
        flash = 16,
    };

    enum class attestationLevel {
        attested = 0,
        notAttested = 1,
        unknownFutureValue = 2,
    };

    enum class authenticationMethodKeyStrength {
        normal = 0,
        weak = 1,
        unknown = 2,
    };

    enum class lifecycleEventType {
        missed = 0,
        subscriptionRemoved = 1,
        reauthorizationRequired = 2,
    };

    enum class channelMembershipType {
        standard = 0,
        _private = 1,
        unknownFutureValue = 2,
    };

    enum class chatMessageImportance {
        normal = 0,
        high = 1,
        urgent = 2,
        unknownFutureValue = 3,
    };

    enum class chatMessagePolicyViolationDlpActionTypes {
        none = 0,
        notifySender = 1,
        blockAccess = 2,
        blockAccessExternal = 4,
    };

    enum class chatMessagePolicyViolationUserActionTypes {
        none = 0,
        override = 1,
        reportFalsePositive = 2,
    };

    enum class chatMessagePolicyViolationVerdictDetailsTypes {
        none = 0,
        allowFalsePositiveOverride = 1,
        allowOverrideWithoutJustification = 2,
        allowOverrideWithJustification = 4,
    };

    enum class chatMessageType {
        message = 0,
        chatEvent = 1,
        typing = 2,
        unknownFutureValue = 3,
    };

    enum class chatType {
        oneOnOne = 0,
        group = 1,
        meeting = 2,
        unknownFutureValue = 3,
    };

    enum class clonableTeamParts {
        apps = 1,
        tabs = 2,
        settings = 4,
        channels = 8,
        members = 16,
    };

    enum class giphyRatingType {
        strict = 0,
        moderate = 1,
        unknownFutureValue = 2,
    };

    enum class teamsAppDistributionMethod {
        store = 0,
        organization = 1,
        sideloaded = 2,
        unknownFutureValue = 3,
    };

    enum class teamsAppPublishingState {
        submitted = 0,
        rejected = 1,
        published = 2,
        unknownFutureValue = 3,
    };

    enum class teamsAsyncOperationStatus {
        invalid = 0,
        notStarted = 1,
        inProgress = 2,
        succeeded = 3,
        failed = 4,
        unknownFutureValue = 5,
    };

    enum class teamsAsyncOperationType {
        invalid = 0,
        cloneTeam = 1,
        archiveTeam = 2,
        unarchiveTeam = 3,
        createTeam = 4,
        unknownFutureValue = 5,
    };

    enum class teamSpecialization {
        none = 0,
        educationStandard = 1,
        educationClass = 2,
        educationProfessionalLearningCommunity = 3,
        educationStaff = 4,
        healthcareStandard = 5,
        healthcareCareCoordination = 6,
        unknownFutureValue = 7,
    };

    enum class teamVisibilityType {
        _private = 0,
        _public = 1,
        hiddenMembership = 2,
        unknownFutureValue = 3,
    };

    enum class teamworkActivityTopicSource {
        entityUrl = 0,
        text = 1,
    };

    enum class teamworkApplicationIdentityType {
        aadApplication = 0,
        bot = 1,
        tenantBot = 2,
        office365Connector = 3,
        outgoingWebhook = 4,
        unknownFutureValue = 5,
    };

    enum class teamworkConversationIdentityType {
        team = 0,
        channel = 1,
        chat = 2,
        unknownFutureValue = 3,
    };

    enum class teamworkUserIdentityType {
        aadUser = 0,
        onPremiseAadUser = 1,
        anonymousGuest = 2,
        federatedUser = 3,
        personalMicrosoftAccountUser = 4,
        skypeUser = 5,
        phoneUser = 6,
        unknownFutureValue = 7,
    };

    enum class scheduleChangeRequestActor {
        sender = 0,
        recipient = 1,
        manager = 2,
        system = 3,
        unknownFutureValue = 4,
    };

    enum class scheduleChangeState {
        pending = 0,
        approved = 1,
        declined = 2,
        unknownFutureValue = 3,
    };

    enum class scheduleEntityTheme {
        white = 0,
        blue = 1,
        green = 2,
        purple = 3,
        pink = 4,
        yellow = 5,
        gray = 6,
        darkBlue = 7,
        darkGreen = 8,
        darkPurple = 9,
        darkPink = 10,
        darkYellow = 11,
        unknownFutureValue = 12,
    };

    enum class timeOffReasonIconType {
        none = 0,
        car = 1,
        calendar = 2,
        running = 3,
        plane = 4,
        firstAid = 5,
        doctor = 6,
        notWorking = 7,
        clock = 8,
        juryDuty = 9,
        globe = 10,
        cup = 11,
        phone = 12,
        weather = 13,
        umbrella = 14,
        piggyBank = 15,
        dog = 16,
        cake = 17,
        trafficCone = 18,
        pin = 19,
        sunny = 20,
        unknownFutureValue = 21,
    };

    enum class workforceIntegrationEncryptionProtocol {
        sharedSecret = 0,
        unknownFutureValue = 1,
    };

    enum class workforceIntegrationSupportedEntities {
        none = 0,
        shift = 1,
        swapRequest = 2,
        userShiftPreferences = 8,
        openShift = 16,
        openShiftRequest = 32,
        offerShiftRequest = 64,
        unknownFutureValue = 1024,
    };

    enum class mailDestinationRoutingReason {
        none = 0,
        mailFlowRule = 1,
        safeSender = 2,
        blockedSender = 3,
        advancedSpamFiltering = 4,
        domainAllowList = 5,
        domainBlockList = 6,
        notInAddressBook = 7,
        firstTimeSender = 8,
        autoPurgeToInbox = 9,
        autoPurgeToJunk = 10,
        autoPurgeToDeleted = 11,
        outbound = 12,
        notJunk = 13,
        junk = 14,
        unknownFutureValue = 15,
    };

    enum class threatAssessmentContentType {
        mail = 1,
        url = 2,
        file = 3,
    };

    enum class threatAssessmentRequestSource {
        undefined = 0,
        user = 1,
        administrator = 2,
    };

    enum class threatAssessmentResultType {
        checkPolicy = 1,
        rescan = 2,
        unknownFutureValue = 3,
    };

    enum class threatAssessmentStatus {
        pending = 1,
        completed = 2,
    };

    enum class threatCategory {
        undefined = 0,
        spam = 1,
        phishing = 2,
        malware = 3,
        unknownFutureValue = 4,
    };

    enum class threatExpectedAssessment {
        block = 1,
        unblock = 2,
    };

    enum class taskStatus {
        notStarted = 0,
        inProgress = 1,
        completed = 2,
        waitingOnOthers = 3,
        deferred = 4,
    };

    enum class wellknownListName {
        none = 0,
        defaultList = 1,
        flaggedEmails = 2,
        unknownFutureValue = 3,
    };

    struct entity {
        QString id;
    };

    struct appIdentity {
        QString appId;
        QString displayName;
        QString servicePrincipalId;
        QString servicePrincipalName;
    };

    struct appliedConditionalAccessPolicy {
        QString displayName;
        QList<QString> enforcedGrantControls;
        QList<QString> enforcedSessionControls;
        QString id;
        microsoft::graph::appliedConditionalAccessPolicyResult result;
    };

    struct identity {
        QString displayName;
        QString id;
    };

    struct userIdentity : graph::identity {
        QString ipAddress;
        QString userPrincipalName;
    };

    struct detailsInfo {
    };

    struct deviceDetail {
        QString browser;
        QString deviceId;
        QString displayName;
        bool isCompliant;
        bool isManaged;
        QString operatingSystem;
        QString trustType;
    };

    struct geoCoordinates {
        double altitude;
        double latitude;
        double longitude;
    };

    struct initiator : graph::identity {
        microsoft::graph::initiatorType initiatorType;
    };

    struct keyValue {
        QString key;
        QString value;
    };

    struct modifiedProperty {
        QString displayName;
        QString newValue;
        QString oldValue;
    };

    struct provisionedIdentity : graph::identity {
        microsoft::graph::detailsInfo details;
        QString identityType;
    };

    struct provisioningErrorInfo {
        QString additionalDetails;
        microsoft::graph::provisioningStatusErrorCategory errorCategory;
        QString errorCode;
        QString reason;
        QString recommendedAction;
    };

    struct provisioningServicePrincipal : graph::identity {
    };

    struct provisioningStatusInfo {
        microsoft::graph::provisioningErrorInfo errorInformation;
        microsoft::graph::provisioningResult status;
    };

    struct provisioningStep {
        QString description;
        microsoft::graph::detailsInfo details;
        QString name;
        microsoft::graph::provisioningStepType provisioningStepType;
        microsoft::graph::provisioningResult status;
    };

    struct provisioningSystem : graph::identity {
        microsoft::graph::detailsInfo details;
    };

    struct signInLocation {
        QString city;
        QString countryOrRegion;
        microsoft::graph::geoCoordinates geoCoordinates;
        QString state;
    };

    struct signInStatus {
        QString additionalDetails;
        int errorCode;
        QString failureReason;
    };

    struct targetResource {
        QString displayName;
        microsoft::graph::groupType groupType;
        QString id;
        QList<microsoft::graph::modifiedProperty> modifiedProperties;
        QString type;
        QString userPrincipalName;
    };

    struct provisioningObjectSummary : graph::entity {
        QDateTime activityDateTime;
        QString changeId;
        QString cycleId;
        int durationInMilliseconds;
        microsoft::graph::initiator initiatedBy;
        QString jobId;
        QList<microsoft::graph::modifiedProperty> modifiedProperties;
        microsoft::graph::provisioningAction provisioningAction;
        microsoft::graph::provisioningStatusInfo provisioningStatusInfo;
        QList<microsoft::graph::provisioningStep> provisioningSteps;
        microsoft::graph::provisioningServicePrincipal servicePrincipal;
        microsoft::graph::provisionedIdentity sourceIdentity;
        microsoft::graph::provisioningSystem sourceSystem;
        microsoft::graph::provisionedIdentity targetIdentity;
        microsoft::graph::provisioningSystem targetSystem;
        QString tenantId;
    };

    struct signIn : graph::entity {
        QString appDisplayName;
        QString appId;
        QList<microsoft::graph::appliedConditionalAccessPolicy> appliedConditionalAccessPolicies;
        QString clientAppUsed;
        microsoft::graph::conditionalAccessStatus conditionalAccessStatus;
        QString correlationId;
        QDateTime createdDateTime;
        microsoft::graph::deviceDetail deviceDetail;
        QString ipAddress;
        bool isInteractive;
        microsoft::graph::signInLocation location;
        QString resourceDisplayName;
        QString resourceId;
        microsoft::graph::riskDetail riskDetail;
        QList<microsoft::graph::riskEventType> riskEventTypes;
        QList<QString> riskEventTypes_v2;
        microsoft::graph::riskLevel riskLevelAggregated;
        microsoft::graph::riskLevel riskLevelDuringSignIn;
        microsoft::graph::riskState riskState;
        microsoft::graph::signInStatus status;
        QString userDisplayName;
        QString userId;
        QString userPrincipalName;
    };

    struct restrictedSignIn : graph::signIn {
        QGuid targetTenantId;
    };

    struct emailAddress {
        QString address;
        QString name;
    };

    struct recipient {
        microsoft::graph::emailAddress emailAddress;
    };

    struct directoryObject : graph::entity {
        QDateTime deletedDateTime;
    };

    struct assignedLicense {
        QList<QGuid> disabledPlans;
        QGuid skuId;
    };

    struct assignedPlan {
        QDateTime assignedDateTime;
        QString capabilityStatus;
        QString service;
        QGuid servicePlanId;
    };

    struct employeeOrgData {
        QString costCenter;
        QString division;
    };

    struct objectIdentity {
        QString issuer;
        QString issuerAssignedId;
        QString signInType;
    };

    struct licenseAssignmentState {
        QString assignedByGroup;
        QList<QGuid> disabledPlans;
        QString error;
        QGuid skuId;
        QString state;
    };

    struct onPremisesExtensionAttributes {
        QString extensionAttribute1;
        QString extensionAttribute10;
        QString extensionAttribute11;
        QString extensionAttribute12;
        QString extensionAttribute13;
        QString extensionAttribute14;
        QString extensionAttribute15;
        QString extensionAttribute2;
        QString extensionAttribute3;
        QString extensionAttribute4;
        QString extensionAttribute5;
        QString extensionAttribute6;
        QString extensionAttribute7;
        QString extensionAttribute8;
        QString extensionAttribute9;
    };

    struct onPremisesProvisioningError {
        QString category;
        QDateTime occurredDateTime;
        QString propertyCausingError;
        QString value;
    };

    struct passwordProfile {
        bool forceChangePasswordNextSignIn;
        bool forceChangePasswordNextSignInWithMfa;
        QString password;
    };

    struct provisionedPlan {
        QString capabilityStatus;
        QString provisioningStatus;
        QString service;
    };

    struct appRoleAssignment : graph::directoryObject {
        QGuid appRoleId;
        QDateTime createdDateTime;
        QString principalDisplayName;
        QGuid principalId;
        QString principalType;
        QString resourceDisplayName;
        QGuid resourceId;
    };

    struct oAuth2PermissionGrant : graph::entity {
        QString clientId;
        QString consentType;
        QString principalId;
        QString resourceId;
        QString scope;
    };

    struct scopedRoleMembership : graph::entity {
        QString administrativeUnitId;
        QString roleId;
        microsoft::graph::identity roleMemberInfo;
    };

    struct outlookItem : graph::entity {
        QList<QString> categories;
        QString changeKey;
        QDateTime createdDateTime;
        QDateTime lastModifiedDateTime;
    };

    struct profilePhoto : graph::entity {
        int height;
        int width;
    };

    struct extension : graph::entity {
    };

    struct agreementAcceptance : graph::entity {
        QString agreementFileId;
        QString agreementId;
        QString deviceDisplayName;
        QString deviceId;
        QString deviceOSType;
        QString deviceOSVersion;
        QDateTime expirationDateTime;
        QDateTime recordedDateTime;
        microsoft::graph::agreementAcceptanceState state;
        QString userDisplayName;
        QString userEmail;
        QString userId;
        QString userPrincipalName;
    };

    struct deviceManagementTroubleshootingEvent : graph::entity {
        QString correlationId;
        QDateTime eventDateTime;
    };

    struct presence : graph::entity {
        QString activity;
        QString availability;
    };

    struct addIn {
        QGuid id;
        QList<microsoft::graph::keyValue> properties;
        QString type;
    };

    struct appRole {
        QList<QString> allowedMemberTypes;
        QString description;
        QString displayName;
        QGuid id;
        bool isEnabled;
        QString origin;
        QString value;
    };

    struct informationalUrl {
        QString logoUrl;
        QString marketingUrl;
        QString privacyStatementUrl;
        QString supportUrl;
        QString termsOfServiceUrl;
    };

    struct keyCredential {
        QByteArray customKeyIdentifier;
        QString displayName;
        QDateTime endDateTime;
        QByteArray key;
        QGuid keyId;
        QDateTime startDateTime;
        QString type;
        QString usage;
    };

    struct parentalControlSettings {
        QList<QString> countriesBlockedForMinors;
        QString legalAgeGroupRule;
    };

    struct passwordCredential {
        QByteArray customKeyIdentifier;
        QString displayName;
        QDateTime endDateTime;
        QString hint;
        QGuid keyId;
        QString secretText;
        QDateTime startDateTime;
    };

    struct publicClientApplication {
        QList<QString> redirectUris;
    };

    struct spaApplication {
        QList<QString> redirectUris;
    };

    struct verifiedPublisher {
        QDateTime addedDateTime;
        QString displayName;
        QString verifiedPublisherId;
    };

    struct extensionProperty : graph::directoryObject {
        QString appDisplayName;
        QString dataType;
        bool isSyncedFromOnPremises;
        QString name;
        QList<QString> targetObjects;
    };

    struct policyBase : graph::directoryObject {
        QString description;
        QString displayName;
    };

    struct stsPolicy : graph::policyBase {
        QList<QString> definition;
        bool isOrganizationDefault;
        QList<microsoft::graph::directoryObject> appliesTo;
    };

    struct homeRealmDiscoveryPolicy : graph::stsPolicy {
    };

    struct tokenIssuancePolicy : graph::stsPolicy {
    };

    struct tokenLifetimePolicy : graph::stsPolicy {
    };

    struct applicationTemplate : graph::entity {
        QList<QString> categories;
        QString description;
        QString displayName;
        QString homePageUrl;
        QString logoUrl;
        QString publisher;
        QList<QString> supportedProvisioningTypes;
        QList<QString> supportedSingleSignOnModes;
    };

    struct permissionScope {
        QString adminConsentDescription;
        QString adminConsentDisplayName;
        QGuid id;
        bool isEnabled;
        QString origin;
        QString type;
        QString userConsentDescription;
        QString userConsentDisplayName;
        QString value;
    };

    struct samlSingleSignOnSettings {
        QString relayState;
    };

    struct claimsMappingPolicy : graph::stsPolicy {
    };

    struct delegatedPermissionClassification : graph::entity {
        microsoft::graph::permissionClassificationType classification;
        QString permissionId;
        QString permissionName;
    };

    struct endpoint : graph::directoryObject {
        QString capability;
        QString providerId;
        QString providerName;
        QString providerResourceId;
        QString uri;
    };

    struct fido2KeyRestrictions {
        QList<QString> aaGuids;
        microsoft::graph::fido2RestrictionEnforcementType enforcementType;
        bool isEnforced;
    };

    struct authenticationMethodConfiguration : graph::entity {
        microsoft::graph::authenticationMethodState state;
    };

    struct authenticationMethodsPolicy : graph::entity {
        QString description;
        QString displayName;
        QDateTime lastModifiedDateTime;
        QString policyVersion;
        int reconfirmationInDays;
        QList<microsoft::graph::authenticationMethodConfiguration> authenticationMethodConfigurations;
    };

    struct authenticationMethodTarget : graph::entity {
        bool isRegistrationRequired;
        microsoft::graph::authenticationMethodTargetType targetType;
    };

    struct emailAuthenticationMethodConfiguration : graph::authenticationMethodConfiguration {
        microsoft::graph::externalEmailOtpState allowExternalIdToUseEmailOtp;
        QList<microsoft::graph::authenticationMethodTarget> includeTargets;
    };

    struct fido2AuthenticationMethodConfiguration : graph::authenticationMethodConfiguration {
        bool isAttestationEnforced;
        bool isSelfServiceRegistrationAllowed;
        microsoft::graph::fido2KeyRestrictions keyRestrictions;
        QList<microsoft::graph::authenticationMethodTarget> includeTargets;
    };

    struct microsoftAuthenticatorAuthenticationMethodTarget : graph::authenticationMethodTarget {
        microsoft::graph::microsoftAuthenticatorAuthenticationMode authenticationMode;
        microsoft::graph::authenticatorAppFeatureSettings featureSettings;
    };

    struct activityBasedTimeoutPolicy : graph::stsPolicy {
    };

    struct featureRolloutPolicy : graph::entity {
        QString description;
        QString displayName;
        microsoft::graph::stagedFeatureName feature;
        bool isAppliedToOrganization;
        bool isEnabled;
        QList<microsoft::graph::directoryObject> appliesTo;
    };

    struct identitySecurityDefaultsEnforcementPolicy : graph::policyBase {
        bool isEnabled;
    };

    struct bitlockerRecoveryKey : graph::entity {
        QDateTime createdDateTime;
        QString deviceId;
        QString key;
        microsoft::graph::volumeType volumeType;
    };

    struct identitySet {
        microsoft::graph::identity application;
        microsoft::graph::identity device;
        microsoft::graph::identity user;
    };

    struct resultInfo {
        int code;
        QString message;
        int subcode;
    };

    struct compliance {
    };

    struct assignedLabel {
        QString displayName;
        QString labelId;
    };

    struct licenseProcessingState {
        QString state;
    };

    struct resourceSpecificPermissionGrant : graph::directoryObject {
        QString clientAppId;
        QString clientId;
        QString permission;
        QString permissionType;
        QString resourceAppId;
    };

    struct groupLifecyclePolicy : graph::entity {
        QString alternateNotificationEmails;
        int groupLifetimeInDays;
        QString managedGroupTypes;
    };

    struct root {
    };

    struct sharepointIds {
        QString listId;
        QString listItemId;
        QString listItemUniqueId;
        QString siteId;
        QString siteUrl;
        QString tenantId;
        QString webId;
    };

    struct siteCollection {
        QString dataLocationCode;
        QString hostname;
        microsoft::graph::root root;
    };

    struct apiAuthenticationConfigurationBase {
    };

    struct assignmentOrder {
        QList<QString> order;
    };

    struct basicAuthentication : graph::apiAuthenticationConfigurationBase {
        QString password;
        QString username;
    };

    struct pkcs12CertificateInformation {
        bool isActive;
        long long notAfter;
        long long notBefore;
        QString thumbprint;
    };

    struct pkcs12Certificate : graph::apiAuthenticationConfigurationBase {
        QString password;
        QString pkcs12Value;
    };

    struct selfServiceSignUpAuthenticationFlowConfiguration {
        bool isEnabled;
    };

    struct userAttributeValuesItem {
        bool isDefault;
        QString name;
        QString value;
    };

    struct identityApiConnector : graph::entity {
        microsoft::graph::apiAuthenticationConfigurationBase authenticationConfiguration;
        QString displayName;
        QString targetUrl;
    };

    struct identityUserFlow : graph::entity {
        microsoft::graph::userFlowType userFlowType;
        float userFlowTypeVersion;
    };

    struct identityProvider : graph::entity {
        QString clientId;
        QString clientSecret;
        QString name;
        QString type;
    };

    struct identityProviderBase : graph::entity {
        QString displayName;
    };

    struct builtInIdentityProvider : graph::identityProviderBase {
        QString identityProviderType;
    };

    struct identityUserFlowAttribute : graph::entity {
        microsoft::graph::identityUserFlowAttributeDataType dataType;
        QString description;
        QString displayName;
        microsoft::graph::identityUserFlowAttributeType userFlowAttributeType;
    };

    struct identityBuiltInUserFlowAttribute : graph::identityUserFlowAttribute {
    };

    struct identityCustomUserFlowAttribute : graph::identityUserFlowAttribute {
    };

    struct socialIdentityProvider : graph::identityProviderBase {
        QString clientId;
        QString clientSecret;
        QString identityProviderType;
    };

    struct userFlowLanguagePage : graph::entity {
    };

    struct alternativeSecurityId {
        QString identityProvider;
        QByteArray key;
        int type;
    };

    struct preAuthorizedApplication {
        QString appId;
        QList<QString> delegatedPermissionIds;
    };

    struct certificateAuthority {
        QByteArray certificate;
        QString certificateRevocationListUrl;
        QString deltaCertificateRevocationListUrl;
        bool isRootAuthority;
        QString issuer;
        QString issuerSki;
    };

    struct ComplexExtensionValue {
    };

    struct defaultUserRolePermissions {
        bool allowedToCreateApps;
        bool allowedToCreateSecurityGroups;
        bool allowedToReadOtherUsers;
        QList<QString> permissionGrantPoliciesAssigned;
    };

    struct domainState {
        QDateTime lastActionDateTime;
        QString operation;
        QString status;
    };

    struct implicitGrantSettings {
        bool enableAccessTokenIssuance;
        bool enableIdTokenIssuance;
    };

    struct resourcePermission {
        QString type;
        QString value;
    };

    struct licenseUnitsDetail {
        int enabled;
        int suspended;
        int warning;
    };

    struct optionalClaim {
        QList<QString> additionalProperties;
        bool essential;
        QString name;
        QString source;
    };

    struct phone {
        QString language;
        QString number;
        QString region;
        microsoft::graph::phoneType type;
    };

    struct physicalOfficeAddress {
        QString city;
        QString countryOrRegion;
        QString officeLocation;
        QString postalCode;
        QString state;
        QString street;
    };

    struct privacyProfile {
        QString contactEmail;
        QString statementUrl;
    };

    struct resourceAccess {
        QGuid id;
        QString type;
    };

    struct servicePlanInfo {
        QString appliesTo;
        QString provisioningStatus;
        QGuid servicePlanId;
        QString servicePlanName;
    };

    struct settingTemplateValue {
        QString defaultValue;
        QString description;
        QString name;
        QString type;
    };

    struct settingValue {
        QString name;
        QString value;
    };

    struct unifiedRolePermission {
        QList<QString> allowedResourceActions;
        QString condition;
        QList<QString> excludedResourceActions;
    };

    struct verifiedDomain {
        QString capabilities;
        bool isDefault;
        bool isInitial;
        QString name;
        QString type;
    };

    struct administrativeUnit : graph::directoryObject {
        QString description;
        QString displayName;
        QString visibility;
        QList<microsoft::graph::directoryObject> members;
        QList<microsoft::graph::scopedRoleMembership> scopedRoleMembers;
        QList<microsoft::graph::extension> extensions;
    };

    struct appScope : graph::entity {
        QString displayName;
        QString type;
    };

    struct certificateBasedAuthConfiguration : graph::entity {
        QList<microsoft::graph::certificateAuthority> certificateAuthorities;
    };

    struct contract : graph::directoryObject {
        QString contractType;
        QGuid customerId;
        QString defaultDomainName;
        QString displayName;
    };

    struct device : graph::directoryObject {
        bool accountEnabled;
        QList<microsoft::graph::alternativeSecurityId> alternativeSecurityIds;
        QDateTime approximateLastSignInDateTime;
        QDateTime complianceExpirationDateTime;
        QString deviceId;
        QString deviceMetadata;
        int deviceVersion;
        QString displayName;
        bool isCompliant;
        bool isManaged;
        QString mdmAppId;
        QDateTime onPremisesLastSyncDateTime;
        bool onPremisesSyncEnabled;
        QString operatingSystem;
        QString operatingSystemVersion;
        QList<QString> physicalIds;
        QString profileType;
        QList<QString> systemLabels;
        QString trustType;
        QList<microsoft::graph::directoryObject> memberOf;
        QList<microsoft::graph::directoryObject> registeredOwners;
        QList<microsoft::graph::directoryObject> registeredUsers;
        QList<microsoft::graph::directoryObject> transitiveMemberOf;
        QList<microsoft::graph::extension> extensions;
    };

    struct directory : graph::entity {
        QList<microsoft::graph::administrativeUnit> administrativeUnits;
        QList<microsoft::graph::directoryObject> deletedItems;
    };

    struct directoryObjectPartnerReference : graph::directoryObject {
        QString description;
        QString displayName;
        QGuid externalPartnerTenantId;
        QString objectType;
    };

    struct directoryRole : graph::directoryObject {
        QString description;
        QString displayName;
        QString roleTemplateId;
        QList<microsoft::graph::directoryObject> members;
        QList<microsoft::graph::scopedRoleMembership> scopedMembers;
    };

    struct directoryRoleTemplate : graph::directoryObject {
        QString description;
        QString displayName;
    };

    struct domainDnsRecord : graph::entity {
        bool isOptional;
        QString label;
        QString recordType;
        QString supportedService;
        int ttl;
    };

    struct domainDnsCnameRecord : graph::domainDnsRecord {
        QString canonicalName;
    };

    struct domainDnsMxRecord : graph::domainDnsRecord {
        QString mailExchange;
        int preference;
    };

    struct domainDnsSrvRecord : graph::domainDnsRecord {
        QString nameTarget;
        int port;
        int priority;
        QString protocol;
        QString service;
        int weight;
    };

    struct domainDnsTxtRecord : graph::domainDnsRecord {
        QString text;
    };

    struct domainDnsUnavailableRecord : graph::domainDnsRecord {
        QString description;
    };

    struct groupSettingTemplate : graph::directoryObject {
        QString description;
        QString displayName;
        QList<microsoft::graph::settingTemplateValue> values;
    };

    struct organizationalBrandingProperties : graph::entity {
        QString backgroundColor;
        QByteArray backgroundImage;
        QByteArray bannerLogo;
        QString signInPageText;
        QByteArray squareLogo;
        QString usernameHintText;
    };

    struct organizationalBrandingLocalization : graph::organizationalBrandingProperties {
    };

    struct orgContact : graph::directoryObject {
        QList<microsoft::graph::physicalOfficeAddress> addresses;
        QString companyName;
        QString department;
        QString displayName;
        QString givenName;
        QString jobTitle;
        QString mail;
        QString mailNickname;
        QDateTime onPremisesLastSyncDateTime;
        QList<microsoft::graph::onPremisesProvisioningError> onPremisesProvisioningErrors;
        bool onPremisesSyncEnabled;
        QList<microsoft::graph::phone> phones;
        QList<QString> proxyAddresses;
        QString surname;
        QList<microsoft::graph::directoryObject> directReports;
        std::unique_ptr<microsoft::graph::directoryObject> manager;
        QList<microsoft::graph::directoryObject> memberOf;
        QList<microsoft::graph::directoryObject> transitiveMemberOf;
    };

    struct permissionGrantConditionSet : graph::entity {
        QList<QString> clientApplicationIds;
        QList<QString> clientApplicationPublisherIds;
        bool clientApplicationsFromVerifiedPublisherOnly;
        QList<QString> clientApplicationTenantIds;
        QString permissionClassification;
        QList<QString> permissions;
        microsoft::graph::permissionType permissionType;
        QString resourceApplication;
    };

    struct unifiedRoleDefinition : graph::entity {
        QString description;
        QString displayName;
        bool isBuiltIn;
        bool isEnabled;
        QList<QString> resourceScopes;
        QList<microsoft::graph::unifiedRolePermission> rolePermissions;
        QString templateId;
        QString version;
        QList<microsoft::graph::unifiedRoleDefinition> inheritsPermissionsFrom;
    };

    struct subscribedSku : graph::entity {
        QString appliesTo;
        QString capabilityStatus;
        int consumedUnits;
        microsoft::graph::licenseUnitsDetail prepaidUnits;
        QList<microsoft::graph::servicePlanInfo> servicePlans;
        QGuid skuId;
        QString skuPartNumber;
    };

    struct educationAssignmentRecipient {
    };

    struct educationAssignmentClassRecipient : graph::educationAssignmentRecipient {
    };

    struct educationAssignmentGrade {
        microsoft::graph::identitySet gradedBy;
        QDateTime gradedDateTime;
    };

    struct educationAssignmentGradeType {
    };

    struct educationAssignmentGroupRecipient : graph::educationAssignmentRecipient {
    };

    struct educationAssignmentIndividualRecipient : graph::educationAssignmentRecipient {
        QList<QString> recipients;
    };

    struct educationAssignmentPointsGrade : graph::educationAssignmentGrade {
        float points;
    };

    struct educationAssignmentPointsGradeType : graph::educationAssignmentGradeType {
        float maxPoints;
    };

    struct educationResource {
        microsoft::graph::identitySet createdBy;
        QDateTime createdDateTime;
        QString displayName;
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
    };

    struct educationExcelResource : graph::educationResource {
        QString fileUrl;
    };

    struct educationItemBody {
        QString content;
        microsoft::graph::bodyType contentType;
    };

    struct educationFileResource : graph::educationResource {
        QString fileUrl;
    };

    struct educationLinkResource : graph::educationResource {
        QString link;
    };

    struct educationPowerPointResource : graph::educationResource {
        QString fileUrl;
    };

    struct educationSubmissionRecipient {
    };

    struct educationSubmissionIndividualRecipient : graph::educationSubmissionRecipient {
        QString userId;
    };

    struct educationWordResource : graph::educationResource {
        QString fileUrl;
    };

    struct rubricCriterion {
        microsoft::graph::educationItemBody description;
    };

    struct rubricLevel {
        microsoft::graph::educationItemBody description;
        QString displayName;
        microsoft::graph::educationAssignmentGradeType grading;
        QString levelId;
    };

    struct rubricQuality {
        QList<microsoft::graph::rubricCriterion> criteria;
        microsoft::graph::educationItemBody description;
        QString displayName;
        QString qualityId;
        float weight;
    };

    struct rubricQualityFeedbackModel {
        microsoft::graph::educationItemBody feedback;
        QString qualityId;
    };

    struct rubricQualitySelectedColumnModel {
        QString columnId;
        QString qualityId;
    };

    struct educationCategory : graph::entity {
        QString displayName;
    };

    struct educationAssignmentResource : graph::entity {
        bool distributeForStudentWork;
        microsoft::graph::educationResource resource;
    };

    struct educationRubric : graph::entity {
        microsoft::graph::identitySet createdBy;
        QDateTime createdDateTime;
        microsoft::graph::educationItemBody description;
        QString displayName;
        microsoft::graph::educationAssignmentGradeType grading;
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
        QList<microsoft::graph::rubricLevel> levels;
        QList<microsoft::graph::rubricQuality> qualities;
    };

    struct educationAssignmentDefaults : graph::entity {
        microsoft::graph::educationAddedStudentAction addedStudentAction;
        QTime dueTime;
        QString notificationChannelUrl;
    };

    struct educationAssignmentSettings : graph::entity {
        bool submissionAnimationDisabled;
    };

    struct educationCourse {
        QString courseNumber;
        QString description;
        QString displayName;
        QString externalId;
        QString subject;
    };

    struct educationTerm {
        QString displayName;
        QDate endDate;
        QString externalId;
        QDate startDate;
    };

    struct educationOrganization : graph::entity {
        QString description;
        QString displayName;
        microsoft::graph::educationExternalSource externalSource;
        QString externalSourceDetail;
    };

    struct educationOutcome : graph::entity {
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
    };

    struct educationPointsOutcome : graph::educationOutcome {
        microsoft::graph::educationAssignmentPointsGrade points;
        microsoft::graph::educationAssignmentPointsGrade publishedPoints;
    };

    struct educationRubricOutcome : graph::educationOutcome {
        QList<microsoft::graph::rubricQualityFeedbackModel> publishedRubricQualityFeedback;
        QList<microsoft::graph::rubricQualitySelectedColumnModel> publishedRubricQualitySelectedLevels;
        QList<microsoft::graph::rubricQualityFeedbackModel> rubricQualityFeedback;
        QList<microsoft::graph::rubricQualitySelectedColumnModel> rubricQualitySelectedLevels;
    };

    struct educationSubmissionResource : graph::entity {
        QString assignmentResourceUrl;
        microsoft::graph::educationResource resource;
    };

    struct physicalAddress {
        QString city;
        QString countryOrRegion;
        QString postalCode;
        QString state;
        QString street;
    };

    struct educationOnPremisesInfo {
        QString immutableId;
    };

    struct educationStudent {
        QDate birthDate;
        QString externalId;
        microsoft::graph::educationGender gender;
        QString grade;
        QString graduationYear;
        QString studentNumber;
    };

    struct educationTeacher {
        QString externalId;
        QString teacherNumber;
    };

    struct Json {
    };

    struct workbookIcon {
        int index;
        QString set;
    };

    struct workbookFilterDatetime {
        QString date;
        QString specificity;
    };

    struct workbookOperationError {
        QString code;
        std::unique_ptr<microsoft::graph::workbookOperationError> innerError;
        QString message;
    };

    struct workbookRangeReference {
        QString address;
    };

    struct workbookSessionInfo {
        QString id;
        bool persistChanges;
    };

    struct workbookSortField {
        bool ascending;
        QString color;
        QString dataOption;
        microsoft::graph::workbookIcon icon;
        int key;
        QString sortOn;
    };

    struct workbookWorksheetProtectionOptions {
        bool allowAutoFilter;
        bool allowDeleteColumns;
        bool allowDeleteRows;
        bool allowFormatCells;
        bool allowFormatColumns;
        bool allowFormatRows;
        bool allowInsertColumns;
        bool allowInsertHyperlinks;
        bool allowInsertRows;
        bool allowPivotTables;
        bool allowSort;
    };

    struct systemFacet {
    };

    struct audio {
        QString album;
        QString albumArtist;
        QString artist;
        long long bitrate;
        QString composers;
        QString copyright;
        short disc;
        short discCount;
        long long duration;
        QString genre;
        bool hasDrm;
        bool isVariableBitrate;
        QString title;
        int track;
        int trackCount;
        int year;
    };

    struct deleted {
        QString state;
    };

    struct fileSystemInfo {
        QDateTime createdDateTime;
        QDateTime lastAccessedDateTime;
        QDateTime lastModifiedDateTime;
    };

    struct image {
        int height;
        int width;
    };

    struct package {
        QString type;
    };

    struct photo {
        QString cameraMake;
        QString cameraModel;
        double exposureDenominator;
        double exposureNumerator;
        double fNumber;
        double focalLength;
        int iso;
        short orientation;
        QDateTime takenDateTime;
    };

    struct publicationFacet {
        QString level;
        QString versionId;
    };

    struct searchResult {
        QString onClickTelemetryUrl;
    };

    struct shared {
        microsoft::graph::identitySet owner;
        QString scope;
        microsoft::graph::identitySet sharedBy;
        QDateTime sharedDateTime;
    };

    struct specialFolder {
        QString name;
    };

    struct video {
        int audioBitsPerSample;
        int audioChannels;
        QString audioFormat;
        int audioSamplesPerSecond;
        int bitrate;
        long long duration;
        QString fourCC;
        double frameRate;
        int height;
        int width;
    };

    struct subscription : graph::entity {
        QString applicationId;
        QString changeType;
        QString clientState;
        QString creatorId;
        QString encryptionCertificate;
        QString encryptionCertificateId;
        QDateTime expirationDateTime;
        bool includeResourceData;
        QString latestSupportedTlsVersion;
        QString lifecycleNotificationUrl;
        QString notificationQueryOptions;
        QString notificationUrl;
        QString notificationUrlAppId;
        QString resource;
    };

    struct baseItemVersion : graph::entity {
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
        microsoft::graph::publicationFacet publication;
    };

    struct driveItemVersion : graph::baseItemVersion {
        QByteArray content;
        long long size;
    };

    struct listInfo {
        bool contentTypesEnabled;
        bool hidden;
        QString _template;
    };

    struct workbookApplication : graph::entity {
        QString calculationMode;
    };

    struct workbookFunctions : graph::entity {
    };

    struct workbookOperation : graph::entity {
        microsoft::graph::workbookOperationError error;
        QString resourceLocation;
        microsoft::graph::workbookOperationStatus status;
    };

    struct workbookChartFill : graph::entity {
    };

    struct workbookChartFont : graph::entity {
        bool bold;
        QString color;
        bool italic;
        QString name;
        double size;
        QString underline;
    };

    struct workbookChartLineFormat : graph::entity {
        QString color;
    };

    struct workbookChartAxisTitleFormat : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartFont> font;
    };

    struct workbookChartDataLabelFormat : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartFill> fill;
        std::unique_ptr<microsoft::graph::workbookChartFont> font;
    };

    struct workbookChartGridlinesFormat : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartLineFormat> line;
    };

    struct workbookChartLegendFormat : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartFill> fill;
        std::unique_ptr<microsoft::graph::workbookChartFont> font;
    };

    struct workbookChartPointFormat : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartFill> fill;
    };

    struct workbookChartSeriesFormat : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartFill> fill;
        std::unique_ptr<microsoft::graph::workbookChartLineFormat> line;
    };

    struct workbookChartTitleFormat : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartFill> fill;
        std::unique_ptr<microsoft::graph::workbookChartFont> font;
    };

    struct workbookCommentReply : graph::entity {
        QString content;
        QString contentType;
    };

    struct workbookFormatProtection : graph::entity {
        bool formulaHidden;
        bool locked;
    };

    struct workbookFunctionResult : graph::entity {
        QString error;
        microsoft::graph::Json value;
    };

    struct workbookRangeSort : graph::entity {
    };

    struct workbookRangeBorder : graph::entity {
        QString color;
        QString sideIndex;
        QString style;
        QString weight;
    };

    struct workbookRangeFill : graph::entity {
        QString color;
    };

    struct workbookRangeFont : graph::entity {
        bool bold;
        QString color;
        bool italic;
        QString name;
        double size;
        QString underline;
    };

    struct workbookRangeView : graph::entity {
        microsoft::graph::Json cellAddresses;
        int columnCount;
        microsoft::graph::Json formulas;
        microsoft::graph::Json formulasLocal;
        microsoft::graph::Json formulasR1C1;
        int index;
        microsoft::graph::Json numberFormat;
        int rowCount;
        microsoft::graph::Json text;
        microsoft::graph::Json values;
        microsoft::graph::Json valueTypes;
        QList<microsoft::graph::workbookRangeView> rows;
    };

    struct workbookTableRow : graph::entity {
        int index;
        microsoft::graph::Json values;
    };

    struct workbookTableSort : graph::entity {
        QList<microsoft::graph::workbookSortField> fields;
        bool matchCase;
        QString method;
    };

    struct workbookWorksheetProtection : graph::entity {
        microsoft::graph::workbookWorksheetProtectionOptions options;
        bool _protected;
    };

    struct attendeeBase : graph::recipient {
        microsoft::graph::attendeeType type;
    };

    struct dateTimeTimeZone {
        QString dateTime;
        QString timeZone;
    };

    struct outlookGeoCoordinates {
        double accuracy;
        double altitude;
        double altitudeAccuracy;
        double latitude;
        double longitude;
    };

    struct timeSlot {
        microsoft::graph::dateTimeTimeZone end;
        microsoft::graph::dateTimeTimeZone start;
    };

    struct timeConstraint {
        microsoft::graph::activityDomain activityDomain;
        QList<microsoft::graph::timeSlot> timeSlots;
    };

    struct place : graph::entity {
        microsoft::graph::physicalAddress address;
        QString displayName;
        microsoft::graph::outlookGeoCoordinates geoCoordinates;
        QString phone;
    };

    struct room : graph::place {
        QString audioDeviceName;
        microsoft::graph::bookingType bookingType;
        QString building;
        int capacity;
        QString displayDeviceName;
        QString emailAddress;
        QString floorLabel;
        int floorNumber;
        bool isWheelChairAccessible;
        QString label;
        QString nickname;
        QList<QString> tags;
        QString videoDeviceName;
    };

    struct roomList : graph::place {
        QString emailAddress;
        QList<microsoft::graph::room> rooms;
    };

    struct attachmentItem {
        microsoft::graph::attachmentType attachmentType;
        QString contentType;
        bool isInline;
        QString name;
        long long size;
    };

    struct responseStatus {
        microsoft::graph::responseType response;
        QDateTime time;
    };

    struct localeInfo {
        QString displayName;
        QString locale;
    };

    struct automaticRepliesSetting {
        microsoft::graph::externalAudienceScope externalAudience;
        QString externalReplyMessage;
        QString internalReplyMessage;
        microsoft::graph::dateTimeTimeZone scheduledEndDateTime;
        microsoft::graph::dateTimeTimeZone scheduledStartDateTime;
        microsoft::graph::automaticRepliesStatus status;
    };

    struct calendarSharingMessageAction {
        microsoft::graph::calendarSharingAction action;
        microsoft::graph::calendarSharingActionType actionType;
        microsoft::graph::calendarSharingActionImportance importance;
    };

    struct genericError {
        QString code;
        QString message;
    };

    struct timeZoneBase {
        QString name;
    };

    struct standardTimeZoneOffset {
        int dayOccurrence;
        microsoft::graph::dayOfWeek dayOfWeek;
        int month;
        QTime time;
        int year;
    };

    struct daylightTimeZoneOffset : graph::standardTimeZoneOffset {
        int daylightBias;
    };

    struct followupFlag {
        microsoft::graph::dateTimeTimeZone completedDateTime;
        microsoft::graph::dateTimeTimeZone dueDateTime;
        microsoft::graph::followupFlagStatus flagStatus;
        microsoft::graph::dateTimeTimeZone startDateTime;
    };

    struct freeBusyError {
        QString message;
        QString responseCode;
    };

    struct internetMessageHeader {
        QString name;
        QString value;
    };

    struct itemBody {
        QString content;
        microsoft::graph::bodyType contentType;
    };

    struct workingHours {
        QList<microsoft::graph::dayOfWeek> daysOfWeek;
        QTime endTime;
        QTime startTime;
        microsoft::graph::timeZoneBase timeZone;
    };

    struct mailTipsError {
        QString code;
        QString message;
    };

    struct messageRuleActions {
        QList<QString> assignCategories;
        QString copyToFolder;
        bool _delete;
        QList<microsoft::graph::recipient> forwardAsAttachmentTo;
        QList<microsoft::graph::recipient> forwardTo;
        bool markAsRead;
        microsoft::graph::importance markImportance;
        QString moveToFolder;
        bool permanentDelete;
        QList<microsoft::graph::recipient> redirectTo;
        bool stopProcessingRules;
    };

    struct sizeRange {
        int maximumSize;
        int minimumSize;
    };

    struct onlineMeetingInfo {
        QString conferenceId;
        QString joinUrl;
        QList<microsoft::graph::phone> phones;
        QString quickDial;
        QList<QString> tollFreeNumbers;
        QString tollNumber;
    };

    struct recurrencePattern {
        int dayOfMonth;
        QList<microsoft::graph::dayOfWeek> daysOfWeek;
        microsoft::graph::dayOfWeek firstDayOfWeek;
        microsoft::graph::weekIndex index;
        int interval;
        int month;
        microsoft::graph::recurrencePatternType type;
    };

    struct recurrenceRange {
        QDate endDate;
        int numberOfOccurrences;
        QString recurrenceTimeZone;
        QDate startDate;
        microsoft::graph::recurrenceRangeType type;
    };

    struct personType {
        QString _class;
        QString subclass;
    };

    struct scheduleItem {
        microsoft::graph::dateTimeTimeZone end;
        bool isPrivate;
        QString location;
        microsoft::graph::dateTimeTimeZone start;
        microsoft::graph::freeBusyStatus status;
        QString subject;
    };

    struct scoredEmailAddress {
        QString address;
        QString itemId;
        double relevanceScore;
        microsoft::graph::selectionLikelihoodInfo selectionLikelihood;
    };

    struct timeZoneInformation {
        QString alias;
        QString displayName;
    };

    struct uploadSession {
        QDateTime expirationDateTime;
        QList<QString> nextExpectedRanges;
        QString uploadUrl;
    };

    struct website {
        QString address;
        QString displayName;
        microsoft::graph::websiteType type;
    };

    struct attachment : graph::entity {
        QString contentType;
        bool isInline;
        QDateTime lastModifiedDateTime;
        QString name;
        int size;
    };

    struct calendarPermission : graph::entity {
        QList<microsoft::graph::calendarRoleType> allowedRoles;
        microsoft::graph::emailAddress emailAddress;
        bool isInsideOrganization;
        bool isRemovable;
        microsoft::graph::calendarRoleType role;
    };

    struct multiValueLegacyExtendedProperty : graph::entity {
        QList<QString> value;
    };

    struct singleValueLegacyExtendedProperty : graph::entity {
        QString value;
    };

    struct post : graph::outlookItem {
        microsoft::graph::itemBody body;
        QString conversationId;
        QString conversationThreadId;
        microsoft::graph::recipient from;
        bool hasAttachments;
        QList<microsoft::graph::recipient> newParticipants;
        QDateTime receivedDateTime;
        microsoft::graph::recipient sender;
        QList<microsoft::graph::attachment> attachments;
        QList<microsoft::graph::extension> extensions;
        std::unique_ptr<microsoft::graph::post> inReplyTo;
        QList<microsoft::graph::multiValueLegacyExtendedProperty> multiValueExtendedProperties;
        QList<microsoft::graph::singleValueLegacyExtendedProperty> singleValueExtendedProperties;
    };

    struct fileAttachment : graph::attachment {
        QByteArray contentBytes;
        QString contentId;
        QString contentLocation;
    };

    struct inferenceClassificationOverride : graph::entity {
        microsoft::graph::inferenceClassificationType classifyAs;
        microsoft::graph::emailAddress senderEmailAddress;
    };

    struct itemAttachment : graph::attachment {
        std::unique_ptr<microsoft::graph::outlookItem> item;
    };

    struct openTypeExtension : graph::extension {
        QString extensionName;
    };

    struct outlookCategory : graph::entity {
        microsoft::graph::categoryColor color;
        QString displayName;
    };

    struct referenceAttachment : graph::attachment {
    };

    struct accessAction {
    };

    struct booleanColumn {
    };

    struct calculatedColumn {
        QString format;
        QString formula;
        QString outputType;
    };

    struct choiceColumn {
        bool allowTextEntry;
        QList<QString> choices;
        QString displayAs;
    };

    struct contentTypeInfo {
        QString id;
        QString name;
    };

    struct contentTypeOrder {
        bool _default;
        int position;
    };

    struct currencyColumn {
        QString locale;
    };

    struct dateTimeColumn {
        QString displayAs;
        QString format;
    };

    struct defaultColumnValue {
        QString formula;
        QString value;
    };

    struct driveItemUploadableProperties {
        QString description;
        long long fileSize;
        microsoft::graph::fileSystemInfo fileSystemInfo;
        QString name;
    };

    struct driveRecipient {
        QString alias;
        QString email;
        QString objectId;
    };

    struct hashes {
        QString crc32Hash;
        QString quickXorHash;
        QString sha1Hash;
        QString sha256Hash;
    };

    struct folderView {
        QString sortBy;
        QString sortOrder;
        QString viewType;
    };

    struct geolocationColumn {
    };

    struct incompleteData {
        QDateTime missingDataBeforeDateTime;
        bool wasThrottled;
    };

    struct itemActionStat {
        int actionCount;
        int actorCount;
    };

    struct itemPreviewInfo {
        QString getUrl;
        QString postParameters;
        QString postUrl;
    };

    struct itemReference {
        QString driveId;
        QString driveType;
        QString id;
        QString name;
        QString path;
        QString shareId;
        microsoft::graph::sharepointIds sharepointIds;
        QString siteId;
    };

    struct lookupColumn {
        bool allowMultipleValues;
        bool allowUnlimitedLength;
        QString columnName;
        QString listId;
        QString primaryLookupColumnId;
    };

    struct numberColumn {
        QString decimalPlaces;
        QString displayAs;
        double maximum;
        double minimum;
    };

    struct pendingContentUpdate {
        QDateTime queuedDateTime;
    };

    struct personOrGroupColumn {
        bool allowMultipleSelection;
        QString chooseFromType;
        QString displayAs;
    };

    struct publicErrorDetail {
        QString code;
        QString message;
        QString target;
    };

    struct publicInnerError {
        QString code;
        QList<microsoft::graph::publicErrorDetail> details;
        QString message;
        QString target;
    };

    struct storagePlanInformation {
        bool upgradeAvailable;
    };

    struct sharingInvitation {
        QString email;
        microsoft::graph::identitySet invitedBy;
        QString redeemedBy;
        bool signInRequired;
    };

    struct sharingLink {
        microsoft::graph::identity application;
        bool preventsDownload;
        QString scope;
        QString type;
        QString webHtml;
        QString webUrl;
    };

    struct textColumn {
        bool allowMultipleLines;
        bool appendChangesToExistingText;
        int linesForEditing;
        int maxLength;
        QString textType;
    };

    struct thumbnail {
        QByteArray content;
        int height;
        QString sourceItemId;
        QString url;
        int width;
    };

    struct columnLink : graph::entity {
        QString name;
    };

    struct fieldValueSet : graph::entity {
    };

    struct listItemVersion : graph::baseItemVersion {
        std::unique_ptr<microsoft::graph::fieldValueSet> fields;
    };

    struct extensionSchemaProperty {
        QString name;
        QString type;
    };

    struct schemaExtension : graph::entity {
        QString description;
        QString owner;
        QList<microsoft::graph::extensionSchemaProperty> properties;
        QString status;
        QList<QString> targetTypes;
    };

    struct accessReviewApplyAction {
    };

    struct accessReviewScope {
    };

    struct accessReviewQueryScope : graph::accessReviewScope {
        QString query;
        QString queryRoot;
        QString queryType;
    };

    struct accessReviewInactiveUsersQueryScope : graph::accessReviewQueryScope {
        std::chrono::system_clock::duration inactiveDuration;
    };

    struct accessReviewInstanceDecisionItemResource {
        QString displayName;
        QString id;
        QString type;
    };

    struct accessReviewReviewerScope {
        QString query;
        QString queryRoot;
        QString queryType;
    };

    struct appConsentRequestScope {
        QString displayName;
    };

    struct disableAndDeleteUserApplyAction : graph::accessReviewApplyAction {
    };

    struct principalResourceMembershipsScope : graph::accessReviewScope {
        QList<microsoft::graph::accessReviewScope> principalScopes;
        QList<microsoft::graph::accessReviewScope> resourceScopes;
    };

    struct removeAccessApplyAction : graph::accessReviewApplyAction {
    };

    struct servicePrincipalIdentity : graph::identity {
        QString appId;
    };

    struct accessReviewInstanceDecisionItem : graph::entity {
        QString accessReviewId;
        microsoft::graph::userIdentity appliedBy;
        QDateTime appliedDateTime;
        QString applyResult;
        QString decision;
        QString justification;
        microsoft::graph::identity principal;
        QString principalLink;
        QString recommendation;
        microsoft::graph::accessReviewInstanceDecisionItemResource resource;
        QString resourceLink;
        microsoft::graph::userIdentity reviewedBy;
        QDateTime reviewedDateTime;
    };

    struct request : graph::entity {
        QString approvalId;
        QDateTime completedDateTime;
        microsoft::graph::identitySet createdBy;
        QDateTime createdDateTime;
        QString customData;
        QString status;
    };

    struct approvalStage : graph::entity {
        bool assignedToMe;
        QString displayName;
        QString justification;
        microsoft::graph::identity reviewedBy;
        QDateTime reviewedDateTime;
        QString reviewResult;
        QString status;
    };

    struct agreementFileData {
        QByteArray data;
    };

    struct termsExpiration {
        std::chrono::system_clock::duration frequency;
        QDateTime startDateTime;
    };

    struct agreementFileProperties : graph::entity {
        QDateTime createdDateTime;
        QString displayName;
        microsoft::graph::agreementFileData fileData;
        QString fileName;
        bool isDefault;
        bool isMajorVersion;
        QString language;
    };

    struct agreementFileVersion : graph::agreementFileProperties {
    };

    struct conditionalAccessSessionControl {
        bool isEnabled;
    };

    struct applicationEnforcedRestrictionsSessionControl : graph::conditionalAccessSessionControl {
    };

    struct cloudAppSecuritySessionControl : graph::conditionalAccessSessionControl {
        microsoft::graph::cloudAppSecuritySessionControlType cloudAppSecurityType;
    };

    struct conditionalAccessApplications {
        QList<QString> excludeApplications;
        QList<QString> includeApplications;
        QList<QString> includeAuthenticationContextClassReferences;
        QList<QString> includeUserActions;
    };

    struct conditionalAccessLocations {
        QList<QString> excludeLocations;
        QList<QString> includeLocations;
    };

    struct conditionalAccessPlatforms {
        QList<microsoft::graph::conditionalAccessDevicePlatform> excludePlatforms;
        QList<microsoft::graph::conditionalAccessDevicePlatform> includePlatforms;
    };

    struct conditionalAccessUsers {
        QList<QString> excludeGroups;
        QList<QString> excludeRoles;
        QList<QString> excludeUsers;
        QList<QString> includeGroups;
        QList<QString> includeRoles;
        QList<QString> includeUsers;
    };

    struct conditionalAccessGrantControls {
        QList<microsoft::graph::conditionalAccessGrantControl> builtInControls;
        QList<QString> customAuthenticationFactors;
        QString _operator;
        QList<QString> termsOfUse;
    };

    struct persistentBrowserSessionControl : graph::conditionalAccessSessionControl {
        microsoft::graph::persistentBrowserSessionMode mode;
    };

    struct signInFrequencySessionControl : graph::conditionalAccessSessionControl {
        microsoft::graph::signinFrequencyType type;
        int value;
    };

    struct ipRange {
    };

    struct iPv4CidrRange : graph::ipRange {
        QString cidrAddress;
    };

    struct iPv6CidrRange : graph::ipRange {
        QString cidrAddress;
    };

    struct namedLocation : graph::entity {
        QDateTime createdDateTime;
        QString displayName;
        QDateTime modifiedDateTime;
    };

    struct countryNamedLocation : graph::namedLocation {
        QList<QString> countriesAndRegions;
        microsoft::graph::countryLookupMethodType countryLookupMethod;
        bool includeUnknownCountriesAndRegions;
    };

    struct ipNamedLocation : graph::namedLocation {
        QList<microsoft::graph::ipRange> ipRanges;
        bool isTrusted;
    };

    struct deviceAndAppManagementAssignmentTarget {
    };

    struct allDevicesAssignmentTarget : graph::deviceAndAppManagementAssignmentTarget {
    };

    struct allLicensedUsersAssignmentTarget : graph::deviceAndAppManagementAssignmentTarget {
    };

    struct androidMinimumOperatingSystem {
        bool v10_0;
        bool v11_0;
        bool v4_0;
        bool v4_0_3;
        bool v4_1;
        bool v4_2;
        bool v4_3;
        bool v4_4;
        bool v5_0;
        bool v5_1;
    };

    struct appConfigurationSettingItem {
        QString appConfigKey;
        microsoft::graph::mdmAppConfigKeyType appConfigKeyType;
        QString appConfigKeyValue;
    };

    struct configurationManagerCollectionAssignmentTarget : graph::deviceAndAppManagementAssignmentTarget {
        QString collectionId;
    };

    struct groupAssignmentTarget : graph::deviceAndAppManagementAssignmentTarget {
        QString groupId;
    };

    struct exclusionGroupAssignmentTarget : graph::groupAssignmentTarget {
    };

    struct fileEncryptionInfo {
        QByteArray encryptionKey;
        QByteArray fileDigest;
        QString fileDigestAlgorithm;
        QByteArray initializationVector;
        QByteArray mac;
        QByteArray macKey;
        QString profileIdentifier;
    };

    struct iosDeviceType {
        bool iPad;
        bool iPhoneAndIPod;
    };

    struct mobileAppAssignmentSettings {
    };

    struct iosLobAppAssignmentSettings : graph::mobileAppAssignmentSettings {
        QString vpnConfigurationId;
    };

    struct iosMinimumOperatingSystem {
        bool v10_0;
        bool v11_0;
        bool v12_0;
        bool v13_0;
        bool v14_0;
        bool v8_0;
        bool v9_0;
    };

    struct iosStoreAppAssignmentSettings : graph::mobileAppAssignmentSettings {
        QString vpnConfigurationId;
    };

    struct iosVppAppAssignmentSettings : graph::mobileAppAssignmentSettings {
        bool useDeviceLicensing;
        QString vpnConfigurationId;
    };

    struct microsoftStoreForBusinessAppAssignmentSettings : graph::mobileAppAssignmentSettings {
        bool useDeviceContext;
    };

    struct mimeContent {
        QString type;
        QByteArray value;
    };

    struct mobileAppInstallTimeSettings {
        QDateTime deadlineDateTime;
        QDateTime startDateTime;
        bool useLocalTime;
    };

    struct vppLicensingType {
        bool supportsDeviceLicensing;
        bool supportsUserLicensing;
    };

    struct win32LobAppRestartSettings {
        int countdownDisplayBeforeRestartInMinutes;
        int gracePeriodInMinutes;
        int restartNotificationSnoozeDurationInMinutes;
    };

    struct win32LobAppRule {
        microsoft::graph::win32LobAppRuleType ruleType;
    };

    struct win32LobAppFileSystemRule : graph::win32LobAppRule {
        bool check32BitOn64System;
        QString comparisonValue;
        QString fileOrFolderName;
        microsoft::graph::win32LobAppFileSystemOperationType operationType;
        microsoft::graph::win32LobAppRuleOperator _operator;
        QString path;
    };

    struct win32LobAppInstallExperience {
        microsoft::graph::win32LobAppRestartBehavior deviceRestartBehavior;
        microsoft::graph::runAsAccountType runAsAccount;
    };

    struct win32LobAppMsiInformation {
        microsoft::graph::win32LobAppMsiPackageType packageType;
        QString productCode;
        QString productName;
        QString productVersion;
        QString publisher;
        bool requiresReboot;
        QString upgradeCode;
    };

    struct win32LobAppPowerShellScriptRule : graph::win32LobAppRule {
        QString comparisonValue;
        QString displayName;
        bool enforceSignatureCheck;
        microsoft::graph::win32LobAppPowerShellScriptRuleOperationType operationType;
        microsoft::graph::win32LobAppRuleOperator _operator;
        bool runAs32Bit;
        microsoft::graph::runAsAccountType runAsAccount;
        QString scriptContent;
    };

    struct win32LobAppProductCodeRule : graph::win32LobAppRule {
        QString productCode;
        QString productVersion;
        microsoft::graph::win32LobAppRuleOperator productVersionOperator;
    };

    struct win32LobAppRegistryRule : graph::win32LobAppRule {
        bool check32BitOn64System;
        QString comparisonValue;
        QString keyPath;
        microsoft::graph::win32LobAppRegistryRuleOperationType operationType;
        microsoft::graph::win32LobAppRuleOperator _operator;
        QString valueName;
    };

    struct win32LobAppReturnCode {
        int returnCode;
        microsoft::graph::win32LobAppReturnCodeType type;
    };

    struct windowsMinimumOperatingSystem {
        bool v10_0;
        bool v8_0;
        bool v8_1;
    };

    struct mobileAppCategory : graph::entity {
        QString displayName;
        QDateTime lastModifiedDateTime;
    };

    struct vppToken : graph::entity {
        QString appleId;
        bool automaticallyUpdateApps;
        QString countryOrRegion;
        QDateTime expirationDateTime;
        QDateTime lastModifiedDateTime;
        QDateTime lastSyncDateTime;
        microsoft::graph::vppTokenSyncStatus lastSyncStatus;
        QString organizationName;
        microsoft::graph::vppTokenState state;
        QString token;
        microsoft::graph::vppTokenAccountType vppTokenAccountType;
    };

    struct managedAppPolicy : graph::entity {
        QDateTime createdDateTime;
        QString description;
        QString displayName;
        QDateTime lastModifiedDateTime;
        QString version;
    };

    struct managedAppProtection : graph::managedAppPolicy {
        QList<microsoft::graph::managedAppDataStorageLocation> allowedDataStorageLocations;
        microsoft::graph::managedAppDataTransferLevel allowedInboundDataTransferSources;
        microsoft::graph::managedAppClipboardSharingLevel allowedOutboundClipboardSharingLevel;
        microsoft::graph::managedAppDataTransferLevel allowedOutboundDataTransferDestinations;
        bool contactSyncBlocked;
        bool dataBackupBlocked;
        bool deviceComplianceRequired;
        bool disableAppPinIfDevicePinIsSet;
        bool fingerprintBlocked;
        microsoft::graph::managedBrowserType managedBrowser;
        bool managedBrowserToOpenLinksRequired;
        int maximumPinRetries;
        int minimumPinLength;
        QString minimumRequiredAppVersion;
        QString minimumRequiredOsVersion;
        QString minimumWarningAppVersion;
        QString minimumWarningOsVersion;
        bool organizationalCredentialsRequired;
        std::chrono::system_clock::duration periodBeforePinReset;
        std::chrono::system_clock::duration periodOfflineBeforeAccessCheck;
        std::chrono::system_clock::duration periodOfflineBeforeWipeIsEnforced;
        std::chrono::system_clock::duration periodOnlineBeforeAccessCheck;
        microsoft::graph::managedAppPinCharacterSet pinCharacterSet;
        bool pinRequired;
        bool printBlocked;
        bool saveAsBlocked;
        bool simplePinBlocked;
    };

    struct managedAppStatus : graph::entity {
        QString displayName;
        QString version;
    };

    struct managedDeviceMobileAppConfigurationAssignment : graph::entity {
        microsoft::graph::deviceAndAppManagementAssignmentTarget target;
    };

    struct managedDeviceMobileAppConfigurationDeviceStatus : graph::entity {
        QDateTime complianceGracePeriodExpirationDateTime;
        QString deviceDisplayName;
        QString deviceModel;
        QDateTime lastReportedDateTime;
        microsoft::graph::complianceStatus status;
        QString userName;
        QString userPrincipalName;
    };

    struct managedDeviceMobileAppConfigurationDeviceSummary : graph::entity {
        int configurationVersion;
        int errorCount;
        int failedCount;
        QDateTime lastUpdateDateTime;
        int notApplicableCount;
        int pendingCount;
        int successCount;
    };

    struct managedDeviceMobileAppConfigurationUserStatus : graph::entity {
        int devicesCount;
        QDateTime lastReportedDateTime;
        microsoft::graph::complianceStatus status;
        QString userDisplayName;
        QString userPrincipalName;
    };

    struct managedDeviceMobileAppConfigurationUserSummary : graph::entity {
        int configurationVersion;
        int errorCount;
        int failedCount;
        QDateTime lastUpdateDateTime;
        int notApplicableCount;
        int pendingCount;
        int successCount;
    };

    struct mobileAppAssignment : graph::entity {
        microsoft::graph::installIntent intent;
        microsoft::graph::mobileAppAssignmentSettings settings;
        microsoft::graph::deviceAndAppManagementAssignmentTarget target;
    };

    struct mobileAppContentFile : graph::entity {
        QString azureStorageUri;
        QDateTime azureStorageUriExpirationDateTime;
        QDateTime createdDateTime;
        bool isCommitted;
        QByteArray manifest;
        QString name;
        long long size;
        long long sizeEncrypted;
        microsoft::graph::mobileAppContentFileUploadState uploadState;
    };

    struct deviceInstallState : graph::entity {
        QString deviceId;
        QString deviceName;
        QString errorCode;
        microsoft::graph::installState installState;
        QDateTime lastSyncDateTime;
        QString osDescription;
        QString osVersion;
        QString userName;
    };

    struct eBookInstallSummary : graph::entity {
        int failedDeviceCount;
        int failedUserCount;
        int installedDeviceCount;
        int installedUserCount;
        int notInstalledDeviceCount;
        int notInstalledUserCount;
    };

    struct managedEBookAssignment : graph::entity {
        microsoft::graph::installIntent installIntent;
        microsoft::graph::deviceAndAppManagementAssignmentTarget target;
    };

    struct iosVppEBookAssignment : graph::managedEBookAssignment {
    };

    struct userInstallStateSummary : graph::entity {
        int failedDeviceCount;
        int installedDeviceCount;
        int notInstalledDeviceCount;
        QString userName;
        QList<microsoft::graph::deviceInstallState> deviceStates;
    };

    struct deviceManagementSettings {
        int deviceComplianceCheckinThresholdDays;
        bool isScheduledActionEnabled;
        bool secureByDefault;
    };

    struct deviceCompliancePolicyDeviceStateSummary : graph::entity {
        int compliantDeviceCount;
        int configManagerCount;
        int conflictDeviceCount;
        int errorDeviceCount;
        int inGracePeriodCount;
        int nonCompliantDeviceCount;
        int notApplicableDeviceCount;
        int remediatedDeviceCount;
        int unknownDeviceCount;
    };

    struct deviceConfigurationDeviceStateSummary : graph::entity {
        int compliantDeviceCount;
        int conflictDeviceCount;
        int errorDeviceCount;
        int nonCompliantDeviceCount;
        int notApplicableDeviceCount;
        int remediatedDeviceCount;
        int unknownDeviceCount;
    };

    struct iosUpdateDeviceStatus : graph::entity {
        QDateTime complianceGracePeriodExpirationDateTime;
        QString deviceDisplayName;
        QString deviceId;
        QString deviceModel;
        microsoft::graph::iosUpdatesInstallStatus installStatus;
        QDateTime lastReportedDateTime;
        QString osVersion;
        microsoft::graph::complianceStatus status;
        QString userId;
        QString userName;
        QString userPrincipalName;
    };

    struct softwareUpdateStatusSummary : graph::entity {
        int compliantDeviceCount;
        int compliantUserCount;
        int conflictDeviceCount;
        int conflictUserCount;
        QString displayName;
        int errorDeviceCount;
        int errorUserCount;
        int nonCompliantDeviceCount;
        int nonCompliantUserCount;
        int notApplicableDeviceCount;
        int notApplicableUserCount;
        int remediatedDeviceCount;
        int remediatedUserCount;
        int unknownDeviceCount;
        int unknownUserCount;
    };

    struct onPremisesConditionalAccessSettings : graph::entity {
        bool enabled;
        QList<QGuid> excludedGroups;
        QList<QGuid> includedGroups;
        bool overrideDefaultRule;
    };

    struct deviceCategory : graph::entity {
        QString description;
        QString displayName;
    };

    struct deviceManagementPartner : graph::entity {
        QString displayName;
        bool isConfigured;
        QDateTime lastHeartbeatDateTime;
        microsoft::graph::deviceManagementPartnerAppType partnerAppType;
        microsoft::graph::deviceManagementPartnerTenantState partnerState;
        QString singleTenantAppId;
        QDateTime whenPartnerDevicesWillBeMarkedAsNonCompliantDateTime;
        QDateTime whenPartnerDevicesWillBeRemovedDateTime;
    };

    struct deviceManagementExchangeConnector : graph::entity {
        QString connectorServerName;
        QString exchangeAlias;
        microsoft::graph::deviceManagementExchangeConnectorType exchangeConnectorType;
        QString exchangeOrganization;
        QDateTime lastSyncDateTime;
        QString primarySmtpAddress;
        QString serverName;
        microsoft::graph::deviceManagementExchangeConnectorStatus status;
        QString version;
    };

    struct mobileThreatDefenseConnector : graph::entity {
        bool androidDeviceBlockedOnMissingPartnerData;
        bool androidEnabled;
        bool iosDeviceBlockedOnMissingPartnerData;
        bool iosEnabled;
        QDateTime lastHeartbeatDateTime;
        microsoft::graph::mobileThreatPartnerTenantState partnerState;
        int partnerUnresponsivenessThresholdInDays;
        bool partnerUnsupportedOsVersionBlocked;
    };

    struct applePushNotificationCertificate : graph::entity {
        QString appleIdentifier;
        QString certificate;
        QString certificateSerialNumber;
        QDateTime expirationDateTime;
        QDateTime lastModifiedDateTime;
        QString topicIdentifier;
    };

    struct windowsAutopilotDeviceIdentity : graph::entity {
        QString addressableUserName;
        QString azureActiveDirectoryDeviceId;
        QString displayName;
        microsoft::graph::enrollmentState enrollmentState;
        QString groupTag;
        QDateTime lastContactedDateTime;
        QString managedDeviceId;
        QString manufacturer;
        QString model;
        QString productKey;
        QString purchaseOrderIdentifier;
        QString resourceName;
        QString serialNumber;
        QString skuNumber;
        QString systemFamily;
        QString userPrincipalName;
    };

    struct resourceOperation : graph::entity {
        QString actionName;
        QString description;
        QString resourceName;
    };

    struct remoteAssistancePartner : graph::entity {
        QString displayName;
        QDateTime lastConnectionDateTime;
        microsoft::graph::remoteAssistanceOnboardingStatus onboardingStatus;
        QString onboardingUrl;
    };

    struct telecomExpenseManagementPartner : graph::entity {
        bool appAuthorized;
        QString displayName;
        bool enabled;
        QDateTime lastConnectionDateTime;
        QString url;
    };

    struct windowsInformationProtectionAppLearningSummary : graph::entity {
        QString applicationName;
        microsoft::graph::applicationType applicationType;
        int deviceCount;
    };

    struct windowsInformationProtectionNetworkLearningSummary : graph::entity {
        int deviceCount;
        QString url;
    };

    struct termsAndConditionsAssignment : graph::entity {
        microsoft::graph::deviceAndAppManagementAssignmentTarget target;
    };

    struct appListItem {
        QString appId;
        QString appStoreUrl;
        QString name;
        QString publisher;
    };

    struct bitLockerRemovableDrivePolicy {
        bool blockCrossOrganizationWriteAccess;
        microsoft::graph::bitLockerEncryptionMethod encryptionMethod;
        bool requireEncryptionForWriteAccess;
    };

    struct defenderDetectedMalwareActions {
        microsoft::graph::defenderThreatAction highSeverity;
        microsoft::graph::defenderThreatAction lowSeverity;
        microsoft::graph::defenderThreatAction moderateSeverity;
        microsoft::graph::defenderThreatAction severeSeverity;
    };

    struct settingSource {
        QString displayName;
        QString id;
        microsoft::graph::settingSourceType sourceType;
    };

    struct deviceConfigurationSettingState {
        QString currentValue;
        long long errorCode;
        QString errorDescription;
        QString instanceDisplayName;
        QString setting;
        QString settingName;
        QList<microsoft::graph::settingSource> sources;
        microsoft::graph::complianceStatus state;
        QString userEmail;
        QString userId;
        QString userName;
        QString userPrincipalName;
    };

    struct edgeSearchEngineBase {
    };

    struct edgeSearchEngine : graph::edgeSearchEngineBase {
        microsoft::graph::edgeSearchEngineType edgeSearchEngineType;
    };

    struct edgeSearchEngineCustom : graph::edgeSearchEngineBase {
        QString edgeSearchEngineOpenSearchXmlUrl;
    };

    struct iosHomeScreenItem {
        QString displayName;
    };

    struct iosHomeScreenApp : graph::iosHomeScreenItem {
        QString bundleID;
    };

    struct iosHomeScreenFolderPage {
        QList<microsoft::graph::iosHomeScreenApp> apps;
        QString displayName;
    };

    struct iosHomeScreenPage {
        QString displayName;
        QList<microsoft::graph::iosHomeScreenItem> icons;
    };

    struct iosNetworkUsageRule {
        bool cellularDataBlocked;
        bool cellularDataBlockWhenRoaming;
        QList<microsoft::graph::appListItem> managedApps;
    };

    struct iosNotificationSettings {
        microsoft::graph::iosNotificationAlertType alertType;
        QString appName;
        bool badgesEnabled;
        QString bundleID;
        bool enabled;
        QString publisher;
        bool showInNotificationCenter;
        bool showOnLockScreen;
        bool soundsEnabled;
    };

    struct mediaContentRatingAustralia {
        microsoft::graph::ratingAustraliaMoviesType movieRating;
        microsoft::graph::ratingAustraliaTelevisionType tvRating;
    };

    struct mediaContentRatingCanada {
        microsoft::graph::ratingCanadaMoviesType movieRating;
        microsoft::graph::ratingCanadaTelevisionType tvRating;
    };

    struct mediaContentRatingFrance {
        microsoft::graph::ratingFranceMoviesType movieRating;
        microsoft::graph::ratingFranceTelevisionType tvRating;
    };

    struct mediaContentRatingGermany {
        microsoft::graph::ratingGermanyMoviesType movieRating;
        microsoft::graph::ratingGermanyTelevisionType tvRating;
    };

    struct mediaContentRatingIreland {
        microsoft::graph::ratingIrelandMoviesType movieRating;
        microsoft::graph::ratingIrelandTelevisionType tvRating;
    };

    struct mediaContentRatingJapan {
        microsoft::graph::ratingJapanMoviesType movieRating;
        microsoft::graph::ratingJapanTelevisionType tvRating;
    };

    struct mediaContentRatingNewZealand {
        microsoft::graph::ratingNewZealandMoviesType movieRating;
        microsoft::graph::ratingNewZealandTelevisionType tvRating;
    };

    struct mediaContentRatingUnitedKingdom {
        microsoft::graph::ratingUnitedKingdomMoviesType movieRating;
        microsoft::graph::ratingUnitedKingdomTelevisionType tvRating;
    };

    struct mediaContentRatingUnitedStates {
        microsoft::graph::ratingUnitedStatesMoviesType movieRating;
        microsoft::graph::ratingUnitedStatesTelevisionType tvRating;
    };

    struct omaSetting {
        QString description;
        QString displayName;
        QString omaUri;
    };

    struct omaSettingBase64 : graph::omaSetting {
        QString fileName;
        QString value;
    };

    struct omaSettingBoolean : graph::omaSetting {
        bool value;
    };

    struct omaSettingDateTime : graph::omaSetting {
        QDateTime value;
    };

    struct omaSettingFloatingPoint : graph::omaSetting {
        float value;
    };

    struct omaSettingInteger : graph::omaSetting {
        int value;
    };

    struct omaSettingString : graph::omaSetting {
        QString value;
    };

    struct omaSettingStringXml : graph::omaSetting {
        QString fileName;
        QByteArray value;
    };

    struct report {
        QByteArray content;
    };

    struct sharedPCAccountManagerPolicy {
        microsoft::graph::sharedPCAccountDeletionPolicyType accountDeletionPolicy;
        int cacheAccountsAboveDiskFreePercentage;
        int inactiveThresholdDays;
        int removeAccountsBelowDiskFreePercentage;
    };

    struct windows10NetworkProxyServer {
        QString address;
        QList<QString> exceptions;
        bool useForLocalAddresses;
    };

    struct windowsFirewallNetworkProfile {
        bool authorizedApplicationRulesFromGroupPolicyMerged;
        bool connectionSecurityRulesFromGroupPolicyMerged;
        microsoft::graph::stateManagementSetting firewallEnabled;
        bool globalPortRulesFromGroupPolicyMerged;
        bool inboundConnectionsBlocked;
        bool inboundNotificationsBlocked;
        bool incomingTrafficBlocked;
        bool outboundConnectionsBlocked;
        bool policyRulesFromGroupPolicyMerged;
        bool securedPacketExemptionAllowed;
        bool stealthModeBlocked;
        bool unicastResponsesToMulticastBroadcastsBlocked;
    };

    struct windowsUpdateInstallScheduleType {
    };

    struct windowsUpdateActiveHoursInstall : graph::windowsUpdateInstallScheduleType {
        QTime activeHoursEnd;
        QTime activeHoursStart;
    };

    struct windowsUpdateScheduledInstall : graph::windowsUpdateInstallScheduleType {
        microsoft::graph::weeklySchedule scheduledInstallDay;
        QTime scheduledInstallTime;
    };

    struct deviceComplianceActionItem : graph::entity {
        microsoft::graph::deviceComplianceActionType actionType;
        int gracePeriodHours;
        QList<QString> notificationMessageCCList;
        QString notificationTemplateId;
    };

    struct deviceComplianceDeviceOverview : graph::entity {
        int configurationVersion;
        int errorCount;
        int failedCount;
        QDateTime lastUpdateDateTime;
        int notApplicableCount;
        int pendingCount;
        int successCount;
    };

    struct deviceComplianceDeviceStatus : graph::entity {
        QDateTime complianceGracePeriodExpirationDateTime;
        QString deviceDisplayName;
        QString deviceModel;
        QDateTime lastReportedDateTime;
        microsoft::graph::complianceStatus status;
        QString userName;
        QString userPrincipalName;
    };

    struct deviceCompliancePolicyAssignment : graph::entity {
        microsoft::graph::deviceAndAppManagementAssignmentTarget target;
    };

    struct settingStateDeviceSummary : graph::entity {
        int compliantDeviceCount;
        int conflictDeviceCount;
        int errorDeviceCount;
        QString instancePath;
        int nonCompliantDeviceCount;
        int notApplicableDeviceCount;
        int remediatedDeviceCount;
        QString settingName;
        int unknownDeviceCount;
    };

    struct deviceComplianceScheduledActionForRule : graph::entity {
        QString ruleName;
        QList<microsoft::graph::deviceComplianceActionItem> scheduledActionConfigurations;
    };

    struct deviceComplianceUserStatus : graph::entity {
        int devicesCount;
        QDateTime lastReportedDateTime;
        microsoft::graph::complianceStatus status;
        QString userDisplayName;
        QString userPrincipalName;
    };

    struct deviceComplianceUserOverview : graph::entity {
        int configurationVersion;
        int errorCount;
        int failedCount;
        QDateTime lastUpdateDateTime;
        int notApplicableCount;
        int pendingCount;
        int successCount;
    };

    struct deviceComplianceSettingState : graph::entity {
        QDateTime complianceGracePeriodExpirationDateTime;
        QString deviceId;
        QString deviceModel;
        QString deviceName;
        QString setting;
        QString settingName;
        microsoft::graph::complianceStatus state;
        QString userEmail;
        QString userId;
        QString userName;
        QString userPrincipalName;
    };

    struct deviceConfigurationAssignment : graph::entity {
        microsoft::graph::deviceAndAppManagementAssignmentTarget target;
    };

    struct deviceConfigurationDeviceStatus : graph::entity {
        QDateTime complianceGracePeriodExpirationDateTime;
        QString deviceDisplayName;
        QString deviceModel;
        QDateTime lastReportedDateTime;
        microsoft::graph::complianceStatus status;
        QString userName;
        QString userPrincipalName;
    };

    struct deviceConfigurationDeviceOverview : graph::entity {
        int configurationVersion;
        int errorCount;
        int failedCount;
        QDateTime lastUpdateDateTime;
        int notApplicableCount;
        int pendingCount;
        int successCount;
    };

    struct deviceConfigurationUserStatus : graph::entity {
        int devicesCount;
        QDateTime lastReportedDateTime;
        microsoft::graph::complianceStatus status;
        QString userDisplayName;
        QString userPrincipalName;
    };

    struct deviceConfigurationUserOverview : graph::entity {
        int configurationVersion;
        int errorCount;
        int failedCount;
        QDateTime lastUpdateDateTime;
        int notApplicableCount;
        int pendingCount;
        int successCount;
    };

    struct deviceConfigurationState : graph::entity {
        QString displayName;
        microsoft::graph::policyPlatformType platformType;
        int settingCount;
        QList<microsoft::graph::deviceConfigurationSettingState> settingStates;
        microsoft::graph::complianceStatus state;
        int version;
    };

    struct configurationManagerClientEnabledFeatures {
        bool compliancePolicy;
        bool deviceConfiguration;
        bool inventory;
        bool modernApps;
        bool resourceAccess;
        bool windowsUpdateForBusiness;
    };

    struct deviceActionResult {
        QString actionName;
        microsoft::graph::actionState actionState;
        QDateTime lastUpdatedDateTime;
        QDateTime startDateTime;
    };

    struct deviceHealthAttestationState {
        QString attestationIdentityKey;
        QString bitLockerStatus;
        QString bootAppSecurityVersion;
        QString bootDebugging;
        QString bootManagerSecurityVersion;
        QString bootManagerVersion;
        QString bootRevisionListInfo;
        QString codeIntegrity;
        QString codeIntegrityCheckVersion;
        QString codeIntegrityPolicy;
        QString contentNamespaceUrl;
        QString contentVersion;
        QString dataExcutionPolicy;
        QString deviceHealthAttestationStatus;
        QString earlyLaunchAntiMalwareDriverProtection;
        QString healthAttestationSupportedStatus;
        QString healthStatusMismatchInfo;
        QDateTime issuedDateTime;
        QString lastUpdateDateTime;
        QString operatingSystemKernelDebugging;
        QString operatingSystemRevListInfo;
        QString pcr0;
        QString pcrHashAlgorithm;
        long long resetCount;
        long long restartCount;
        QString safeMode;
        QString secureBoot;
        QString secureBootConfigurationPolicyFingerPrint;
        QString testSigning;
        QString tpmVersion;
        QString virtualSecureMode;
        QString windowsPE;
    };

    struct printUsage : graph::entity {
        long long completedBlackAndWhiteJobCount;
        long long completedColorJobCount;
        long long incompleteJobCount;
        QDate usageDate;
    };

    struct printUsageByPrinter : graph::printUsage {
        QString printerId;
    };

    struct printUsageByUser : graph::printUsage {
        QString userPrincipalName;
    };

    struct complianceManagementPartnerAssignment {
        microsoft::graph::deviceAndAppManagementAssignmentTarget target;
    };

    struct deviceEnrollmentPlatformRestriction {
        QString osMaximumVersion;
        QString osMinimumVersion;
        bool personalDeviceEnrollmentBlocked;
        bool platformBlocked;
    };

    struct rgbColor {
        std::byte b;
        std::byte g;
        std::byte r;
    };

    struct enrollmentConfigurationAssignment : graph::entity {
        microsoft::graph::deviceAndAppManagementAssignmentTarget target;
    };

    struct deleteUserFromSharedAppleDeviceActionResult : graph::deviceActionResult {
        QString userPrincipalName;
    };

    struct deviceExchangeAccessStateSummary {
        int allowedDeviceCount;
        int blockedDeviceCount;
        int quarantinedDeviceCount;
        int unavailableDeviceCount;
        int unknownDeviceCount;
    };

    struct deviceGeoLocation {
        double altitude;
        double heading;
        double horizontalAccuracy;
        QDateTime lastCollectedDateTime;
        double latitude;
        double longitude;
        double speed;
        double verticalAccuracy;
    };

    struct deviceOperatingSystemSummary {
        int androidCount;
        int iosCount;
        int macOSCount;
        int unknownCount;
        int windowsCount;
        int windowsMobileCount;
    };

    struct locateDeviceActionResult : graph::deviceActionResult {
        microsoft::graph::deviceGeoLocation deviceLocation;
    };

    struct remoteLockActionResult : graph::deviceActionResult {
        QString unlockPin;
    };

    struct resetPasscodeActionResult : graph::deviceActionResult {
        QString passcode;
    };

    struct windowsDeviceAccount {
        QString password;
    };

    struct windowsDefenderScanActionResult : graph::deviceActionResult {
        QString scanType;
    };

    struct windowsDeviceADAccount : graph::windowsDeviceAccount {
        QString domainName;
        QString userName;
    };

    struct windowsDeviceAzureADAccount : graph::windowsDeviceAccount {
        QString userPrincipalName;
    };

    struct importedWindowsAutopilotDeviceIdentityState {
        int deviceErrorCode;
        QString deviceErrorName;
        microsoft::graph::importedWindowsAutopilotDeviceIdentityImportStatus deviceImportStatus;
        QString deviceRegistrationId;
    };

    struct mobileAppIdentifier {
    };

    struct androidMobileAppIdentifier : graph::mobileAppIdentifier {
        QString packageId;
    };

    struct iosMobileAppIdentifier : graph::mobileAppIdentifier {
        QString bundleId;
    };

    struct iPv4Range : graph::ipRange {
        QString lowerAddress;
        QString upperAddress;
    };

    struct iPv6Range : graph::ipRange {
        QString lowerAddress;
        QString upperAddress;
    };

    struct keyValuePair {
        QString name;
        QString value;
    };

    struct managedAppDiagnosticStatus {
        QString mitigationInstruction;
        QString state;
        QString validationName;
    };

    struct managedAppPolicyDeploymentSummaryPerApp {
        int configurationAppliedUserCount;
        microsoft::graph::mobileAppIdentifier mobileAppIdentifier;
    };

    struct proxiedDomain {
        QString ipAddressOrFQDN;
        QString proxy;
    };

    struct windowsInformationProtectionApp {
        bool denied;
        QString description;
        QString displayName;
        QString productName;
        QString publisherName;
    };

    struct windowsInformationProtectionDataRecoveryCertificate {
        QByteArray certificate;
        QString description;
        QDateTime expirationDateTime;
        QString subjectName;
    };

    struct windowsInformationProtectionDesktopApp : graph::windowsInformationProtectionApp {
        QString binaryName;
        QString binaryVersionHigh;
        QString binaryVersionLow;
    };

    struct windowsInformationProtectionIPRangeCollection {
        QString displayName;
        QList<microsoft::graph::ipRange> ranges;
    };

    struct windowsInformationProtectionProxiedDomainCollection {
        QString displayName;
        QList<microsoft::graph::proxiedDomain> proxiedDomains;
    };

    struct windowsInformationProtectionResourceCollection {
        QString displayName;
        QList<QString> resources;
    };

    struct windowsInformationProtectionStoreApp : graph::windowsInformationProtectionApp {
    };

    struct managedMobileApp : graph::entity {
        microsoft::graph::mobileAppIdentifier mobileAppIdentifier;
        QString version;
    };

    struct managedAppPolicyDeploymentSummary : graph::entity {
        int configurationDeployedUserCount;
        QList<microsoft::graph::managedAppPolicyDeploymentSummaryPerApp> configurationDeploymentSummaryPerApp;
        QString displayName;
        QDateTime lastRefreshTime;
        QString version;
    };

    struct managedAppOperation : graph::entity {
        QString displayName;
        QDateTime lastModifiedDateTime;
        QString state;
        QString version;
    };

    struct managedAppStatusRaw : graph::managedAppStatus {
        microsoft::graph::Json content;
    };

    struct targetedManagedAppPolicyAssignment : graph::entity {
        microsoft::graph::deviceAndAppManagementAssignmentTarget target;
    };

    struct windowsInformationProtectionAppLockerFile : graph::entity {
        QString displayName;
        QByteArray file;
        QString fileHash;
        QString version;
    };

    struct localizedNotificationMessage : graph::entity {
        bool isDefault;
        QDateTime lastModifiedDateTime;
        QString locale;
        QString messageTemplate;
        QString subject;
    };

    struct resourceAction {
        QList<QString> allowedResourceActions;
        QList<QString> notAllowedResourceActions;
    };

    struct rolePermission {
        QList<microsoft::graph::resourceAction> resourceActions;
    };

    struct deviceManagementExportJob : graph::entity {
        QDateTime expirationDateTime;
        QString filter;
        microsoft::graph::deviceManagementReportFileFormat format;
        microsoft::graph::deviceManagementExportJobLocalizationType localizationType;
        QString reportName;
        QDateTime requestDateTime;
        QList<QString> select;
        QString snapshotId;
        microsoft::graph::deviceManagementReportStatus status;
        QString url;
    };

    struct enrollmentTroubleshootingEvent : graph::deviceManagementTroubleshootingEvent {
        QString deviceId;
        microsoft::graph::deviceEnrollmentType enrollmentType;
        microsoft::graph::deviceEnrollmentFailureReason failureCategory;
        QString failureReason;
        QString managedDeviceIdentifier;
        QString operatingSystem;
        QString osVersion;
        QString userId;
    };

    struct serviceHealthIssuePost {
        QDateTime createdDateTime;
        microsoft::graph::itemBody description;
        microsoft::graph::postType postType;
    };

    struct serviceUpdateMessageViewpoint {
        bool isArchived;
        bool isFavorited;
        bool isRead;
    };

    struct serviceAnnouncementBase : graph::entity {
        QList<microsoft::graph::keyValuePair> details;
        QDateTime endDateTime;
        QDateTime lastModifiedDateTime;
        QDateTime startDateTime;
        QString title;
    };

    struct serviceHealthIssue : graph::serviceAnnouncementBase {
        microsoft::graph::serviceHealthClassificationType classification;
        QString feature;
        QString featureGroup;
        QString impactDescription;
        bool isResolved;
        microsoft::graph::serviceHealthOrigin origin;
        QList<microsoft::graph::serviceHealthIssuePost> posts;
        QString service;
        microsoft::graph::serviceHealthStatus status;
    };

    struct serviceUpdateMessage : graph::serviceAnnouncementBase {
        QDateTime actionRequiredByDateTime;
        microsoft::graph::itemBody body;
        microsoft::graph::serviceUpdateCategory category;
        bool isMajorChange;
        QList<QString> services;
        microsoft::graph::serviceUpdateSeverity severity;
        QList<QString> tags;
        microsoft::graph::serviceUpdateMessageViewpoint viewPoint;
    };

    struct searchHit {
        QString contentSource;
        QString hitId;
        int rank;
        QString summary;
        std::unique_ptr<microsoft::graph::entity> resource;
    };

    struct searchHitsContainer {
        QList<microsoft::graph::searchHit> hits;
        bool moreResultsAvailable;
        int total;
    };

    struct searchQuery {
        QString queryString;
    };

    struct searchRequest {
        QList<QString> contentSources;
        bool enableTopResults;
        QList<microsoft::graph::entityType> entityTypes;
        QList<QString> fields;
        int from;
        microsoft::graph::searchQuery query;
        int size;
    };

    struct searchResponse {
        QList<microsoft::graph::searchHitsContainer> hitsContainers;
        QList<QString> searchTerms;
    };

    struct searchEntity : graph::entity {
    };

    struct plannerAppliedCategories {
    };

    struct plannerAssignment {
        microsoft::graph::identitySet assignedBy;
        QDateTime assignedDateTime;
        QString orderHint;
    };

    struct plannerAssignments {
    };

    struct plannerCategoryDescriptions {
        QString category1;
        QString category2;
        QString category3;
        QString category4;
        QString category5;
        QString category6;
    };

    struct plannerChecklistItem {
        bool isChecked;
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
        QString orderHint;
        QString title;
    };

    struct plannerChecklistItems {
    };

    struct plannerExternalReference {
        QString alias;
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
        QString previewPriority;
        QString type;
    };

    struct plannerExternalReferences {
    };

    struct plannerOrderHintsByAssignee {
    };

    struct plannerUserIds {
    };

    struct plannerAssignedToTaskBoardTaskFormat : graph::entity {
        microsoft::graph::plannerOrderHintsByAssignee orderHintsByAssignee;
        QString unassignedOrderHint;
    };

    struct plannerBucketTaskBoardTaskFormat : graph::entity {
        QString orderHint;
    };

    struct plannerPlanDetails : graph::entity {
        microsoft::graph::plannerCategoryDescriptions categoryDescriptions;
        microsoft::graph::plannerUserIds sharedWith;
    };

    struct plannerProgressTaskBoardTaskFormat : graph::entity {
        QString orderHint;
    };

    struct plannerTaskDetails : graph::entity {
        microsoft::graph::plannerChecklistItems checklist;
        QString description;
        microsoft::graph::plannerPreviewType previewType;
        microsoft::graph::plannerExternalReferences references;
    };

    struct insightIdentity {
        QString address;
        QString displayName;
        QString id;
    };

    struct resourceReference {
        QString id;
        QString type;
        QString webUrl;
    };

    struct resourceVisualization {
        QString containerDisplayName;
        QString containerType;
        QString containerWebUrl;
        QString mediaType;
        QString previewImageUrl;
        QString previewText;
        QString title;
        QString type;
    };

    struct sharingDetail {
        microsoft::graph::insightIdentity sharedBy;
        QDateTime sharedDateTime;
        microsoft::graph::resourceReference sharingReference;
        QString sharingSubject;
        QString sharingType;
    };

    struct usageDetails {
        QDateTime lastAccessedDateTime;
        QDateTime lastModifiedDateTime;
    };

    struct sharedInsight : graph::entity {
        microsoft::graph::sharingDetail lastShared;
        microsoft::graph::resourceReference resourceReference;
        microsoft::graph::resourceVisualization resourceVisualization;
        QList<microsoft::graph::sharingDetail> sharingHistory;
        std::unique_ptr<microsoft::graph::entity> lastSharedMethod;
        std::unique_ptr<microsoft::graph::entity> resource;
    };

    struct trending : graph::entity {
        QDateTime lastModifiedDateTime;
        microsoft::graph::resourceReference resourceReference;
        microsoft::graph::resourceVisualization resourceVisualization;
        double weight;
        std::unique_ptr<microsoft::graph::entity> resource;
    };

    struct usedInsight : graph::entity {
        microsoft::graph::usageDetails lastUsed;
        microsoft::graph::resourceReference resourceReference;
        microsoft::graph::resourceVisualization resourceVisualization;
        std::unique_ptr<microsoft::graph::entity> resource;
    };

    struct changeTrackedEntity : graph::entity {
        QDateTime createdDateTime;
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
    };

    struct diagnostic {
        QString message;
        QString url;
    };

    struct externalLink {
        QString href;
    };

    struct onenoteOperationError {
        QString code;
        QString message;
    };

    struct onenotePagePreviewLinks {
        microsoft::graph::externalLink previewImageUrl;
    };

    struct onenotePatchContentCommand {
        microsoft::graph::onenotePatchActionType action;
        QString content;
        microsoft::graph::onenotePatchInsertPosition position;
        QString target;
    };

    struct pageLinks {
        microsoft::graph::externalLink oneNoteClientUrl;
        microsoft::graph::externalLink oneNoteWebUrl;
    };

    struct recentNotebookLinks {
        microsoft::graph::externalLink oneNoteClientUrl;
        microsoft::graph::externalLink oneNoteWebUrl;
    };

    struct sectionLinks {
        microsoft::graph::externalLink oneNoteClientUrl;
        microsoft::graph::externalLink oneNoteWebUrl;
    };

    struct onenoteEntityBaseModel : graph::entity {
        QString self;
    };

    struct onenoteEntitySchemaObjectModel : graph::onenoteEntityBaseModel {
        QDateTime createdDateTime;
    };

    struct onenoteEntityHierarchyModel : graph::onenoteEntitySchemaObjectModel {
        microsoft::graph::identitySet createdBy;
        QString displayName;
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
    };

    struct operation : graph::entity {
        QDateTime createdDateTime;
        QDateTime lastActionDateTime;
        microsoft::graph::operationStatus status;
    };

    struct onenoteOperation : graph::operation {
        microsoft::graph::onenoteOperationError error;
        QString percentComplete;
        QString resourceId;
        QString resourceLocation;
    };

    struct onenoteResource : graph::onenoteEntityBaseModel {
        QByteArray content;
        QString contentUrl;
    };

    struct archivedPrintJob {
        bool acquiredByPrinter;
        QDateTime acquiredDateTime;
        QDateTime completionDateTime;
        int copiesPrinted;
        microsoft::graph::userIdentity createdBy;
        QDateTime createdDateTime;
        QString id;
        QString printerId;
        microsoft::graph::printJobProcessingState processingState;
    };

    struct integerRange {
        long long end;
        long long start;
    };

    struct printCertificateSigningRequest {
        QString content;
        QString transportKey;
    };

    struct printDocumentUploadProperties {
        QString contentType;
        QString documentName;
        long long size;
    };

    struct printerCapabilities {
        QList<int> bottomMargins;
        bool collation;
        QList<microsoft::graph::printColorMode> colorModes;
        QList<QString> contentTypes;
        microsoft::graph::integerRange copiesPerJob;
        QList<int> dpis;
        QList<microsoft::graph::printDuplexMode> duplexModes;
        QList<microsoft::graph::printerFeedOrientation> feedOrientations;
        QList<microsoft::graph::printFinishing> finishings;
        QList<QString> inputBins;
        bool isColorPrintingSupported;
        bool isPageRangeSupported;
        QList<int> leftMargins;
        QList<QString> mediaColors;
        QList<QString> mediaSizes;
        QList<QString> mediaTypes;
        QList<microsoft::graph::printMultipageLayout> multipageLayouts;
        QList<microsoft::graph::printOrientation> orientations;
        QList<QString> outputBins;
        QList<int> pagesPerSheet;
        QList<microsoft::graph::printQuality> qualities;
        QList<int> rightMargins;
        QList<microsoft::graph::printScaling> scalings;
        bool supportsFitPdfToPage;
        QList<int> topMargins;
    };

    struct printerDefaults {
        microsoft::graph::printColorMode colorMode;
        QString contentType;
        int copiesPerJob;
        int dpi;
        microsoft::graph::printDuplexMode duplexMode;
        QList<microsoft::graph::printFinishing> finishings;
        bool fitPdfToPage;
        QString inputBin;
        QString mediaColor;
        QString mediaSize;
        QString mediaType;
        microsoft::graph::printMultipageLayout multipageLayout;
        microsoft::graph::printOrientation orientation;
        QString outputBin;
        int pagesPerSheet;
        microsoft::graph::printQuality quality;
        microsoft::graph::printScaling scaling;
    };

    struct printerLocation {
        int altitudeInMeters;
        QString building;
        QString city;
        QString countryOrRegion;
        QString floor;
        QString floorDescription;
        double latitude;
        double longitude;
        QList<QString> organization;
        QString postalCode;
        QString roomDescription;
        QString roomName;
        QString site;
        QString stateOrProvince;
        QString streetAddress;
        QList<QString> subdivision;
        QList<QString> subunit;
    };

    struct printerStatus {
        QString description;
        QList<microsoft::graph::printerProcessingStateDetail> details;
        microsoft::graph::printerProcessingState state;
    };

    struct printMargin {
        int bottom;
        int left;
        int right;
        int top;
    };

    struct printJobStatus {
        QString description;
        QList<microsoft::graph::printJobStateDetail> details;
        bool isAcquiredByPrinter;
        microsoft::graph::printJobProcessingState state;
    };

    struct printOperationStatus {
        QString description;
        microsoft::graph::printOperationProcessingState state;
    };

    struct printSettings {
        bool documentConversionEnabled;
    };

    struct printTaskStatus {
        QString description;
        microsoft::graph::printTaskProcessingState state;
    };

    struct printConnector : graph::entity {
        QString appVersion;
        QString displayName;
        QString fullyQualifiedDomainName;
        microsoft::graph::printerLocation location;
        QString operatingSystem;
        QDateTime registeredDateTime;
    };

    struct printOperation : graph::entity {
        QDateTime createdDateTime;
        microsoft::graph::printOperationStatus status;
    };

    struct printDocument : graph::entity {
        QString contentType;
        QString displayName;
        long long size;
    };

    struct printServiceEndpoint : graph::entity {
        QString displayName;
        QString uri;
    };

    struct imageInfo {
        bool addImageQuery;
        QString alternateText;
        QString alternativeText;
        QString iconUrl;
    };

    struct visualInfo {
        microsoft::graph::imageInfo attribution;
        QString backgroundColor;
        microsoft::graph::Json content;
        QString description;
        QString displayText;
    };

    struct dataPolicyOperation : graph::entity {
        QDateTime completedDateTime;
        double progress;
        microsoft::graph::dataPolicyOperationStatus status;
        QString storageLocation;
        QDateTime submittedDateTime;
        QString userId;
    };

    struct alertDetection {
        QString detectionType;
        QString method;
        QString name;
    };

    struct alertHistoryState {
        QString appId;
        QString assignedTo;
        QList<QString> comments;
        microsoft::graph::alertFeedback feedback;
        microsoft::graph::alertStatus status;
        QDateTime updatedDateTime;
        QString user;
    };

    struct alertTrigger {
        QString name;
        QString type;
        QString value;
    };

    struct averageComparativeScore {
        double averageScore;
        QString basis;
    };

    struct certificationControl {
        QString name;
        QString url;
    };

    struct cloudAppSecurityState {
        QString destinationServiceIp;
        QString destinationServiceName;
        QString riskScore;
    };

    struct complianceInformation {
        QList<microsoft::graph::certificationControl> certificationControls;
        QString certificationName;
    };

    struct controlScore {
        QString controlCategory;
        QString controlName;
        QString description;
        double score;
    };

    struct fileHash {
        microsoft::graph::fileHashType hashType;
        QString hashValue;
    };

    struct fileSecurityState {
        microsoft::graph::fileHash fileHash;
        QString name;
        QString path;
        QString riskScore;
    };

    struct hostSecurityState {
        QString fqdn;
        bool isAzureAdJoined;
        bool isAzureAdRegistered;
        bool isHybridAzureDomainJoined;
        QString netBiosName;
        QString os;
        QString privateIpAddress;
        QString publicIpAddress;
        QString riskScore;
    };

    struct investigationSecurityState {
        QString name;
        QString status;
    };

    struct malwareState {
        QString category;
        QString family;
        QString name;
        QString severity;
        bool wasRunning;
    };

    struct messageSecurityState {
        QString connectingIP;
        QString deliveryAction;
        QString deliveryLocation;
        QString directionality;
        QString internetMessageId;
        QString messageFingerprint;
        QDateTime messageReceivedDateTime;
        QString messageSubject;
        QString networkMessageId;
    };

    struct networkConnection {
        QString applicationName;
        QString destinationAddress;
        QString destinationDomain;
        QString destinationLocation;
        QString destinationPort;
        QString destinationUrl;
        microsoft::graph::connectionDirection direction;
        QDateTime domainRegisteredDateTime;
        QString localDnsName;
        QString natDestinationAddress;
        QString natDestinationPort;
        QString natSourceAddress;
        QString natSourcePort;
        microsoft::graph::securityNetworkProtocol protocol;
        QString riskScore;
        QString sourceAddress;
        QString sourceLocation;
        QString sourcePort;
        microsoft::graph::connectionStatus status;
        QString urlParameters;
    };

    struct process {
        QString accountName;
        QString commandLine;
        QDateTime createdDateTime;
        microsoft::graph::fileHash fileHash;
        microsoft::graph::processIntegrityLevel integrityLevel;
        bool isElevated;
        QString name;
        QDateTime parentProcessCreatedDateTime;
        int parentProcessId;
        QString parentProcessName;
        QString path;
        int processId;
    };

    struct registryKeyState {
        microsoft::graph::registryHive hive;
        QString key;
        QString oldKey;
        QString oldValueData;
        QString oldValueName;
        microsoft::graph::registryOperation operation;
        int processId;
        QString valueData;
        QString valueName;
        microsoft::graph::registryValueType valueType;
    };

    struct secureScoreControlStateUpdate {
        QString assignedTo;
        QString comment;
        QString state;
        QString updatedBy;
        QDateTime updatedDateTime;
    };

    struct securityResource {
        QString resource;
        microsoft::graph::securityResourceType resourceType;
    };

    struct securityVendorInformation {
        QString provider;
        QString providerVersion;
        QString subProvider;
        QString vendor;
    };

    struct uriClickSecurityState {
        QString clickAction;
        QDateTime clickDateTime;
        QString id;
        QString sourceId;
        QString uriDomain;
        QString verdict;
    };

    struct userSecurityState {
        QString aadUserId;
        QString accountName;
        QString domainName;
        microsoft::graph::emailRole emailRole;
        bool isVpn;
        QDateTime logonDateTime;
        QString logonId;
        QString logonIp;
        QString logonLocation;
        microsoft::graph::logonType logonType;
        QString onPremisesSecurityIdentifier;
        QString riskScore;
        microsoft::graph::userAccountSecurityType userAccountType;
        QString userPrincipalName;
    };

    struct vulnerabilityState {
        QString cve;
        QString severity;
        bool wasRunning;
    };

    struct alert : graph::entity {
        QString activityGroupName;
        QList<microsoft::graph::alertDetection> alertDetections;
        QString assignedTo;
        QString azureSubscriptionId;
        QString azureTenantId;
        QString category;
        QDateTime closedDateTime;
        QList<microsoft::graph::cloudAppSecurityState> cloudAppStates;
        QList<QString> comments;
        int confidence;
        QDateTime createdDateTime;
        QString description;
        QList<QString> detectionIds;
        QDateTime eventDateTime;
        microsoft::graph::alertFeedback feedback;
        QList<microsoft::graph::fileSecurityState> fileStates;
        QList<microsoft::graph::alertHistoryState> historyStates;
        QList<microsoft::graph::hostSecurityState> hostStates;
        QList<QString> incidentIds;
        QList<microsoft::graph::investigationSecurityState> investigationSecurityStates;
        QDateTime lastEventDateTime;
        QDateTime lastModifiedDateTime;
        QList<microsoft::graph::malwareState> malwareStates;
        QList<microsoft::graph::messageSecurityState> messageSecurityStates;
        QList<microsoft::graph::networkConnection> networkConnections;
        QList<microsoft::graph::process> processes;
        QList<QString> recommendedActions;
        QList<microsoft::graph::registryKeyState> registryKeyStates;
        QList<microsoft::graph::securityResource> securityResources;
        microsoft::graph::alertSeverity severity;
        QList<QString> sourceMaterials;
        microsoft::graph::alertStatus status;
        QList<QString> tags;
        QString title;
        QList<microsoft::graph::alertTrigger> triggers;
        QList<microsoft::graph::uriClickSecurityState> uriClickSecurityStates;
        QList<microsoft::graph::userSecurityState> userStates;
        microsoft::graph::securityVendorInformation vendorInformation;
        QList<microsoft::graph::vulnerabilityState> vulnerabilityStates;
    };

    struct secureScore : graph::entity {
        int activeUserCount;
        QList<microsoft::graph::averageComparativeScore> averageComparativeScores;
        QString azureTenantId;
        QList<microsoft::graph::controlScore> controlScores;
        QDateTime createdDateTime;
        double currentScore;
        QList<QString> enabledServices;
        int licensedUserCount;
        double maxScore;
        microsoft::graph::securityVendorInformation vendorInformation;
    };

    struct secureScoreControlProfile : graph::entity {
        QString actionType;
        QString actionUrl;
        QString azureTenantId;
        QList<microsoft::graph::complianceInformation> complianceInformation;
        QString controlCategory;
        QList<microsoft::graph::secureScoreControlStateUpdate> controlStateUpdates;
        bool deprecated;
        QString implementationCost;
        QDateTime lastModifiedDateTime;
        double maxScore;
        int rank;
        QString remediation;
        QString remediationImpact;
        QString service;
        QList<QString> threats;
        QString tier;
        QString title;
        QString userImpact;
        microsoft::graph::securityVendorInformation vendorInformation;
    };

    struct security : graph::entity {
        QList<microsoft::graph::alert> alerts;
        QList<microsoft::graph::secureScoreControlProfile> secureScoreControlProfiles;
        QList<microsoft::graph::secureScore> secureScores;
    };

    struct participantJoiningResponse {
    };

    struct acceptJoinResponse : graph::participantJoiningResponse {
    };

    struct mediaConfig {
    };

    struct appHostedMediaConfig : graph::mediaConfig {
        QString blob;
    };

    struct audioConferencing {
        QString conferenceId;
        QString dialinUrl;
        QString tollFreeNumber;
        QString tollNumber;
    };

    struct callMediaState {
        microsoft::graph::mediaState audio;
    };

    struct callOptions {
    };

    struct callRoute {
        microsoft::graph::identitySet final;
        microsoft::graph::identitySet original;
        microsoft::graph::routingType routingType;
    };

    struct callTranscriptionInfo {
        QDateTime lastModifiedDateTime;
        microsoft::graph::callTranscriptionState state;
    };

    struct chatInfo {
        QString messageId;
        QString replyChainMessageId;
        QString threadId;
    };

    struct commsNotification {
        microsoft::graph::changeType changeType;
        QString resourceUrl;
    };

    struct commsNotifications {
        QList<microsoft::graph::commsNotification> value;
    };

    struct incomingContext {
        QString observedParticipantId;
        microsoft::graph::identitySet onBehalfOf;
        QString sourceParticipantId;
        microsoft::graph::identitySet transferor;
    };

    struct invitationParticipantInfo {
        microsoft::graph::identitySet identity;
        QString replacesCallId;
    };

    struct inviteNewBotResponse : graph::participantJoiningResponse {
        QString inviteUri;
    };

    struct lobbyBypassSettings {
        bool isDialInBypassEnabled;
        microsoft::graph::lobbyBypassScope scope;
    };

    struct mediaInfo {
        QString resourceId;
        QString uri;
    };

    struct prompt {
    };

    struct mediaPrompt : graph::prompt {
        microsoft::graph::mediaInfo mediaInfo;
    };

    struct mediaStream {
        microsoft::graph::mediaDirection direction;
        QString label;
        microsoft::graph::modality mediaType;
        bool serverMuted;
        QString sourceId;
    };

    struct meetingInfo {
    };

    struct meetingParticipantInfo {
        microsoft::graph::identitySet identity;
        microsoft::graph::onlineMeetingRole role;
        QString upn;
    };

    struct meetingParticipants {
        QList<microsoft::graph::meetingParticipantInfo> attendees;
        microsoft::graph::meetingParticipantInfo organizer;
    };

    struct organizerMeetingInfo : graph::meetingInfo {
        microsoft::graph::identitySet organizer;
    };

    struct outgoingCallOptions : graph::callOptions {
    };

    struct participantInfo {
        QString countryCode;
        microsoft::graph::endpointType endpointType;
        microsoft::graph::identitySet identity;
        QString languageId;
        QString region;
    };

    struct recordingInfo {
        microsoft::graph::identitySet initiator;
        microsoft::graph::recordingStatus recordingStatus;
    };

    struct rejectJoinResponse : graph::participantJoiningResponse {
        microsoft::graph::rejectReason reason;
    };

    struct serviceHostedMediaConfig : graph::mediaConfig {
        QList<microsoft::graph::mediaInfo> preFetchMedia;
    };

    struct teleconferenceDeviceMediaQuality {
        std::chrono::system_clock::duration averageInboundJitter;
        double averageInboundPacketLossRateInPercentage;
        std::chrono::system_clock::duration averageInboundRoundTripDelay;
        std::chrono::system_clock::duration averageOutboundJitter;
        double averageOutboundPacketLossRateInPercentage;
        std::chrono::system_clock::duration averageOutboundRoundTripDelay;
        int channelIndex;
        long long inboundPackets;
        QString localIPAddress;
        int localPort;
        std::chrono::system_clock::duration maximumInboundJitter;
        double maximumInboundPacketLossRateInPercentage;
        std::chrono::system_clock::duration maximumInboundRoundTripDelay;
        std::chrono::system_clock::duration maximumOutboundJitter;
        double maximumOutboundPacketLossRateInPercentage;
        std::chrono::system_clock::duration maximumOutboundRoundTripDelay;
        std::chrono::system_clock::duration mediaDuration;
        long long networkLinkSpeedInBytes;
        long long outboundPackets;
        QString remoteIPAddress;
        int remotePort;
    };

    struct teleconferenceDeviceAudioQuality : graph::teleconferenceDeviceMediaQuality {
    };

    struct teleconferenceDeviceQuality {
        QGuid callChainId;
        QString cloudServiceDeploymentEnvironment;
        QString cloudServiceDeploymentId;
        QString cloudServiceInstanceName;
        QString cloudServiceName;
        QString deviceDescription;
        QString deviceName;
        QGuid mediaLegId;
        QList<microsoft::graph::teleconferenceDeviceMediaQuality> mediaQualityList;
        QGuid participantId;
    };

    struct teleconferenceDeviceVideoQuality : graph::teleconferenceDeviceMediaQuality {
        double averageInboundBitRate;
        double averageInboundFrameRate;
        double averageOutboundBitRate;
        double averageOutboundFrameRate;
    };

    struct teleconferenceDeviceScreenSharingQuality : graph::teleconferenceDeviceVideoQuality {
    };

    struct tokenMeetingInfo : graph::meetingInfo {
        QString token;
    };

    struct toneInfo {
        long long sequenceId;
        microsoft::graph::tone tone;
    };

    struct commsOperation : graph::entity {
        QString clientContext;
        microsoft::graph::resultInfo resultInfo;
        microsoft::graph::operationStatus status;
    };

    struct participant : graph::entity {
        microsoft::graph::participantInfo info;
        bool isInLobby;
        bool isMuted;
        QList<microsoft::graph::mediaStream> mediaStreams;
        microsoft::graph::recordingInfo recordingInfo;
    };

    struct cancelMediaProcessingOperation : graph::commsOperation {
    };

    struct inviteParticipantsOperation : graph::commsOperation {
        QList<microsoft::graph::invitationParticipantInfo> participants;
    };

    struct muteParticipantOperation : graph::commsOperation {
    };

    struct playPromptOperation : graph::commsOperation {
    };

    struct recordOperation : graph::commsOperation {
        QString recordingAccessToken;
        QString recordingLocation;
    };

    struct subscribeToToneOperation : graph::commsOperation {
    };

    struct unmuteParticipantOperation : graph::commsOperation {
    };

    struct updateRecordingStatusOperation : graph::commsOperation {
    };

    struct authenticationMethod : graph::entity {
    };

    struct fido2AuthenticationMethod : graph::authenticationMethod {
        QString aaGuid;
        QList<QString> attestationCertificates;
        microsoft::graph::attestationLevel attestationLevel;
        QDateTime createdDateTime;
        QString displayName;
        QString model;
    };

    struct microsoftAuthenticatorAuthenticationMethod : graph::authenticationMethod {
        QDateTime createdDateTime;
        QString deviceTag;
        QString displayName;
        QString phoneAppVersion;
        std::unique_ptr<microsoft::graph::device> device;
    };

    struct windowsHelloForBusinessAuthenticationMethod : graph::authenticationMethod {
        QDateTime createdDateTime;
        QString displayName;
        microsoft::graph::authenticationMethodKeyStrength keyStrength;
        std::unique_ptr<microsoft::graph::device> device;
    };

    struct changeNotificationEncryptedContent {
        QString data;
        QString dataKey;
        QString dataSignature;
        QString encryptionCertificateId;
        QString encryptionCertificateThumbprint;
    };

    struct resourceData {
    };

    struct teamworkNotificationRecipient {
    };

    struct aadUserNotificationRecipient : graph::teamworkNotificationRecipient {
        QString userId;
    };

    struct channelIdentity {
        QString channelId;
        QString teamId;
    };

    struct chatMessageAttachment {
        QString content;
        QString contentType;
        QString contentUrl;
        QString id;
        QString name;
        QString thumbnailUrl;
    };

    struct chatMessageFromIdentitySet : graph::identitySet {
    };

    struct teamworkConversationIdentity : graph::identity {
        microsoft::graph::teamworkConversationIdentityType conversationIdentityType;
    };

    struct chatMessagePolicyViolationPolicyTip {
        QString complianceUrl;
        QString generalText;
        QList<QString> matchedConditionDescriptions;
    };

    struct chatMessageReactionIdentitySet : graph::identitySet {
    };

    struct operationError {
        QString code;
        QString message;
    };

    struct teamClassSettings {
        bool notifyGuardiansAboutAssignments;
    };

    struct teamFunSettings {
        bool allowCustomMemes;
        bool allowGiphy;
        bool allowStickersAndMemes;
        microsoft::graph::giphyRatingType giphyContentRating;
    };

    struct teamGuestSettings {
        bool allowCreateUpdateChannels;
        bool allowDeleteChannels;
    };

    struct teamMemberSettings {
        bool allowAddRemoveApps;
        bool allowCreatePrivateChannels;
        bool allowCreateUpdateChannels;
        bool allowCreateUpdateRemoveConnectors;
        bool allowCreateUpdateRemoveTabs;
        bool allowDeleteChannels;
    };

    struct teamMessagingSettings {
        bool allowChannelMentions;
        bool allowOwnerDeleteMessages;
        bool allowTeamMentions;
        bool allowUserDeleteMessages;
        bool allowUserEditMessages;
    };

    struct teamsTabConfiguration {
        QString contentUrl;
        QString entityId;
        QString removeUrl;
        QString websiteUrl;
    };

    struct teamworkActivityTopic {
        microsoft::graph::teamworkActivityTopicSource source;
        QString value;
        QString webUrl;
    };

    struct teamworkApplicationIdentity : graph::identity {
        microsoft::graph::teamworkApplicationIdentityType applicationIdentityType;
    };

    struct teamworkTagIdentity : graph::identity {
    };

    struct teamworkUserIdentity : graph::identity {
        microsoft::graph::teamworkUserIdentityType userIdentityType;
    };

    struct conversationMember : graph::entity {
        QString displayName;
        QList<QString> roles;
        QDateTime visibleHistoryStartDateTime;
    };

    struct teamworkHostedContent : graph::entity {
        QByteArray contentBytes;
        QString contentType;
    };

    struct chatMessageHostedContent : graph::teamworkHostedContent {
    };

    struct teamsAsyncOperation : graph::entity {
        int attemptsCount;
        QDateTime createdDateTime;
        microsoft::graph::operationError error;
        QDateTime lastActionDateTime;
        microsoft::graph::teamsAsyncOperationType operationType;
        microsoft::graph::teamsAsyncOperationStatus status;
        QString targetResourceId;
        QString targetResourceLocation;
    };

    struct teamsTemplate : graph::entity {
    };

    struct teamworkBot : graph::entity {
    };

    struct scheduleEntity {
        QDateTime endDateTime;
        QDateTime startDateTime;
        microsoft::graph::scheduleEntityTheme theme;
    };

    struct shiftActivity {
        QString code;
        QString displayName;
        QDateTime endDateTime;
        bool isPaid;
        QDateTime startDateTime;
        microsoft::graph::scheduleEntityTheme theme;
    };

    struct timeRange {
        QTime endTime;
        QTime startTime;
    };

    struct timeOffItem : graph::scheduleEntity {
        QString timeOffReasonId;
    };

    struct workforceIntegrationEncryption {
        microsoft::graph::workforceIntegrationEncryptionProtocol protocol;
        QString secret;
    };

    struct scheduleChangeRequest : graph::changeTrackedEntity {
        microsoft::graph::scheduleChangeRequestActor assignedTo;
        QDateTime managerActionDateTime;
        QString managerActionMessage;
        QString managerUserId;
        QDateTime senderDateTime;
        QString senderMessage;
        QString senderUserId;
        microsoft::graph::scheduleChangeState state;
    };

    struct offerShiftRequest : graph::scheduleChangeRequest {
        QDateTime recipientActionDateTime;
        QString recipientActionMessage;
        QString recipientUserId;
        QString senderShiftId;
    };

    struct openShiftChangeRequest : graph::scheduleChangeRequest {
        QString openShiftId;
    };

    struct schedulingGroup : graph::changeTrackedEntity {
        QString displayName;
        bool isActive;
        QList<QString> userIds;
    };

    struct swapShiftsChangeRequest : graph::offerShiftRequest {
        QString recipientShiftId;
    };

    struct timeOffReason : graph::changeTrackedEntity {
        QString displayName;
        microsoft::graph::timeOffReasonIconType iconType;
        bool isActive;
    };

    struct timeOffRequest : graph::scheduleChangeRequest {
        QDateTime endDateTime;
        QDateTime startDateTime;
        QString timeOffReasonId;
    };

    struct timeOff : graph::changeTrackedEntity {
        microsoft::graph::timeOffItem draftTimeOff;
        microsoft::graph::timeOffItem sharedTimeOff;
        QString userId;
    };

    struct threatAssessmentResult : graph::entity {
        QDateTime createdDateTime;
        QString message;
        microsoft::graph::threatAssessmentResultType resultType;
    };

    struct linkedResource : graph::entity {
        QString applicationName;
        QString displayName;
        QString externalId;
        QString webUrl;
    };

} // namespace microsoft::graph

namespace microsoft::graph::termStore {
    enum class relationType {
        pin = 0,
        reuse = 1,
        unknownFutureValue = 2,
    };

    enum class termGroupScope {
        global = 0,
        system = 1,
        siteCollection = 2,
        unknownFutureValue = 3,
    };

    struct localizedDescription {
        QString description;
        QString languageTag;
    };

    struct localizedLabel {
        bool isDefault;
        QString languageTag;
        QString name;
    };

    struct localizedName {
        QString languageTag;
        QString name;
    };

} // namespace microsoft::graph::termStore

namespace microsoft::graph::callRecords {
    enum class callType {
        unknown = 0,
        groupCall = 1,
        peerToPeer = 2,
        unknownFutureValue = 3,
    };

    enum class clientPlatform {
        unknown = 0,
        windows = 1,
        macOS = 2,
        iOS = 3,
        android = 4,
        web = 5,
        ipPhone = 6,
        roomSystem = 7,
        surfaceHub = 8,
        holoLens = 9,
        unknownFutureValue = 10,
    };

    enum class failureStage {
        unknown = 0,
        callSetup = 1,
        midcall = 2,
        unknownFutureValue = 3,
    };

    enum class mediaStreamDirection {
        callerToCallee = 0,
        calleeToCaller = 1,
    };

    enum class modality {
        audio = 0,
        video = 1,
        videoBasedScreenSharing = 2,
        data = 3,
        screenSharing = 4,
        unknownFutureValue = 5,
    };

    enum class networkConnectionType {
        unknown = 0,
        wired = 1,
        wifi = 2,
        mobile = 3,
        tunnel = 4,
        unknownFutureValue = 5,
    };

    enum class productFamily {
        unknown = 0,
        teams = 1,
        skypeForBusiness = 2,
        lync = 3,
        unknownFutureValue = 4,
    };

    enum class pstnCallDurationSource {
        microsoft = 0,
        _operator = 1,
    };

    enum class serviceRole {
        unknown = 0,
        customBot = 1,
        skypeForBusinessMicrosoftTeamsGateway = 2,
        skypeForBusinessAudioVideoMcu = 3,
        skypeForBusinessApplicationSharingMcu = 4,
        skypeForBusinessCallQueues = 5,
        skypeForBusinessAutoAttendant = 6,
        mediationServer = 7,
        mediationServerCloudConnectorEdition = 8,
        exchangeUnifiedMessagingService = 9,
        mediaController = 10,
        conferencingAnnouncementService = 11,
        conferencingAttendant = 12,
        audioTeleconferencerController = 13,
        skypeForBusinessUnifiedCommunicationApplicationPlatform = 14,
        responseGroupServiceAnnouncementService = 15,
        gateway = 16,
        skypeTranslator = 17,
        skypeForBusinessAttendant = 18,
        responseGroupService = 19,
        voicemail = 20,
        unknownFutureValue = 21,
    };

    enum class userFeedbackRating {
        notRated = 0,
        bad = 1,
        poor = 2,
        fair = 3,
        good = 4,
        excellent = 5,
        unknownFutureValue = 6,
    };

    enum class wifiBand {
        unknown = 0,
        frequency24GHz = 1,
        frequency50GHz = 2,
        frequency60GHz = 3,
        unknownFutureValue = 4,
    };

    enum class wifiRadioType {
        unknown = 0,
        wifi80211a = 1,
        wifi80211b = 2,
        wifi80211g = 3,
        wifi80211n = 4,
        wifi80211ac = 5,
        wifi80211ax = 6,
        unknownFutureValue = 7,
    };

    struct userAgent {
        QString applicationVersion;
        QString headerValue;
    };

    struct clientUserAgent : microsoft::graph::callRecords::userAgent {
        microsoft::graph::callRecords::clientPlatform platform;
        microsoft::graph::callRecords::productFamily productFamily;
    };

    struct deviceInfo {
        QString captureDeviceDriver;
        QString captureDeviceName;
        float captureNotFunctioningEventRatio;
        float cpuInsufficentEventRatio;
        float deviceClippingEventRatio;
        float deviceGlitchEventRatio;
        int howlingEventCount;
        float initialSignalLevelRootMeanSquare;
        float lowSpeechLevelEventRatio;
        float lowSpeechToNoiseEventRatio;
        float micGlitchRate;
        int receivedNoiseLevel;
        int receivedSignalLevel;
        QString renderDeviceDriver;
        QString renderDeviceName;
        float renderMuteEventRatio;
        float renderNotFunctioningEventRatio;
        float renderZeroVolumeEventRatio;
        int sentNoiseLevel;
        int sentSignalLevel;
        float speakerGlitchRate;
    };

    struct directRoutingLogRow {
        QString calleeNumber;
        int callEndSubReason;
        QString callerNumber;
        QString callType;
        QString correlationId;
        int duration;
        QDateTime endDateTime;
        QDateTime failureDateTime;
        int finalSipCode;
        QString finalSipCodePhrase;
        QString id;
        QDateTime inviteDateTime;
        bool mediaBypassEnabled;
        QString mediaPathLocation;
        QString signalingLocation;
        QDateTime startDateTime;
        bool successfulCall;
        QString trunkFullyQualifiedDomainName;
        QString userDisplayName;
        QString userId;
        QString userPrincipalName;
    };

    struct endpoint {
        microsoft::graph::callRecords::userAgent userAgent;
    };

    struct failureInfo {
        QString reason;
        microsoft::graph::callRecords::failureStage stage;
    };

    struct feedbackTokenSet {
    };

    struct networkInfo {
        float bandwidthLowEventRatio;
        QString basicServiceSetIdentifier;
        microsoft::graph::callRecords::networkConnectionType connectionType;
        float delayEventRatio;
        QString dnsSuffix;
        QString ipAddress;
        long long linkSpeed;
        QString macAddress;
        int port;
        float receivedQualityEventRatio;
        QString reflexiveIPAddress;
        QString relayIPAddress;
        int relayPort;
        float sentQualityEventRatio;
        QString subnet;
        microsoft::graph::callRecords::wifiBand wifiBand;
        int wifiBatteryCharge;
        int wifiChannel;
        QString wifiMicrosoftDriver;
        QString wifiMicrosoftDriverVersion;
        microsoft::graph::callRecords::wifiRadioType wifiRadioType;
        int wifiSignalStrength;
        QString wifiVendorDriver;
        QString wifiVendorDriverVersion;
    };

    struct mediaStream {
        float averageAudioDegradation;
        std::chrono::system_clock::duration averageAudioNetworkJitter;
        long long averageBandwidthEstimate;
        std::chrono::system_clock::duration averageJitter;
        float averagePacketLossRate;
        float averageRatioOfConcealedSamples;
        float averageReceivedFrameRate;
        std::chrono::system_clock::duration averageRoundTripTime;
        float averageVideoFrameLossPercentage;
        float averageVideoFrameRate;
        float averageVideoPacketLossRate;
        QDateTime endDateTime;
        float lowFrameRateRatio;
        float lowVideoProcessingCapabilityRatio;
        std::chrono::system_clock::duration maxAudioNetworkJitter;
        std::chrono::system_clock::duration maxJitter;
        float maxPacketLossRate;
        float maxRatioOfConcealedSamples;
        std::chrono::system_clock::duration maxRoundTripTime;
        long long packetUtilization;
        float postForwardErrorCorrectionPacketLossRate;
        QDateTime startDateTime;
        microsoft::graph::callRecords::mediaStreamDirection streamDirection;
        QString streamId;
        bool wasMediaBypassed;
    };

    struct userFeedback {
        microsoft::graph::callRecords::userFeedbackRating rating;
        QString text;
        microsoft::graph::callRecords::feedbackTokenSet tokens;
    };

    struct pstnCallLogRow {
        microsoft::graph::callRecords::pstnCallDurationSource callDurationSource;
        QString calleeNumber;
        QString callerNumber;
        QString callId;
        QString callType;
        double charge;
        QString conferenceId;
        double connectionCharge;
        QString currency;
        QString destinationContext;
        QString destinationName;
        int duration;
        QDateTime endDateTime;
        QString id;
        QString inventoryType;
        QString licenseCapability;
        QString _operator;
        QDateTime startDateTime;
        QString tenantCountryCode;
        QString usageCountryCode;
        QString userDisplayName;
        QString userId;
        QString userPrincipalName;
    };

    struct serviceEndpoint : microsoft::graph::callRecords::endpoint {
    };

    struct serviceUserAgent : microsoft::graph::callRecords::userAgent {
        microsoft::graph::callRecords::serviceRole role;
    };

} // namespace microsoft::graph::callRecords

namespace microsoft::graph::externalConnectors {
    enum class accessType {
        grant = 1,
        deny = 2,
        unknownFutureValue = 3,
    };

    enum class aclType {
        user = 1,
        group = 2,
        everyone = 3,
        everyoneExceptGuests = 4,
        externalGroup = 5,
        unknownFutureValue = 6,
    };

    enum class connectionOperationStatus {
        unspecified = 0,
        inprogress = 1,
        completed = 2,
        failed = 3,
        unknownFutureValue = 4,
    };

    enum class connectionState {
        draft = 1,
        ready = 2,
        obsolete = 3,
        limitExceeded = 4,
        unknownFutureValue = 5,
    };

    enum class externalItemContentType {
        text = 1,
        html = 2,
        unknownFutureValue = 3,
    };

    enum class identityType {
        user = 1,
        group = 2,
        externalGroup = 3,
        unknownFutureValue = 4,
    };

    enum class label {
        title = 0,
        url = 1,
        createdBy = 2,
        lastModifiedBy = 3,
        authors = 4,
        createdDateTime = 5,
        lastModifiedDateTime = 6,
        fileName = 7,
        fileExtension = 8,
        unknownFutureValue = 9,
    };

    enum class propertyType {
        string = 0,
        int64 = 1,
        _double = 2,
        dateTime = 3,
        boolean = 4,
        stringCollection = 5,
        int64Collection = 6,
        doubleCollection = 7,
        dateTimeCollection = 8,
        unknownFutureValue = 9,
    };

    struct acl {
        microsoft::graph::externalConnectors::accessType accessType;
        microsoft::graph::externalConnectors::aclType type;
        QString value;
    };

    struct configuration {
        QList<QString> authorizedAppIds;
    };

    struct externalItemContent {
        microsoft::graph::externalConnectors::externalItemContentType type;
        QString value;
    };

    struct properties {
    };

    struct property {
        QList<QString> aliases;
        bool isQueryable;
        bool isRefinable;
        bool isRetrievable;
        bool isSearchable;
        QList<microsoft::graph::externalConnectors::label> labels;
        QString name;
        microsoft::graph::externalConnectors::propertyType type;
    };

    struct externalItem : graph::entity {
        QList<microsoft::graph::externalConnectors::acl> acl;
        microsoft::graph::externalConnectors::externalItemContent content;
        microsoft::graph::externalConnectors::properties properties;
    };

    struct schema : graph::entity {
        QString baseType;
        QList<microsoft::graph::externalConnectors::property> properties;
    };

    struct identity : graph::entity {
        microsoft::graph::externalConnectors::identityType type;
    };

} // namespace microsoft::graph::externalConnectors

namespace microsoft::graph {
    struct auditActivityInitiator {
        microsoft::graph::appIdentity app;
        microsoft::graph::userIdentity user;
    };

    struct directoryAudit : graph::entity {
        QDateTime activityDateTime;
        QString activityDisplayName;
        QList<microsoft::graph::keyValue> additionalDetails;
        QString category;
        QString correlationId;
        microsoft::graph::auditActivityInitiator initiatedBy;
        QString loggedByService;
        QString operationType;
        microsoft::graph::operationResult result;
        QString resultReason;
        QList<microsoft::graph::targetResource> targetResources;
    };

    struct invitedUserMessageInfo {
        QList<microsoft::graph::recipient> ccRecipients;
        QString customizedMessageBody;
        QString messageLanguage;
    };

    struct licenseDetails : graph::entity {
        QList<microsoft::graph::servicePlanInfo> servicePlans;
        QGuid skuId;
        QString skuPartNumber;
    };

    struct mailboxSettings {
        QString archiveFolder;
        microsoft::graph::automaticRepliesSetting automaticRepliesSetting;
        QString dateFormat;
        microsoft::graph::delegateMeetingMessageDeliveryOptions delegateMeetingMessageDeliveryOptions;
        microsoft::graph::localeInfo language;
        QString timeFormat;
        QString timeZone;
        microsoft::graph::workingHours workingHours;
    };

    struct contact : graph::outlookItem {
        QString assistantName;
        QDateTime birthday;
        microsoft::graph::physicalAddress businessAddress;
        QString businessHomePage;
        QList<QString> businessPhones;
        QList<QString> children;
        QString companyName;
        QString department;
        QString displayName;
        QList<microsoft::graph::emailAddress> emailAddresses;
        QString fileAs;
        QString generation;
        QString givenName;
        microsoft::graph::physicalAddress homeAddress;
        QList<QString> homePhones;
        QList<QString> imAddresses;
        QString initials;
        QString jobTitle;
        QString manager;
        QString middleName;
        QString mobilePhone;
        QString nickName;
        QString officeLocation;
        microsoft::graph::physicalAddress otherAddress;
        QString parentFolderId;
        QString personalNotes;
        QString profession;
        QString spouseName;
        QString surname;
        QString title;
        QString yomiCompanyName;
        QString yomiGivenName;
        QString yomiSurname;
        QList<microsoft::graph::extension> extensions;
        QList<microsoft::graph::multiValueLegacyExtendedProperty> multiValueExtendedProperties;
        std::unique_ptr<microsoft::graph::profilePhoto> photo;
        QList<microsoft::graph::singleValueLegacyExtendedProperty> singleValueExtendedProperties;
    };

    struct inferenceClassification : graph::entity {
        QList<microsoft::graph::inferenceClassificationOverride> overrides;
    };

    struct message : graph::outlookItem {
        QList<microsoft::graph::recipient> bccRecipients;
        microsoft::graph::itemBody body;
        QString bodyPreview;
        QList<microsoft::graph::recipient> ccRecipients;
        QString conversationId;
        QByteArray conversationIndex;
        microsoft::graph::followupFlag flag;
        microsoft::graph::recipient from;
        bool hasAttachments;
        microsoft::graph::importance importance;
        microsoft::graph::inferenceClassificationType inferenceClassification;
        QList<microsoft::graph::internetMessageHeader> internetMessageHeaders;
        QString internetMessageId;
        bool isDeliveryReceiptRequested;
        bool isDraft;
        bool isRead;
        bool isReadReceiptRequested;
        QString parentFolderId;
        QDateTime receivedDateTime;
        QList<microsoft::graph::recipient> replyTo;
        microsoft::graph::recipient sender;
        QDateTime sentDateTime;
        QString subject;
        QList<microsoft::graph::recipient> toRecipients;
        microsoft::graph::itemBody uniqueBody;
        QString webLink;
        QList<microsoft::graph::attachment> attachments;
        QList<microsoft::graph::extension> extensions;
        QList<microsoft::graph::multiValueLegacyExtendedProperty> multiValueExtendedProperties;
        QList<microsoft::graph::singleValueLegacyExtendedProperty> singleValueExtendedProperties;
    };

    struct outlookUser : graph::entity {
        QList<microsoft::graph::outlookCategory> masterCategories;
    };

    struct managedAppRegistration : graph::entity {
        microsoft::graph::mobileAppIdentifier appIdentifier;
        QString applicationVersion;
        QDateTime createdDateTime;
        QString deviceName;
        QString deviceTag;
        QString deviceType;
        QList<microsoft::graph::managedAppFlaggedReason> flaggedReasons;
        QDateTime lastSyncDateTime;
        QString managementSdkVersion;
        QString platformVersion;
        QString userId;
        QString version;
        QList<microsoft::graph::managedAppPolicy> appliedPolicies;
        QList<microsoft::graph::managedAppPolicy> intendedPolicies;
        QList<microsoft::graph::managedAppOperation> operations;
    };

    struct officeGraphInsights : graph::entity {
        QList<microsoft::graph::sharedInsight> shared;
        QList<microsoft::graph::trending> trending;
        QList<microsoft::graph::usedInsight> used;
    };

    struct onlineMeeting : graph::entity {
        bool allowAttendeeToEnableCamera;
        bool allowAttendeeToEnableMic;
        microsoft::graph::onlineMeetingPresenters allowedPresenters;
        microsoft::graph::meetingChatMode allowMeetingChat;
        bool allowTeamworkReactions;
        microsoft::graph::audioConferencing audioConferencing;
        microsoft::graph::chatInfo chatInfo;
        QDateTime creationDateTime;
        QDateTime endDateTime;
        QString externalId;
        bool isEntryExitAnnounced;
        microsoft::graph::itemBody joinInformation;
        QString joinWebUrl;
        microsoft::graph::lobbyBypassSettings lobbyBypassSettings;
        microsoft::graph::meetingParticipants participants;
        QDateTime startDateTime;
        QString subject;
        QString videoTeleconferenceId;
    };

    struct authentication : graph::entity {
        QList<microsoft::graph::fido2AuthenticationMethod> fido2Methods;
        QList<microsoft::graph::authenticationMethod> methods;
        QList<microsoft::graph::microsoftAuthenticatorAuthenticationMethod> microsoftAuthenticatorMethods;
        QList<microsoft::graph::windowsHelloForBusinessAuthenticationMethod> windowsHelloForBusinessMethods;
    };

    struct servicePrincipal : graph::directoryObject {
        bool accountEnabled;
        QList<microsoft::graph::addIn> addIns;
        QList<QString> alternativeNames;
        QString appDescription;
        QString appDisplayName;
        QString appId;
        QString applicationTemplateId;
        QGuid appOwnerOrganizationId;
        bool appRoleAssignmentRequired;
        QList<microsoft::graph::appRole> appRoles;
        QString description;
        QString disabledByMicrosoftStatus;
        QString displayName;
        QString homepage;
        microsoft::graph::informationalUrl info;
        QList<microsoft::graph::keyCredential> keyCredentials;
        QString loginUrl;
        QString logoutUrl;
        QString notes;
        QList<QString> notificationEmailAddresses;
        QList<microsoft::graph::permissionScope> oauth2PermissionScopes;
        QList<microsoft::graph::passwordCredential> passwordCredentials;
        QString preferredSingleSignOnMode;
        QString preferredTokenSigningKeyThumbprint;
        QList<QString> replyUrls;
        microsoft::graph::samlSingleSignOnSettings samlSingleSignOnSettings;
        QList<QString> servicePrincipalNames;
        QString servicePrincipalType;
        QString signInAudience;
        QList<QString> tags;
        QGuid tokenEncryptionKeyId;
        QList<microsoft::graph::appRoleAssignment> appRoleAssignedTo;
        QList<microsoft::graph::appRoleAssignment> appRoleAssignments;
        QList<microsoft::graph::claimsMappingPolicy> claimsMappingPolicies;
        QList<microsoft::graph::directoryObject> createdObjects;
        QList<microsoft::graph::delegatedPermissionClassification> delegatedPermissionClassifications;
        QList<microsoft::graph::endpoint> endpoints;
        QList<microsoft::graph::homeRealmDiscoveryPolicy> homeRealmDiscoveryPolicies;
        QList<microsoft::graph::directoryObject> memberOf;
        QList<microsoft::graph::oAuth2PermissionGrant> oauth2PermissionGrants;
        QList<microsoft::graph::directoryObject> ownedObjects;
        QList<microsoft::graph::directoryObject> owners;
        QList<microsoft::graph::tokenIssuancePolicy> tokenIssuancePolicies;
        QList<microsoft::graph::tokenLifetimePolicy> tokenLifetimePolicies;
        QList<microsoft::graph::directoryObject> transitiveMemberOf;
    };

    struct apiApplication {
        bool acceptMappedClaims;
        QList<QGuid> knownClientApplications;
        QList<microsoft::graph::permissionScope> oauth2PermissionScopes;
        QList<microsoft::graph::preAuthorizedApplication> preAuthorizedApplications;
        int requestedAccessTokenVersion;
    };

    struct optionalClaims {
        QList<microsoft::graph::optionalClaim> accessToken;
        QList<microsoft::graph::optionalClaim> idToken;
        QList<microsoft::graph::optionalClaim> saml2Token;
    };

    struct requiredResourceAccess {
        QList<microsoft::graph::resourceAccess> resourceAccess;
        QString resourceAppId;
    };

    struct webApplication {
        QString homePageUrl;
        microsoft::graph::implicitGrantSettings implicitGrantSettings;
        QString logoutUrl;
        QList<QString> redirectUris;
    };

    struct microsoftAuthenticatorAuthenticationMethodConfiguration : graph::authenticationMethodConfiguration {
        QList<microsoft::graph::microsoftAuthenticatorAuthenticationMethodTarget> includeTargets;
    };

    struct authenticationFlowsPolicy : graph::entity {
        QString description;
        QString displayName;
        microsoft::graph::selfServiceSignUpAuthenticationFlowConfiguration selfServiceSignUp;
    };

    struct authorizationPolicy : graph::policyBase {
        bool allowedToSignUpEmailBasedSubscriptions;
        bool allowedToUseSSPR;
        bool allowEmailVerifiedUsersToJoinOrganization;
        microsoft::graph::allowInvitesFrom allowInvitesFrom;
        bool blockMsolPowerShell;
        microsoft::graph::defaultUserRolePermissions defaultUserRolePermissions;
        QGuid guestUserRoleId;
    };

    struct permissionGrantPolicy : graph::policyBase {
        QList<microsoft::graph::permissionGrantConditionSet> excludes;
        QList<microsoft::graph::permissionGrantConditionSet> includes;
    };

    struct adminConsentRequestPolicy : graph::entity {
        bool isEnabled;
        bool notifyReviewers;
        bool remindersEnabled;
        int requestDurationInDays;
        QList<microsoft::graph::accessReviewReviewerScope> reviewers;
        int version;
    };

    struct bitlocker : graph::entity {
        QList<microsoft::graph::bitlockerRecoveryKey> recoveryKeys;
    };

    struct threatAssessmentRequest : graph::entity {
        microsoft::graph::threatCategory category;
        microsoft::graph::threatAssessmentContentType contentType;
        microsoft::graph::identitySet createdBy;
        QDateTime createdDateTime;
        microsoft::graph::threatExpectedAssessment expectedAssessment;
        microsoft::graph::threatAssessmentRequestSource requestSource;
        microsoft::graph::threatAssessmentStatus status;
        QList<microsoft::graph::threatAssessmentResult> results;
    };

    struct groupSetting : graph::entity {
        QString displayName;
        QString templateId;
        QList<microsoft::graph::settingValue> values;
    };

    struct conversationThread : graph::entity {
        QList<microsoft::graph::recipient> ccRecipients;
        bool hasAttachments;
        bool isLocked;
        QDateTime lastDeliveredDateTime;
        QString preview;
        QString topic;
        QList<microsoft::graph::recipient> toRecipients;
        QList<QString> uniqueSenders;
        QList<microsoft::graph::post> posts;
    };

    struct publicError {
        QString code;
        QList<microsoft::graph::publicErrorDetail> details;
        microsoft::graph::publicInnerError innerError;
        QString message;
        QString target;
    };

    struct columnDefinition : graph::entity {
        microsoft::graph::booleanColumn boolean;
        microsoft::graph::calculatedColumn calculated;
        microsoft::graph::choiceColumn choice;
        QString columnGroup;
        microsoft::graph::currencyColumn currency;
        microsoft::graph::dateTimeColumn dateTime;
        microsoft::graph::defaultColumnValue defaultValue;
        QString description;
        QString displayName;
        bool enforceUniqueValues;
        microsoft::graph::geolocationColumn geolocation;
        bool hidden;
        bool indexed;
        microsoft::graph::lookupColumn lookup;
        QString name;
        microsoft::graph::numberColumn number;
        microsoft::graph::personOrGroupColumn personOrGroup;
        bool readOnly;
        bool required;
        microsoft::graph::textColumn text;
    };

    struct contentType : graph::entity {
        QString description;
        QString group;
        bool hidden;
        microsoft::graph::itemReference inheritedFrom;
        QString name;
        microsoft::graph::contentTypeOrder order;
        QString parentId;
        bool readOnly;
        bool sealed;
        QList<microsoft::graph::columnLink> columnLinks;
    };

    struct permission : graph::entity {
        QDateTime expirationDateTime;
        microsoft::graph::identitySet grantedTo;
        QList<microsoft::graph::identitySet> grantedToIdentities;
        bool hasPassword;
        microsoft::graph::itemReference inheritedFrom;
        microsoft::graph::sharingInvitation invitation;
        microsoft::graph::sharingLink link;
        QList<QString> roles;
        QString shareId;
    };

    struct clientCertificateAuthentication : graph::apiAuthenticationConfigurationBase {
        QList<microsoft::graph::pkcs12CertificateInformation> certificateList;
    };

    struct userFlowApiConnectorConfiguration {
        std::unique_ptr<microsoft::graph::identityApiConnector> postAttributeCollection;
        std::unique_ptr<microsoft::graph::identityApiConnector> postFederationSignup;
    };

    struct userFlowLanguageConfiguration : graph::entity {
        QString displayName;
        bool isEnabled;
        QList<microsoft::graph::userFlowLanguagePage> defaultPages;
        QList<microsoft::graph::userFlowLanguagePage> overridesPages;
    };

    struct identityUserFlowAttributeAssignment : graph::entity {
        QString displayName;
        bool isOptional;
        bool requiresVerification;
        QList<microsoft::graph::userAttributeValuesItem> userAttributeValues;
        microsoft::graph::identityUserFlowAttributeInputType userInputType;
        std::unique_ptr<microsoft::graph::identityUserFlowAttribute> userAttribute;
    };

    struct instanceResourceAccess {
        QList<microsoft::graph::resourcePermission> permissions;
        QString resourceAppId;
    };

    struct domain : graph::entity {
        QString authenticationType;
        QString availabilityStatus;
        bool isAdminManaged;
        bool isDefault;
        bool isInitial;
        bool isRoot;
        bool isVerified;
        QString manufacturer;
        QString model;
        int passwordNotificationWindowInDays;
        int passwordValidityPeriodInDays;
        microsoft::graph::domainState state;
        QList<QString> supportedServices;
        QList<microsoft::graph::directoryObject> domainNameReferences;
        QList<microsoft::graph::domainDnsRecord> serviceConfigurationRecords;
        QList<microsoft::graph::domainDnsRecord> verificationDnsRecords;
    };

    struct organizationalBranding : graph::organizationalBrandingProperties {
        QList<microsoft::graph::organizationalBrandingLocalization> localizations;
    };

    struct unifiedRoleAssignment : graph::entity {
        QString appScopeId;
        QString condition;
        QString directoryScopeId;
        QString principalId;
        QString roleDefinitionId;
        std::unique_ptr<microsoft::graph::appScope> appScope;
        std::unique_ptr<microsoft::graph::directoryObject> directoryScope;
        std::unique_ptr<microsoft::graph::directoryObject> principal;
        std::unique_ptr<microsoft::graph::unifiedRoleDefinition> roleDefinition;
    };

    struct educationFeedback {
        microsoft::graph::identitySet feedbackBy;
        QDateTime feedbackDateTime;
        microsoft::graph::educationItemBody text;
    };

    struct educationSubmission : graph::entity {
        microsoft::graph::educationSubmissionRecipient recipient;
        QString resourcesFolderUrl;
        microsoft::graph::identitySet returnedBy;
        QDateTime returnedDateTime;
        microsoft::graph::educationSubmissionStatus status;
        microsoft::graph::identitySet submittedBy;
        QDateTime submittedDateTime;
        microsoft::graph::identitySet unsubmittedBy;
        QDateTime unsubmittedDateTime;
        QList<microsoft::graph::educationOutcome> outcomes;
        QList<microsoft::graph::educationSubmissionResource> resources;
        QList<microsoft::graph::educationSubmissionResource> submittedResources;
    };

    struct educationFeedbackOutcome : graph::educationOutcome {
        microsoft::graph::educationFeedback feedback;
        microsoft::graph::educationFeedback publishedFeedback;
    };

    struct workbookFilterCriteria {
        QString color;
        QString criterion1;
        QString criterion2;
        QString dynamicCriteria;
        QString filterOn;
        microsoft::graph::workbookIcon icon;
        QString _operator;
        microsoft::graph::Json values;
    };

    struct quota {
        long long deleted;
        long long remaining;
        QString state;
        microsoft::graph::storagePlanInformation storagePlanInformation;
        long long total;
        long long used;
    };

    struct file {
        microsoft::graph::hashes hashes;
        QString mimeType;
        bool processingMetadata;
    };

    struct folder {
        int childCount;
        microsoft::graph::folderView view;
    };

    struct pendingOperations {
        microsoft::graph::pendingContentUpdate pendingContentUpdate;
    };

    struct remoteItem {
        microsoft::graph::identitySet createdBy;
        QDateTime createdDateTime;
        microsoft::graph::file file;
        microsoft::graph::fileSystemInfo fileSystemInfo;
        microsoft::graph::folder folder;
        QString id;
        microsoft::graph::image image;
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
        QString name;
        microsoft::graph::package package;
        microsoft::graph::itemReference parentReference;
        microsoft::graph::shared shared;
        microsoft::graph::sharepointIds sharepointIds;
        long long size;
        microsoft::graph::specialFolder specialFolder;
        microsoft::graph::video video;
        QString webDavUrl;
        QString webUrl;
    };

    struct thumbnailSet : graph::entity {
        microsoft::graph::thumbnail large;
        microsoft::graph::thumbnail medium;
        microsoft::graph::thumbnail small;
        microsoft::graph::thumbnail source;
    };

    struct workbookComment : graph::entity {
        QString content;
        QString contentType;
        QList<microsoft::graph::workbookCommentReply> replies;
    };

    struct workbookChartDataLabels : graph::entity {
        QString position;
        QString separator;
        bool showBubbleSize;
        bool showCategoryName;
        bool showLegendKey;
        bool showPercentage;
        bool showSeriesName;
        bool showValue;
        std::unique_ptr<microsoft::graph::workbookChartDataLabelFormat> format;
    };

    struct workbookChartAreaFormat : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartFill> fill;
        std::unique_ptr<microsoft::graph::workbookChartFont> font;
    };

    struct workbookChartLegend : graph::entity {
        bool overlay;
        QString position;
        bool visible;
        std::unique_ptr<microsoft::graph::workbookChartLegendFormat> format;
    };

    struct workbookChartTitle : graph::entity {
        bool overlay;
        QString text;
        bool visible;
        std::unique_ptr<microsoft::graph::workbookChartTitleFormat> format;
    };

    struct workbookChartAxisFormat : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartFont> font;
        std::unique_ptr<microsoft::graph::workbookChartLineFormat> line;
    };

    struct workbookChartGridlines : graph::entity {
        bool visible;
        std::unique_ptr<microsoft::graph::workbookChartGridlinesFormat> format;
    };

    struct workbookChartAxisTitle : graph::entity {
        QString text;
        bool visible;
        std::unique_ptr<microsoft::graph::workbookChartAxisTitleFormat> format;
    };

    struct workbookChartPoint : graph::entity {
        microsoft::graph::Json value;
        std::unique_ptr<microsoft::graph::workbookChartPointFormat> format;
    };

    struct workbookFilter : graph::entity {
        microsoft::graph::workbookFilterCriteria criteria;
    };

    struct workbookRangeFormat : graph::entity {
        double columnWidth;
        QString horizontalAlignment;
        double rowHeight;
        QString verticalAlignment;
        bool wrapText;
        QList<microsoft::graph::workbookRangeBorder> borders;
        std::unique_ptr<microsoft::graph::workbookRangeFill> fill;
        std::unique_ptr<microsoft::graph::workbookRangeFont> font;
        std::unique_ptr<microsoft::graph::workbookFormatProtection> protection;
    };

    struct workbookTableColumn : graph::entity {
        int index;
        QString name;
        microsoft::graph::Json values;
        std::unique_ptr<microsoft::graph::workbookFilter> filter;
    };

    struct attendeeAvailability {
        microsoft::graph::attendeeBase attendee;
        microsoft::graph::freeBusyStatus availability;
    };

    struct location {
        microsoft::graph::physicalAddress address;
        microsoft::graph::outlookGeoCoordinates coordinates;
        QString displayName;
        QString locationEmailAddress;
        microsoft::graph::locationType locationType;
        QString locationUri;
        QString uniqueId;
        microsoft::graph::locationUniqueIdType uniqueIdType;
    };

    struct locationConstraintItem : graph::location {
        bool resolveAvailability;
    };

    struct meetingTimeSuggestion {
        QList<microsoft::graph::attendeeAvailability> attendeeAvailability;
        double confidence;
        QList<microsoft::graph::location> locations;
        microsoft::graph::timeSlot meetingTimeSlot;
        int order;
        microsoft::graph::freeBusyStatus organizerAvailability;
        QString suggestionReason;
    };

    struct meetingTimeSuggestionsResult {
        QString emptySuggestionsReason;
        QList<microsoft::graph::meetingTimeSuggestion> meetingTimeSuggestions;
    };

    struct attendee : graph::attendeeBase {
        microsoft::graph::timeSlot proposedNewTime;
        microsoft::graph::responseStatus status;
    };

    struct automaticRepliesMailTips {
        QString message;
        microsoft::graph::localeInfo messageLanguage;
        microsoft::graph::dateTimeTimeZone scheduledEndTime;
        microsoft::graph::dateTimeTimeZone scheduledStartTime;
    };

    struct convertIdResult {
        microsoft::graph::genericError errorDetails;
        QString sourceId;
        QString targetId;
    };

    struct customTimeZone : graph::timeZoneBase {
        int bias;
        microsoft::graph::daylightTimeZoneOffset daylightOffset;
        microsoft::graph::standardTimeZoneOffset standardOffset;
    };

    struct mailTips {
        microsoft::graph::automaticRepliesMailTips automaticReplies;
        QString customMailTip;
        bool deliveryRestricted;
        microsoft::graph::emailAddress emailAddress;
        microsoft::graph::mailTipsError error;
        int externalMemberCount;
        bool isModerated;
        bool mailboxFull;
        int maxMessageSize;
        microsoft::graph::recipientScopeType recipientScope;
        QList<microsoft::graph::recipient> recipientSuggestions;
        int totalMemberCount;
    };

    struct messageRulePredicates {
        QList<QString> bodyContains;
        QList<QString> bodyOrSubjectContains;
        QList<QString> categories;
        QList<microsoft::graph::recipient> fromAddresses;
        bool hasAttachments;
        QList<QString> headerContains;
        microsoft::graph::importance importance;
        bool isApprovalRequest;
        bool isAutomaticForward;
        bool isAutomaticReply;
        bool isEncrypted;
        bool isMeetingRequest;
        bool isMeetingResponse;
        bool isNonDeliveryReport;
        bool isPermissionControlled;
        bool isReadReceipt;
        bool isSigned;
        bool isVoicemail;
        microsoft::graph::messageActionFlag messageActionFlag;
        bool notSentToMe;
        QList<QString> recipientContains;
        QList<QString> senderContains;
        microsoft::graph::sensitivity sensitivity;
        bool sentCcMe;
        bool sentOnlyToMe;
        QList<microsoft::graph::recipient> sentToAddresses;
        bool sentToMe;
        bool sentToOrCcMe;
        QList<QString> subjectContains;
        microsoft::graph::sizeRange withinSizeRange;
    };

    struct patternedRecurrence {
        microsoft::graph::recurrencePattern pattern;
        microsoft::graph::recurrenceRange range;
    };

    struct reminder {
        QString changeKey;
        microsoft::graph::dateTimeTimeZone eventEndTime;
        QString eventId;
        microsoft::graph::location eventLocation;
        microsoft::graph::dateTimeTimeZone eventStartTime;
        QString eventSubject;
        QString eventWebLink;
        microsoft::graph::dateTimeTimeZone reminderFireTime;
    };

    struct scheduleInformation {
        QString availabilityView;
        microsoft::graph::freeBusyError error;
        QString scheduleId;
        QList<microsoft::graph::scheduleItem> scheduleItems;
        microsoft::graph::workingHours workingHours;
    };

    struct calendarSharingMessage : graph::message {
        bool canAccept;
        microsoft::graph::calendarSharingMessageAction sharingMessageAction;
        QList<microsoft::graph::calendarSharingMessageAction> sharingMessageActions;
        QString suggestedCalendarName;
    };

    struct messageRule : graph::entity {
        microsoft::graph::messageRuleActions actions;
        microsoft::graph::messageRulePredicates conditions;
        QString displayName;
        microsoft::graph::messageRulePredicates exceptions;
        bool hasError;
        bool isEnabled;
        bool isReadOnly;
        int sequence;
    };

    struct call : graph::entity {
        QString callbackUri;
        QString callChainId;
        microsoft::graph::callOptions callOptions;
        QList<microsoft::graph::callRoute> callRoutes;
        microsoft::graph::chatInfo chatInfo;
        microsoft::graph::callDirection direction;
        microsoft::graph::incomingContext incomingContext;
        microsoft::graph::mediaConfig mediaConfig;
        microsoft::graph::callMediaState mediaState;
        microsoft::graph::meetingInfo meetingInfo;
        QString myParticipantId;
        QList<microsoft::graph::modality> requestedModalities;
        microsoft::graph::resultInfo resultInfo;
        microsoft::graph::participantInfo source;
        microsoft::graph::callState state;
        QString subject;
        QList<microsoft::graph::invitationParticipantInfo> targets;
        QString tenantId;
        microsoft::graph::toneInfo toneInfo;
        microsoft::graph::callTranscriptionInfo transcription;
        QList<microsoft::graph::commsOperation> operations;
        QList<microsoft::graph::participant> participants;
    };

    struct accessReviewScheduleSettings {
        QList<microsoft::graph::accessReviewApplyAction> applyActions;
        bool autoApplyDecisionsEnabled;
        QString defaultDecision;
        bool defaultDecisionEnabled;
        int instanceDurationInDays;
        bool justificationRequiredOnApproval;
        bool mailNotificationsEnabled;
        bool recommendationsEnabled;
        microsoft::graph::patternedRecurrence recurrence;
        bool reminderNotificationsEnabled;
    };

    struct accessReviewInstance : graph::entity {
        QDateTime endDateTime;
        QList<microsoft::graph::accessReviewReviewerScope> fallbackReviewers;
        QList<microsoft::graph::accessReviewReviewerScope> reviewers;
        microsoft::graph::accessReviewScope scope;
        QDateTime startDateTime;
        QString status;
        QList<microsoft::graph::accessReviewInstanceDecisionItem> decisions;
    };

    struct accessReviewScheduleDefinition : graph::entity {
        microsoft::graph::userIdentity createdBy;
        QDateTime createdDateTime;
        QString descriptionForAdmins;
        QString descriptionForReviewers;
        QString displayName;
        QList<microsoft::graph::accessReviewReviewerScope> fallbackReviewers;
        microsoft::graph::accessReviewScope instanceEnumerationScope;
        QDateTime lastModifiedDateTime;
        QList<microsoft::graph::accessReviewReviewerScope> reviewers;
        microsoft::graph::accessReviewScope scope;
        microsoft::graph::accessReviewScheduleSettings settings;
        QString status;
        QList<microsoft::graph::accessReviewInstance> instances;
    };

    struct accessReviewSet : graph::entity {
        QList<microsoft::graph::accessReviewScheduleDefinition> definitions;
    };

    struct approval : graph::entity {
        QList<microsoft::graph::approvalStage> stages;
    };

    struct entitlementManagement : graph::entity {
        QList<microsoft::graph::approval> accessPackageAssignmentApprovals;
    };

    struct agreementFileLocalization : graph::agreementFileProperties {
        QList<microsoft::graph::agreementFileVersion> versions;
    };

    struct conditionalAccessConditionSet {
        microsoft::graph::conditionalAccessApplications applications;
        QList<microsoft::graph::conditionalAccessClientApp> clientAppTypes;
        microsoft::graph::conditionalAccessLocations locations;
        microsoft::graph::conditionalAccessPlatforms platforms;
        QList<microsoft::graph::riskLevel> signInRiskLevels;
        QList<microsoft::graph::riskLevel> userRiskLevels;
        microsoft::graph::conditionalAccessUsers users;
    };

    struct conditionalAccessSessionControls {
        microsoft::graph::applicationEnforcedRestrictionsSessionControl applicationEnforcedRestrictions;
        microsoft::graph::cloudAppSecuritySessionControl cloudAppSecurity;
        microsoft::graph::persistentBrowserSessionControl persistentBrowser;
        microsoft::graph::signInFrequencySessionControl signInFrequency;
    };

    struct win32LobAppAssignmentSettings : graph::mobileAppAssignmentSettings {
        microsoft::graph::win32LobAppDeliveryOptimizationPriority deliveryOptimizationPriority;
        microsoft::graph::mobileAppInstallTimeSettings installTimeSettings;
        microsoft::graph::win32LobAppNotification notifications;
        microsoft::graph::win32LobAppRestartSettings restartSettings;
    };

    struct mobileApp : graph::entity {
        QDateTime createdDateTime;
        QString description;
        QString developer;
        QString displayName;
        QString informationUrl;
        bool isFeatured;
        microsoft::graph::mimeContent largeIcon;
        QDateTime lastModifiedDateTime;
        QString notes;
        QString owner;
        QString privacyInformationUrl;
        QString publisher;
        microsoft::graph::mobileAppPublishingState publishingState;
        QList<microsoft::graph::mobileAppAssignment> assignments;
        QList<microsoft::graph::mobileAppCategory> categories;
    };

    struct androidStoreApp : graph::mobileApp {
        QString appStoreUrl;
        microsoft::graph::androidMinimumOperatingSystem minimumSupportedOperatingSystem;
        QString packageId;
    };

    struct managedEBook : graph::entity {
        QDateTime createdDateTime;
        QString description;
        QString displayName;
        QString informationUrl;
        microsoft::graph::mimeContent largeCover;
        QDateTime lastModifiedDateTime;
        QString privacyInformationUrl;
        QDateTime publishedDateTime;
        QString publisher;
        QList<microsoft::graph::managedEBookAssignment> assignments;
        QList<microsoft::graph::deviceInstallState> deviceStates;
        std::unique_ptr<microsoft::graph::eBookInstallSummary> installSummary;
        QList<microsoft::graph::userInstallStateSummary> userStateSummary;
    };

    struct managedDeviceMobileAppConfiguration : graph::entity {
        QDateTime createdDateTime;
        QString description;
        QString displayName;
        QDateTime lastModifiedDateTime;
        QList<QString> targetedMobileApps;
        int version;
        QList<microsoft::graph::managedDeviceMobileAppConfigurationAssignment> assignments;
        QList<microsoft::graph::managedDeviceMobileAppConfigurationDeviceStatus> deviceStatuses;
        std::unique_ptr<microsoft::graph::managedDeviceMobileAppConfigurationDeviceSummary> deviceStatusSummary;
        QList<microsoft::graph::managedDeviceMobileAppConfigurationUserStatus> userStatuses;
        std::unique_ptr<microsoft::graph::managedDeviceMobileAppConfigurationUserSummary> userStatusSummary;
    };

    struct targetedManagedAppProtection : graph::managedAppProtection {
        bool isAssigned;
        QList<microsoft::graph::targetedManagedAppPolicyAssignment> assignments;
    };

    struct androidManagedAppProtection : graph::targetedManagedAppProtection {
        QString customBrowserDisplayName;
        QString customBrowserPackageId;
        int deployedAppCount;
        bool disableAppEncryptionIfDeviceEncryptionIsEnabled;
        bool encryptAppData;
        QString minimumRequiredPatchVersion;
        QString minimumWarningPatchVersion;
        bool screenCaptureBlocked;
        QList<microsoft::graph::managedMobileApp> apps;
        std::unique_ptr<microsoft::graph::managedAppPolicyDeploymentSummary> deploymentSummary;
    };

    struct defaultManagedAppProtection : graph::managedAppProtection {
        microsoft::graph::managedAppDataEncryptionType appDataEncryptionType;
        QList<microsoft::graph::keyValuePair> customSettings;
        int deployedAppCount;
        bool disableAppEncryptionIfDeviceEncryptionIsEnabled;
        bool encryptAppData;
        bool faceIdBlocked;
        QString minimumRequiredPatchVersion;
        QString minimumRequiredSdkVersion;
        QString minimumWarningPatchVersion;
        bool screenCaptureBlocked;
        QList<microsoft::graph::managedMobileApp> apps;
        std::unique_ptr<microsoft::graph::managedAppPolicyDeploymentSummary> deploymentSummary;
    };

    struct iosManagedAppProtection : graph::targetedManagedAppProtection {
        microsoft::graph::managedAppDataEncryptionType appDataEncryptionType;
        QString customBrowserProtocol;
        int deployedAppCount;
        bool faceIdBlocked;
        QString minimumRequiredSdkVersion;
        QList<microsoft::graph::managedMobileApp> apps;
        std::unique_ptr<microsoft::graph::managedAppPolicyDeploymentSummary> deploymentSummary;
    };

    struct windowsInformationProtection : graph::managedAppPolicy {
        bool azureRightsManagementServicesAllowed;
        microsoft::graph::windowsInformationProtectionDataRecoveryCertificate dataRecoveryCertificate;
        microsoft::graph::windowsInformationProtectionEnforcementLevel enforcementLevel;
        QString enterpriseDomain;
        QList<microsoft::graph::windowsInformationProtectionResourceCollection> enterpriseInternalProxyServers;
        QList<microsoft::graph::windowsInformationProtectionIPRangeCollection> enterpriseIPRanges;
        bool enterpriseIPRangesAreAuthoritative;
        QList<microsoft::graph::windowsInformationProtectionResourceCollection> enterpriseNetworkDomainNames;
        QList<microsoft::graph::windowsInformationProtectionResourceCollection> enterpriseProtectedDomainNames;
        QList<microsoft::graph::windowsInformationProtectionProxiedDomainCollection> enterpriseProxiedDomains;
        QList<microsoft::graph::windowsInformationProtectionResourceCollection> enterpriseProxyServers;
        bool enterpriseProxyServersAreAuthoritative;
        QList<microsoft::graph::windowsInformationProtectionApp> exemptApps;
        bool iconsVisible;
        bool indexingEncryptedStoresOrItemsBlocked;
        bool isAssigned;
        QList<microsoft::graph::windowsInformationProtectionResourceCollection> neutralDomainResources;
        QList<microsoft::graph::windowsInformationProtectionApp> protectedApps;
        bool protectionUnderLockConfigRequired;
        bool revokeOnUnenrollDisabled;
        QGuid rightsManagementServicesTemplateId;
        QList<microsoft::graph::windowsInformationProtectionResourceCollection> smbAutoEncryptedFileExtensions;
        QList<microsoft::graph::targetedManagedAppPolicyAssignment> assignments;
        QList<microsoft::graph::windowsInformationProtectionAppLockerFile> exemptAppLockerFiles;
        QList<microsoft::graph::windowsInformationProtectionAppLockerFile> protectedAppLockerFiles;
    };

    struct mdmWindowsInformationProtectionPolicy : graph::windowsInformationProtection {
    };

    struct managedAppConfiguration : graph::managedAppPolicy {
        QList<microsoft::graph::keyValuePair> customSettings;
    };

    struct targetedManagedAppConfiguration : graph::managedAppConfiguration {
        int deployedAppCount;
        bool isAssigned;
        QList<microsoft::graph::managedMobileApp> apps;
        QList<microsoft::graph::targetedManagedAppPolicyAssignment> assignments;
        std::unique_ptr<microsoft::graph::managedAppPolicyDeploymentSummary> deploymentSummary;
    };

    struct windowsInformationProtectionPolicy : graph::windowsInformationProtection {
        int daysWithoutContactBeforeUnenroll;
        QString mdmEnrollmentUrl;
        int minutesOfInactivityBeforeDeviceLock;
        int numberOfPastPinsRemembered;
        int passwordMaximumAttemptCount;
        int pinExpirationDays;
        microsoft::graph::windowsInformationProtectionPinCharacterRequirements pinLowercaseLetters;
        int pinMinimumLength;
        microsoft::graph::windowsInformationProtectionPinCharacterRequirements pinSpecialCharacters;
        microsoft::graph::windowsInformationProtectionPinCharacterRequirements pinUppercaseLetters;
        bool revokeOnMdmHandoffDisabled;
        bool windowsHelloForBusinessBlocked;
    };

    struct iosMobileAppConfiguration : graph::managedDeviceMobileAppConfiguration {
        QByteArray encodedSettingXml;
        QList<microsoft::graph::appConfigurationSettingItem> settings;
    };

    struct iosStoreApp : graph::mobileApp {
        microsoft::graph::iosDeviceType applicableDeviceType;
        QString appStoreUrl;
        QString bundleId;
        microsoft::graph::iosMinimumOperatingSystem minimumSupportedOperatingSystem;
    };

    struct iosVppApp : graph::mobileApp {
        microsoft::graph::iosDeviceType applicableDeviceType;
        QString appStoreUrl;
        QString bundleId;
        microsoft::graph::vppLicensingType licensingType;
        QDateTime releaseDateTime;
        int totalLicenseCount;
        int usedLicenseCount;
        microsoft::graph::vppTokenAccountType vppTokenAccountType;
        QString vppTokenAppleId;
        QString vppTokenOrganizationName;
    };

    struct macOSOfficeSuiteApp : graph::mobileApp {
    };

    struct managedApp : graph::mobileApp {
        microsoft::graph::managedAppAvailability appAvailability;
        QString version;
    };

    struct managedAndroidStoreApp : graph::managedApp {
        QString appStoreUrl;
        microsoft::graph::androidMinimumOperatingSystem minimumSupportedOperatingSystem;
        QString packageId;
    };

    struct managedIOSStoreApp : graph::managedApp {
        microsoft::graph::iosDeviceType applicableDeviceType;
        QString appStoreUrl;
        QString bundleId;
        microsoft::graph::iosMinimumOperatingSystem minimumSupportedOperatingSystem;
    };

    struct mobileAppContent : graph::entity {
        QList<microsoft::graph::mobileAppContentFile> files;
    };

    struct microsoftStoreForBusinessApp : graph::mobileApp {
        microsoft::graph::microsoftStoreForBusinessLicenseType licenseType;
        QString packageIdentityName;
        QString productKey;
        int totalLicenseCount;
        int usedLicenseCount;
    };

    struct webApp : graph::mobileApp {
        QString appUrl;
        bool useManagedBrowser;
    };

    struct iosVppEBook : graph::managedEBook {
        QString appleId;
        QList<QString> genres;
        QString language;
        QString seller;
        int totalLicenseCount;
        int usedLicenseCount;
        QString vppOrganizationName;
        QGuid vppTokenId;
    };

    struct deviceCompliancePolicy : graph::entity {
        QDateTime createdDateTime;
        QString description;
        QString displayName;
        QDateTime lastModifiedDateTime;
        int version;
        QList<microsoft::graph::deviceCompliancePolicyAssignment> assignments;
        QList<microsoft::graph::settingStateDeviceSummary> deviceSettingStateSummaries;
        QList<microsoft::graph::deviceComplianceDeviceStatus> deviceStatuses;
        std::unique_ptr<microsoft::graph::deviceComplianceDeviceOverview> deviceStatusOverview;
        QList<microsoft::graph::deviceComplianceScheduledActionForRule> scheduledActionsForRule;
        QList<microsoft::graph::deviceComplianceUserStatus> userStatuses;
        std::unique_ptr<microsoft::graph::deviceComplianceUserOverview> userStatusOverview;
    };

    struct deviceCompliancePolicySettingStateSummary : graph::entity {
        int compliantDeviceCount;
        int conflictDeviceCount;
        int errorDeviceCount;
        int nonCompliantDeviceCount;
        int notApplicableDeviceCount;
        microsoft::graph::policyPlatformType platformType;
        int remediatedDeviceCount;
        QString setting;
        QString settingName;
        int unknownDeviceCount;
        QList<microsoft::graph::deviceComplianceSettingState> deviceComplianceSettingStates;
    };

    struct deviceConfiguration : graph::entity {
        QDateTime createdDateTime;
        QString description;
        QString displayName;
        QDateTime lastModifiedDateTime;
        int version;
        QList<microsoft::graph::deviceConfigurationAssignment> assignments;
        QList<microsoft::graph::settingStateDeviceSummary> deviceSettingStateSummaries;
        QList<microsoft::graph::deviceConfigurationDeviceStatus> deviceStatuses;
        std::unique_ptr<microsoft::graph::deviceConfigurationDeviceOverview> deviceStatusOverview;
        QList<microsoft::graph::deviceConfigurationUserStatus> userStatuses;
        std::unique_ptr<microsoft::graph::deviceConfigurationUserOverview> userStatusOverview;
    };

    struct intuneBrand {
        QString contactITEmailAddress;
        QString contactITName;
        QString contactITNotes;
        QString contactITPhoneNumber;
        microsoft::graph::mimeContent darkBackgroundLogo;
        QString displayName;
        microsoft::graph::mimeContent lightBackgroundLogo;
        QString onlineSupportSiteName;
        QString onlineSupportSiteUrl;
        QString privacyUrl;
        bool showDisplayNameNextToLogo;
        bool showLogo;
        bool showNameNextToLogo;
        microsoft::graph::rgbColor themeColor;
    };

    struct complianceManagementPartner : graph::entity {
        QList<microsoft::graph::complianceManagementPartnerAssignment> androidEnrollmentAssignments;
        bool androidOnboarded;
        QString displayName;
        QList<microsoft::graph::complianceManagementPartnerAssignment> iosEnrollmentAssignments;
        bool iosOnboarded;
        QDateTime lastHeartbeatDateTime;
        QList<microsoft::graph::complianceManagementPartnerAssignment> macOsEnrollmentAssignments;
        bool macOsOnboarded;
        microsoft::graph::deviceManagementPartnerTenantState partnerState;
    };

    struct deviceEnrollmentConfiguration : graph::entity {
        QDateTime createdDateTime;
        QString description;
        QString displayName;
        QDateTime lastModifiedDateTime;
        int priority;
        int version;
        QList<microsoft::graph::enrollmentConfigurationAssignment> assignments;
    };

    struct managedDeviceOverview : graph::entity {
        microsoft::graph::deviceExchangeAccessStateSummary deviceExchangeAccessStateSummary;
        microsoft::graph::deviceOperatingSystemSummary deviceOperatingSystemSummary;
        int dualEnrolledDeviceCount;
        int enrolledDeviceCount;
        int mdmEnrolledCount;
    };

    struct importedWindowsAutopilotDeviceIdentity : graph::entity {
        QString assignedUserPrincipalName;
        QString groupTag;
        QByteArray hardwareIdentifier;
        QString importId;
        QString productKey;
        QString serialNumber;
        microsoft::graph::importedWindowsAutopilotDeviceIdentityState state;
    };

    struct notificationMessageTemplate : graph::entity {
        microsoft::graph::notificationTemplateBrandingOptions brandingOptions;
        QString defaultLocale;
        QString displayName;
        QDateTime lastModifiedDateTime;
        QList<microsoft::graph::localizedNotificationMessage> localizedNotificationMessages;
    };

    struct deviceManagementReports : graph::entity {
        QList<microsoft::graph::deviceManagementExportJob> exportJobs;
    };

    struct deviceCompliancePolicySettingState {
        QString currentValue;
        long long errorCode;
        QString errorDescription;
        QString instanceDisplayName;
        QString setting;
        QString settingName;
        QList<microsoft::graph::settingSource> sources;
        microsoft::graph::complianceStatus state;
        QString userEmail;
        QString userId;
        QString userName;
        QString userPrincipalName;
    };

    struct iosHomeScreenFolder : graph::iosHomeScreenItem {
        QList<microsoft::graph::iosHomeScreenFolderPage> pages;
    };

    struct androidCompliancePolicy : graph::deviceCompliancePolicy {
        bool deviceThreatProtectionEnabled;
        microsoft::graph::deviceThreatProtectionLevel deviceThreatProtectionRequiredSecurityLevel;
        QString minAndroidSecurityPatchLevel;
        QString osMaximumVersion;
        QString osMinimumVersion;
        int passwordExpirationDays;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeLock;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::androidRequiredPasswordType passwordRequiredType;
        bool securityBlockJailbrokenDevices;
        bool securityDisableUsbDebugging;
        bool securityPreventInstallAppsFromUnknownSources;
        bool securityRequireCompanyPortalAppIntegrity;
        bool securityRequireGooglePlayServices;
        bool securityRequireSafetyNetAttestationBasicIntegrity;
        bool securityRequireSafetyNetAttestationCertifiedDevice;
        bool securityRequireUpToDateSecurityProviders;
        bool securityRequireVerifyApps;
        bool storageRequireEncryption;
    };

    struct androidCustomConfiguration : graph::deviceConfiguration {
        QList<microsoft::graph::omaSetting> omaSettings;
    };

    struct androidGeneralDeviceConfiguration : graph::deviceConfiguration {
        bool appsBlockClipboardSharing;
        bool appsBlockCopyPaste;
        bool appsBlockYouTube;
        QList<microsoft::graph::appListItem> appsHideList;
        QList<microsoft::graph::appListItem> appsInstallAllowList;
        QList<microsoft::graph::appListItem> appsLaunchBlockList;
        bool bluetoothBlocked;
        bool cameraBlocked;
        bool cellularBlockDataRoaming;
        bool cellularBlockMessaging;
        bool cellularBlockVoiceRoaming;
        bool cellularBlockWiFiTethering;
        microsoft::graph::appListType compliantAppListType;
        QList<microsoft::graph::appListItem> compliantAppsList;
        bool deviceSharingAllowed;
        bool diagnosticDataBlockSubmission;
        bool factoryResetBlocked;
        bool googleAccountBlockAutoSync;
        bool googlePlayStoreBlocked;
        QList<microsoft::graph::appListItem> kioskModeApps;
        bool kioskModeBlockSleepButton;
        bool kioskModeBlockVolumeButtons;
        bool locationServicesBlocked;
        bool nfcBlocked;
        bool passwordBlockFingerprintUnlock;
        bool passwordBlockTrustAgents;
        int passwordExpirationDays;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeScreenTimeout;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::androidRequiredPasswordType passwordRequiredType;
        int passwordSignInFailureCountBeforeFactoryReset;
        bool powerOffBlocked;
        bool screenCaptureBlocked;
        bool securityRequireVerifyApps;
        bool storageBlockGoogleBackup;
        bool storageBlockRemovableStorage;
        bool storageRequireDeviceEncryption;
        bool storageRequireRemovableStorageEncryption;
        bool voiceAssistantBlocked;
        bool voiceDialingBlocked;
        bool webBrowserBlockAutofill;
        bool webBrowserBlocked;
        bool webBrowserBlockJavaScript;
        bool webBrowserBlockPopups;
        microsoft::graph::webBrowserCookieSettings webBrowserCookieSettings;
        bool wiFiBlocked;
    };

    struct androidWorkProfileCompliancePolicy : graph::deviceCompliancePolicy {
        bool deviceThreatProtectionEnabled;
        microsoft::graph::deviceThreatProtectionLevel deviceThreatProtectionRequiredSecurityLevel;
        QString minAndroidSecurityPatchLevel;
        QString osMaximumVersion;
        QString osMinimumVersion;
        int passwordExpirationDays;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeLock;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::androidRequiredPasswordType passwordRequiredType;
        bool securityBlockJailbrokenDevices;
        bool securityDisableUsbDebugging;
        bool securityPreventInstallAppsFromUnknownSources;
        bool securityRequireCompanyPortalAppIntegrity;
        bool securityRequireGooglePlayServices;
        bool securityRequireSafetyNetAttestationBasicIntegrity;
        bool securityRequireSafetyNetAttestationCertifiedDevice;
        bool securityRequireUpToDateSecurityProviders;
        bool securityRequireVerifyApps;
        bool storageRequireEncryption;
    };

    struct androidWorkProfileCustomConfiguration : graph::deviceConfiguration {
        QList<microsoft::graph::omaSetting> omaSettings;
    };

    struct androidWorkProfileGeneralDeviceConfiguration : graph::deviceConfiguration {
        bool passwordBlockFingerprintUnlock;
        bool passwordBlockTrustAgents;
        int passwordExpirationDays;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeScreenTimeout;
        int passwordPreviousPasswordBlockCount;
        microsoft::graph::androidWorkProfileRequiredPasswordType passwordRequiredType;
        int passwordSignInFailureCountBeforeFactoryReset;
        bool securityRequireVerifyApps;
        bool workProfileBlockAddingAccounts;
        bool workProfileBlockCamera;
        bool workProfileBlockCrossProfileCallerId;
        bool workProfileBlockCrossProfileContactsSearch;
        bool workProfileBlockCrossProfileCopyPaste;
        bool workProfileBlockNotificationsWhileDeviceLocked;
        bool workProfileBlockScreenCapture;
        bool workProfileBluetoothEnableContactSharing;
        microsoft::graph::androidWorkProfileCrossProfileDataSharingType workProfileDataSharingType;
        microsoft::graph::androidWorkProfileDefaultAppPermissionPolicyType workProfileDefaultAppPermissionPolicy;
        bool workProfilePasswordBlockFingerprintUnlock;
        bool workProfilePasswordBlockTrustAgents;
        int workProfilePasswordExpirationDays;
        int workProfilePasswordMinimumLength;
        int workProfilePasswordMinLetterCharacters;
        int workProfilePasswordMinLowerCaseCharacters;
        int workProfilePasswordMinNonLetterCharacters;
        int workProfilePasswordMinNumericCharacters;
        int workProfilePasswordMinSymbolCharacters;
        int workProfilePasswordMinUpperCaseCharacters;
        int workProfilePasswordMinutesOfInactivityBeforeScreenTimeout;
        int workProfilePasswordPreviousPasswordBlockCount;
        microsoft::graph::androidWorkProfileRequiredPasswordType workProfilePasswordRequiredType;
        int workProfilePasswordSignInFailureCountBeforeFactoryReset;
        bool workProfileRequirePassword;
    };

    struct appleDeviceFeaturesConfigurationBase : graph::deviceConfiguration {
    };

    struct deviceCompliancePolicyState : graph::entity {
        QString displayName;
        microsoft::graph::policyPlatformType platformType;
        int settingCount;
        QList<microsoft::graph::deviceCompliancePolicySettingState> settingStates;
        microsoft::graph::complianceStatus state;
        int version;
    };

    struct editionUpgradeConfiguration : graph::deviceConfiguration {
        QString license;
        microsoft::graph::editionUpgradeLicenseType licenseType;
        QString productKey;
        microsoft::graph::windows10EditionType targetEdition;
    };

    struct iosCertificateProfile : graph::deviceConfiguration {
    };

    struct iosCompliancePolicy : graph::deviceCompliancePolicy {
        bool deviceThreatProtectionEnabled;
        microsoft::graph::deviceThreatProtectionLevel deviceThreatProtectionRequiredSecurityLevel;
        bool managedEmailProfileRequired;
        QString osMaximumVersion;
        QString osMinimumVersion;
        bool passcodeBlockSimple;
        int passcodeExpirationDays;
        int passcodeMinimumCharacterSetCount;
        int passcodeMinimumLength;
        int passcodeMinutesOfInactivityBeforeLock;
        int passcodePreviousPasscodeBlockCount;
        bool passcodeRequired;
        microsoft::graph::requiredPasswordType passcodeRequiredType;
        bool securityBlockJailbrokenDevices;
    };

    struct iosCustomConfiguration : graph::deviceConfiguration {
        QByteArray payload;
        QString payloadFileName;
        QString payloadName;
    };

    struct iosDeviceFeaturesConfiguration : graph::appleDeviceFeaturesConfigurationBase {
        QString assetTagTemplate;
        QList<microsoft::graph::iosHomeScreenItem> homeScreenDockIcons;
        QList<microsoft::graph::iosHomeScreenPage> homeScreenPages;
        QString lockScreenFootnote;
        QList<microsoft::graph::iosNotificationSettings> notificationSettings;
    };

    struct iosGeneralDeviceConfiguration : graph::deviceConfiguration {
        bool accountBlockModification;
        bool activationLockAllowWhenSupervised;
        bool airDropBlocked;
        bool airDropForceUnmanagedDropTarget;
        bool airPlayForcePairingPasswordForOutgoingRequests;
        bool appleNewsBlocked;
        bool appleWatchBlockPairing;
        bool appleWatchForceWristDetection;
        QList<microsoft::graph::appListItem> appsSingleAppModeList;
        bool appStoreBlockAutomaticDownloads;
        bool appStoreBlocked;
        bool appStoreBlockInAppPurchases;
        bool appStoreBlockUIAppInstallation;
        bool appStoreRequirePassword;
        QList<microsoft::graph::appListItem> appsVisibilityList;
        microsoft::graph::appListType appsVisibilityListType;
        bool bluetoothBlockModification;
        bool cameraBlocked;
        bool cellularBlockDataRoaming;
        bool cellularBlockGlobalBackgroundFetchWhileRoaming;
        bool cellularBlockPerAppDataModification;
        bool cellularBlockPersonalHotspot;
        bool cellularBlockVoiceRoaming;
        bool certificatesBlockUntrustedTlsCertificates;
        bool classroomAppBlockRemoteScreenObservation;
        bool classroomAppForceUnpromptedScreenObservation;
        microsoft::graph::appListType compliantAppListType;
        QList<microsoft::graph::appListItem> compliantAppsList;
        bool configurationProfileBlockChanges;
        bool definitionLookupBlocked;
        bool deviceBlockEnableRestrictions;
        bool deviceBlockEraseContentAndSettings;
        bool deviceBlockNameModification;
        bool diagnosticDataBlockSubmission;
        bool diagnosticDataBlockSubmissionModification;
        bool documentsBlockManagedDocumentsInUnmanagedApps;
        bool documentsBlockUnmanagedDocumentsInManagedApps;
        QList<QString> emailInDomainSuffixes;
        bool enterpriseAppBlockTrust;
        bool enterpriseAppBlockTrustModification;
        bool faceTimeBlocked;
        bool findMyFriendsBlocked;
        bool gameCenterBlocked;
        bool gamingBlockGameCenterFriends;
        bool gamingBlockMultiplayer;
        bool hostPairingBlocked;
        bool iBooksStoreBlocked;
        bool iBooksStoreBlockErotica;
        bool iCloudBlockActivityContinuation;
        bool iCloudBlockBackup;
        bool iCloudBlockDocumentSync;
        bool iCloudBlockManagedAppsSync;
        bool iCloudBlockPhotoLibrary;
        bool iCloudBlockPhotoStreamSync;
        bool iCloudBlockSharedPhotoStream;
        bool iCloudRequireEncryptedBackup;
        bool iTunesBlockExplicitContent;
        bool iTunesBlockMusicService;
        bool iTunesBlockRadio;
        bool keyboardBlockAutoCorrect;
        bool keyboardBlockDictation;
        bool keyboardBlockPredictive;
        bool keyboardBlockShortcuts;
        bool keyboardBlockSpellCheck;
        bool kioskModeAllowAssistiveSpeak;
        bool kioskModeAllowAssistiveTouchSettings;
        bool kioskModeAllowAutoLock;
        bool kioskModeAllowColorInversionSettings;
        bool kioskModeAllowRingerSwitch;
        bool kioskModeAllowScreenRotation;
        bool kioskModeAllowSleepButton;
        bool kioskModeAllowTouchscreen;
        bool kioskModeAllowVoiceOverSettings;
        bool kioskModeAllowVolumeButtons;
        bool kioskModeAllowZoomSettings;
        QString kioskModeAppStoreUrl;
        QString kioskModeBuiltInAppId;
        QString kioskModeManagedAppId;
        bool kioskModeRequireAssistiveTouch;
        bool kioskModeRequireColorInversion;
        bool kioskModeRequireMonoAudio;
        bool kioskModeRequireVoiceOver;
        bool kioskModeRequireZoom;
        bool lockScreenBlockControlCenter;
        bool lockScreenBlockNotificationView;
        bool lockScreenBlockPassbook;
        bool lockScreenBlockTodayView;
        microsoft::graph::ratingAppsType mediaContentRatingApps;
        microsoft::graph::mediaContentRatingAustralia mediaContentRatingAustralia;
        microsoft::graph::mediaContentRatingCanada mediaContentRatingCanada;
        microsoft::graph::mediaContentRatingFrance mediaContentRatingFrance;
        microsoft::graph::mediaContentRatingGermany mediaContentRatingGermany;
        microsoft::graph::mediaContentRatingIreland mediaContentRatingIreland;
        microsoft::graph::mediaContentRatingJapan mediaContentRatingJapan;
        microsoft::graph::mediaContentRatingNewZealand mediaContentRatingNewZealand;
        microsoft::graph::mediaContentRatingUnitedKingdom mediaContentRatingUnitedKingdom;
        microsoft::graph::mediaContentRatingUnitedStates mediaContentRatingUnitedStates;
        bool messagesBlocked;
        QList<microsoft::graph::iosNetworkUsageRule> networkUsageRules;
        bool notificationsBlockSettingsModification;
        bool passcodeBlockFingerprintModification;
        bool passcodeBlockFingerprintUnlock;
        bool passcodeBlockModification;
        bool passcodeBlockSimple;
        int passcodeExpirationDays;
        int passcodeMinimumCharacterSetCount;
        int passcodeMinimumLength;
        int passcodeMinutesOfInactivityBeforeLock;
        int passcodeMinutesOfInactivityBeforeScreenTimeout;
        int passcodePreviousPasscodeBlockCount;
        bool passcodeRequired;
        microsoft::graph::requiredPasswordType passcodeRequiredType;
        int passcodeSignInFailureCountBeforeWipe;
        bool podcastsBlocked;
        bool safariBlockAutofill;
        bool safariBlocked;
        bool safariBlockJavaScript;
        bool safariBlockPopups;
        microsoft::graph::webBrowserCookieSettings safariCookieSettings;
        QList<QString> safariManagedDomains;
        QList<QString> safariPasswordAutoFillDomains;
        bool safariRequireFraudWarning;
        bool screenCaptureBlocked;
        bool siriBlocked;
        bool siriBlockedWhenLocked;
        bool siriBlockUserGeneratedContent;
        bool siriRequireProfanityFilter;
        bool spotlightBlockInternetResults;
        bool voiceDialingBlocked;
        bool wallpaperBlockModification;
        bool wiFiConnectOnlyToConfiguredNetworks;
    };

    struct iosUpdateConfiguration : graph::deviceConfiguration {
        QTime activeHoursEnd;
        QTime activeHoursStart;
        QList<microsoft::graph::dayOfWeek> scheduledInstallDays;
        int utcTimeOffsetInMinutes;
    };

    struct macOSCompliancePolicy : graph::deviceCompliancePolicy {
        bool deviceThreatProtectionEnabled;
        microsoft::graph::deviceThreatProtectionLevel deviceThreatProtectionRequiredSecurityLevel;
        bool firewallBlockAllIncoming;
        bool firewallEnabled;
        bool firewallEnableStealthMode;
        QString osMaximumVersion;
        QString osMinimumVersion;
        bool passwordBlockSimple;
        int passwordExpirationDays;
        int passwordMinimumCharacterSetCount;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeLock;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::requiredPasswordType passwordRequiredType;
        bool storageRequireEncryption;
        bool systemIntegrityProtectionEnabled;
    };

    struct macOSCustomConfiguration : graph::deviceConfiguration {
        QByteArray payload;
        QString payloadFileName;
        QString payloadName;
    };

    struct macOSDeviceFeaturesConfiguration : graph::appleDeviceFeaturesConfigurationBase {
    };

    struct macOSGeneralDeviceConfiguration : graph::deviceConfiguration {
        microsoft::graph::appListType compliantAppListType;
        QList<microsoft::graph::appListItem> compliantAppsList;
        QList<QString> emailInDomainSuffixes;
        bool passwordBlockSimple;
        int passwordExpirationDays;
        int passwordMinimumCharacterSetCount;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeLock;
        int passwordMinutesOfInactivityBeforeScreenTimeout;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::requiredPasswordType passwordRequiredType;
    };

    struct reportRoot : graph::entity {
        QList<microsoft::graph::printUsageByPrinter> dailyPrintUsageByPrinter;
        QList<microsoft::graph::printUsageByUser> dailyPrintUsageByUser;
        QList<microsoft::graph::printUsageByPrinter> monthlyPrintUsageByPrinter;
        QList<microsoft::graph::printUsageByUser> monthlyPrintUsageByUser;
    };

    struct sharedPCConfiguration : graph::deviceConfiguration {
        microsoft::graph::sharedPCAccountManagerPolicy accountManagerPolicy;
        microsoft::graph::sharedPCAllowedAccountType allowedAccounts;
        bool allowLocalStorage;
        bool disableAccountManager;
        bool disableEduPolicies;
        bool disablePowerPolicies;
        bool disableSignInOnResume;
        bool enabled;
        int idleTimeBeforeSleepInSeconds;
        QString kioskAppDisplayName;
        QString kioskAppUserModelId;
        QTime maintenanceStartTime;
    };

    struct windows10CompliancePolicy : graph::deviceCompliancePolicy {
        bool bitLockerEnabled;
        bool codeIntegrityEnabled;
        bool earlyLaunchAntiMalwareDriverEnabled;
        QString mobileOsMaximumVersion;
        QString mobileOsMinimumVersion;
        QString osMaximumVersion;
        QString osMinimumVersion;
        bool passwordBlockSimple;
        int passwordExpirationDays;
        int passwordMinimumCharacterSetCount;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeLock;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        bool passwordRequiredToUnlockFromIdle;
        microsoft::graph::requiredPasswordType passwordRequiredType;
        bool requireHealthyDeviceReport;
        bool secureBootEnabled;
        bool storageRequireEncryption;
    };

    struct windows10CustomConfiguration : graph::deviceConfiguration {
        QList<microsoft::graph::omaSetting> omaSettings;
    };

    struct windows10EndpointProtectionConfiguration : graph::deviceConfiguration {
        bool applicationGuardAllowPersistence;
        bool applicationGuardAllowPrintToLocalPrinters;
        bool applicationGuardAllowPrintToNetworkPrinters;
        bool applicationGuardAllowPrintToPDF;
        bool applicationGuardAllowPrintToXPS;
        microsoft::graph::applicationGuardBlockClipboardSharingType applicationGuardBlockClipboardSharing;
        microsoft::graph::applicationGuardBlockFileTransferType applicationGuardBlockFileTransfer;
        bool applicationGuardBlockNonEnterpriseContent;
        bool applicationGuardEnabled;
        bool applicationGuardForceAuditing;
        microsoft::graph::appLockerApplicationControlType appLockerApplicationControl;
        bool bitLockerDisableWarningForOtherDiskEncryption;
        bool bitLockerEnableStorageCardEncryptionOnMobile;
        bool bitLockerEncryptDevice;
        microsoft::graph::bitLockerRemovableDrivePolicy bitLockerRemovableDrivePolicy;
        QList<QString> defenderAdditionalGuardedFolders;
        QList<QString> defenderAttackSurfaceReductionExcludedPaths;
        QByteArray defenderExploitProtectionXml;
        QString defenderExploitProtectionXmlFileName;
        QList<QString> defenderGuardedFoldersAllowedAppPaths;
        bool defenderSecurityCenterBlockExploitProtectionOverride;
        bool firewallBlockStatefulFTP;
        microsoft::graph::firewallCertificateRevocationListCheckMethodType firewallCertificateRevocationListCheckMethod;
        int firewallIdleTimeoutForSecurityAssociationInSeconds;
        bool firewallIPSecExemptionsAllowDHCP;
        bool firewallIPSecExemptionsAllowICMP;
        bool firewallIPSecExemptionsAllowNeighborDiscovery;
        bool firewallIPSecExemptionsAllowRouterDiscovery;
        bool firewallMergeKeyingModuleSettings;
        microsoft::graph::firewallPacketQueueingMethodType firewallPacketQueueingMethod;
        microsoft::graph::firewallPreSharedKeyEncodingMethodType firewallPreSharedKeyEncodingMethod;
        microsoft::graph::windowsFirewallNetworkProfile firewallProfileDomain;
        microsoft::graph::windowsFirewallNetworkProfile firewallProfilePrivate;
        microsoft::graph::windowsFirewallNetworkProfile firewallProfilePublic;
        bool smartScreenBlockOverrideForFiles;
        bool smartScreenEnableInShell;
    };

    struct windows10EnterpriseModernAppManagementConfiguration : graph::deviceConfiguration {
        bool uninstallBuiltInApps;
    };

    struct windows10GeneralConfiguration : graph::deviceConfiguration {
        bool accountsBlockAddingNonMicrosoftAccountEmail;
        bool antiTheftModeBlocked;
        microsoft::graph::stateManagementSetting appsAllowTrustedAppsSideloading;
        bool appsBlockWindowsStoreOriginatedApps;
        QList<QString> bluetoothAllowedServices;
        bool bluetoothBlockAdvertising;
        bool bluetoothBlockDiscoverableMode;
        bool bluetoothBlocked;
        bool bluetoothBlockPrePairing;
        bool cameraBlocked;
        bool cellularBlockDataWhenRoaming;
        bool cellularBlockVpn;
        bool cellularBlockVpnWhenRoaming;
        bool certificatesBlockManualRootCertificateInstallation;
        bool connectedDevicesServiceBlocked;
        bool copyPasteBlocked;
        bool cortanaBlocked;
        bool defenderBlockEndUserAccess;
        microsoft::graph::defenderCloudBlockLevelType defenderCloudBlockLevel;
        int defenderDaysBeforeDeletingQuarantinedMalware;
        microsoft::graph::defenderDetectedMalwareActions defenderDetectedMalwareActions;
        QList<QString> defenderFileExtensionsToExclude;
        QList<QString> defenderFilesAndFoldersToExclude;
        microsoft::graph::defenderMonitorFileActivity defenderMonitorFileActivity;
        QList<QString> defenderProcessesToExclude;
        microsoft::graph::defenderPromptForSampleSubmission defenderPromptForSampleSubmission;
        bool defenderRequireBehaviorMonitoring;
        bool defenderRequireCloudProtection;
        bool defenderRequireNetworkInspectionSystem;
        bool defenderRequireRealTimeMonitoring;
        bool defenderScanArchiveFiles;
        bool defenderScanDownloads;
        bool defenderScanIncomingMail;
        bool defenderScanMappedNetworkDrivesDuringFullScan;
        int defenderScanMaxCpu;
        bool defenderScanNetworkFiles;
        bool defenderScanRemovableDrivesDuringFullScan;
        bool defenderScanScriptsLoadedInInternetExplorer;
        microsoft::graph::defenderScanType defenderScanType;
        QTime defenderScheduledQuickScanTime;
        QTime defenderScheduledScanTime;
        int defenderSignatureUpdateIntervalInHours;
        microsoft::graph::weeklySchedule defenderSystemScanSchedule;
        microsoft::graph::stateManagementSetting developerUnlockSetting;
        bool deviceManagementBlockFactoryResetOnMobile;
        bool deviceManagementBlockManualUnenroll;
        microsoft::graph::diagnosticDataSubmissionMode diagnosticsDataSubmissionMode;
        bool edgeAllowStartPagesModification;
        bool edgeBlockAccessToAboutFlags;
        bool edgeBlockAddressBarDropdown;
        bool edgeBlockAutofill;
        bool edgeBlockCompatibilityList;
        bool edgeBlockDeveloperTools;
        bool edgeBlocked;
        bool edgeBlockExtensions;
        bool edgeBlockInPrivateBrowsing;
        bool edgeBlockJavaScript;
        bool edgeBlockLiveTileDataCollection;
        bool edgeBlockPasswordManager;
        bool edgeBlockPopups;
        bool edgeBlockSearchSuggestions;
        bool edgeBlockSendingDoNotTrackHeader;
        bool edgeBlockSendingIntranetTrafficToInternetExplorer;
        bool edgeClearBrowsingDataOnExit;
        microsoft::graph::edgeCookiePolicy edgeCookiePolicy;
        bool edgeDisableFirstRunPage;
        QString edgeEnterpriseModeSiteListLocation;
        QString edgeFirstRunUrl;
        QList<QString> edgeHomepageUrls;
        bool edgeRequireSmartScreen;
        microsoft::graph::edgeSearchEngineBase edgeSearchEngine;
        bool edgeSendIntranetTrafficToInternetExplorer;
        bool edgeSyncFavoritesWithInternetExplorer;
        QString enterpriseCloudPrintDiscoveryEndPoint;
        int enterpriseCloudPrintDiscoveryMaxLimit;
        QString enterpriseCloudPrintMopriaDiscoveryResourceIdentifier;
        QString enterpriseCloudPrintOAuthAuthority;
        QString enterpriseCloudPrintOAuthClientIdentifier;
        QString enterpriseCloudPrintResourceIdentifier;
        bool experienceBlockDeviceDiscovery;
        bool experienceBlockErrorDialogWhenNoSIM;
        bool experienceBlockTaskSwitcher;
        bool gameDvrBlocked;
        bool internetSharingBlocked;
        bool locationServicesBlocked;
        bool lockScreenAllowTimeoutConfiguration;
        bool lockScreenBlockActionCenterNotifications;
        bool lockScreenBlockCortana;
        bool lockScreenBlockToastNotifications;
        int lockScreenTimeoutInSeconds;
        bool logonBlockFastUserSwitching;
        bool microsoftAccountBlocked;
        bool microsoftAccountBlockSettingsSync;
        bool networkProxyApplySettingsDeviceWide;
        QString networkProxyAutomaticConfigurationUrl;
        bool networkProxyDisableAutoDetect;
        microsoft::graph::windows10NetworkProxyServer networkProxyServer;
        bool nfcBlocked;
        bool oneDriveDisableFileSync;
        bool passwordBlockSimple;
        int passwordExpirationDays;
        int passwordMinimumCharacterSetCount;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeScreenTimeout;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::requiredPasswordType passwordRequiredType;
        bool passwordRequireWhenResumeFromIdleState;
        int passwordSignInFailureCountBeforeFactoryReset;
        QString personalizationDesktopImageUrl;
        QString personalizationLockScreenImageUrl;
        microsoft::graph::stateManagementSetting privacyAdvertisingId;
        bool privacyAutoAcceptPairingAndConsentPrompts;
        bool privacyBlockInputPersonalization;
        bool resetProtectionModeBlocked;
        microsoft::graph::safeSearchFilterType safeSearchFilter;
        bool screenCaptureBlocked;
        bool searchBlockDiacritics;
        bool searchDisableAutoLanguageDetection;
        bool searchDisableIndexerBackoff;
        bool searchDisableIndexingEncryptedItems;
        bool searchDisableIndexingRemovableDrive;
        bool searchEnableAutomaticIndexSizeManangement;
        bool searchEnableRemoteQueries;
        bool settingsBlockAccountsPage;
        bool settingsBlockAddProvisioningPackage;
        bool settingsBlockAppsPage;
        bool settingsBlockChangeLanguage;
        bool settingsBlockChangePowerSleep;
        bool settingsBlockChangeRegion;
        bool settingsBlockChangeSystemTime;
        bool settingsBlockDevicesPage;
        bool settingsBlockEaseOfAccessPage;
        bool settingsBlockEditDeviceName;
        bool settingsBlockGamingPage;
        bool settingsBlockNetworkInternetPage;
        bool settingsBlockPersonalizationPage;
        bool settingsBlockPrivacyPage;
        bool settingsBlockRemoveProvisioningPackage;
        bool settingsBlockSettingsApp;
        bool settingsBlockSystemPage;
        bool settingsBlockTimeLanguagePage;
        bool settingsBlockUpdateSecurityPage;
        bool sharedUserAppDataAllowed;
        bool smartScreenBlockPromptOverride;
        bool smartScreenBlockPromptOverrideForFiles;
        bool smartScreenEnableAppInstallControl;
        bool startBlockUnpinningAppsFromTaskbar;
        microsoft::graph::windowsStartMenuAppListVisibilityType startMenuAppListVisibility;
        bool startMenuHideChangeAccountSettings;
        bool startMenuHideFrequentlyUsedApps;
        bool startMenuHideHibernate;
        bool startMenuHideLock;
        bool startMenuHidePowerButton;
        bool startMenuHideRecentJumpLists;
        bool startMenuHideRecentlyAddedApps;
        bool startMenuHideRestartOptions;
        bool startMenuHideShutDown;
        bool startMenuHideSignOut;
        bool startMenuHideSleep;
        bool startMenuHideSwitchAccount;
        bool startMenuHideUserTile;
        QByteArray startMenuLayoutEdgeAssetsXml;
        QByteArray startMenuLayoutXml;
        microsoft::graph::windowsStartMenuModeType startMenuMode;
        microsoft::graph::visibilitySetting startMenuPinnedFolderDocuments;
        microsoft::graph::visibilitySetting startMenuPinnedFolderDownloads;
        microsoft::graph::visibilitySetting startMenuPinnedFolderFileExplorer;
        microsoft::graph::visibilitySetting startMenuPinnedFolderHomeGroup;
        microsoft::graph::visibilitySetting startMenuPinnedFolderMusic;
        microsoft::graph::visibilitySetting startMenuPinnedFolderNetwork;
        microsoft::graph::visibilitySetting startMenuPinnedFolderPersonalFolder;
        microsoft::graph::visibilitySetting startMenuPinnedFolderPictures;
        microsoft::graph::visibilitySetting startMenuPinnedFolderSettings;
        microsoft::graph::visibilitySetting startMenuPinnedFolderVideos;
        bool storageBlockRemovableStorage;
        bool storageRequireMobileDeviceEncryption;
        bool storageRestrictAppDataToSystemVolume;
        bool storageRestrictAppInstallToSystemVolume;
        bool tenantLockdownRequireNetworkDuringOutOfBoxExperience;
        bool usbBlocked;
        bool voiceRecordingBlocked;
        bool webRtcBlockLocalhostIpAddress;
        bool wiFiBlockAutomaticConnectHotspots;
        bool wiFiBlocked;
        bool wiFiBlockManualConfiguration;
        int wiFiScanInterval;
        bool windowsSpotlightBlockConsumerSpecificFeatures;
        bool windowsSpotlightBlocked;
        bool windowsSpotlightBlockOnActionCenter;
        bool windowsSpotlightBlockTailoredExperiences;
        bool windowsSpotlightBlockThirdPartyNotifications;
        bool windowsSpotlightBlockWelcomeExperience;
        bool windowsSpotlightBlockWindowsTips;
        microsoft::graph::windowsSpotlightEnablementSettings windowsSpotlightConfigureOnLockScreen;
        bool windowsStoreBlockAutoUpdate;
        bool windowsStoreBlocked;
        bool windowsStoreEnablePrivateStoreOnly;
        bool wirelessDisplayBlockProjectionToThisDevice;
        bool wirelessDisplayBlockUserInputFromReceiver;
        bool wirelessDisplayRequirePinForPairing;
    };

    struct windows10MobileCompliancePolicy : graph::deviceCompliancePolicy {
        bool bitLockerEnabled;
        bool codeIntegrityEnabled;
        bool earlyLaunchAntiMalwareDriverEnabled;
        QString osMaximumVersion;
        QString osMinimumVersion;
        bool passwordBlockSimple;
        int passwordExpirationDays;
        int passwordMinimumCharacterSetCount;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeLock;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::requiredPasswordType passwordRequiredType;
        bool passwordRequireToUnlockFromIdle;
        bool secureBootEnabled;
        bool storageRequireEncryption;
    };

    struct windows10SecureAssessmentConfiguration : graph::deviceConfiguration {
        bool allowPrinting;
        bool allowScreenCapture;
        bool allowTextSuggestion;
        QString configurationAccount;
        QString launchUri;
    };

    struct windows10TeamGeneralConfiguration : graph::deviceConfiguration {
        bool azureOperationalInsightsBlockTelemetry;
        QString azureOperationalInsightsWorkspaceId;
        QString azureOperationalInsightsWorkspaceKey;
        bool connectAppBlockAutoLaunch;
        bool maintenanceWindowBlocked;
        int maintenanceWindowDurationInHours;
        QTime maintenanceWindowStartTime;
        bool miracastBlocked;
        microsoft::graph::miracastChannel miracastChannel;
        bool miracastRequirePin;
        bool settingsBlockMyMeetingsAndFiles;
        bool settingsBlockSessionResume;
        bool settingsBlockSigninSuggestions;
        int settingsDefaultVolume;
        int settingsScreenTimeoutInMinutes;
        int settingsSessionTimeoutInMinutes;
        int settingsSleepTimeoutInMinutes;
        QString welcomeScreenBackgroundImageUrl;
        bool welcomeScreenBlockAutomaticWakeUp;
        microsoft::graph::welcomeScreenMeetingInformation welcomeScreenMeetingInformation;
    };

    struct windows81CompliancePolicy : graph::deviceCompliancePolicy {
        QString osMaximumVersion;
        QString osMinimumVersion;
        bool passwordBlockSimple;
        int passwordExpirationDays;
        int passwordMinimumCharacterSetCount;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeLock;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::requiredPasswordType passwordRequiredType;
        bool storageRequireEncryption;
    };

    struct windows81GeneralConfiguration : graph::deviceConfiguration {
        bool accountsBlockAddingNonMicrosoftAccountEmail;
        bool applyOnlyToWindows81;
        bool browserBlockAutofill;
        bool browserBlockAutomaticDetectionOfIntranetSites;
        bool browserBlockEnterpriseModeAccess;
        bool browserBlockJavaScript;
        bool browserBlockPlugins;
        bool browserBlockPopups;
        bool browserBlockSendingDoNotTrackHeader;
        bool browserBlockSingleWordEntryOnIntranetSites;
        QString browserEnterpriseModeSiteListLocation;
        microsoft::graph::internetSiteSecurityLevel browserInternetSecurityLevel;
        microsoft::graph::siteSecurityLevel browserIntranetSecurityLevel;
        QString browserLoggingReportLocation;
        bool browserRequireFirewall;
        bool browserRequireFraudWarning;
        bool browserRequireHighSecurityForRestrictedSites;
        bool browserRequireSmartScreen;
        microsoft::graph::siteSecurityLevel browserTrustedSitesSecurityLevel;
        bool cellularBlockDataRoaming;
        bool diagnosticsBlockDataSubmission;
        bool passwordBlockPicturePasswordAndPin;
        int passwordExpirationDays;
        int passwordMinimumCharacterSetCount;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeScreenTimeout;
        int passwordPreviousPasswordBlockCount;
        microsoft::graph::requiredPasswordType passwordRequiredType;
        int passwordSignInFailureCountBeforeFactoryReset;
        bool storageRequireDeviceEncryption;
        bool updatesRequireAutomaticUpdates;
        microsoft::graph::windowsUserAccountControlSettings userAccountControlSettings;
        QString workFoldersUrl;
    };

    struct windowsDefenderAdvancedThreatProtectionConfiguration : graph::deviceConfiguration {
        bool allowSampleSharing;
        bool enableExpeditedTelemetryReporting;
    };

    struct windowsPhone81CompliancePolicy : graph::deviceCompliancePolicy {
        QString osMaximumVersion;
        QString osMinimumVersion;
        bool passwordBlockSimple;
        int passwordExpirationDays;
        int passwordMinimumCharacterSetCount;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeLock;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::requiredPasswordType passwordRequiredType;
        bool storageRequireEncryption;
    };

    struct windowsPhone81CustomConfiguration : graph::deviceConfiguration {
        QList<microsoft::graph::omaSetting> omaSettings;
    };

    struct windowsPhone81GeneralConfiguration : graph::deviceConfiguration {
        bool applyOnlyToWindowsPhone81;
        bool appsBlockCopyPaste;
        bool bluetoothBlocked;
        bool cameraBlocked;
        bool cellularBlockWifiTethering;
        microsoft::graph::appListType compliantAppListType;
        QList<microsoft::graph::appListItem> compliantAppsList;
        bool diagnosticDataBlockSubmission;
        bool emailBlockAddingAccounts;
        bool locationServicesBlocked;
        bool microsoftAccountBlocked;
        bool nfcBlocked;
        bool passwordBlockSimple;
        int passwordExpirationDays;
        int passwordMinimumCharacterSetCount;
        int passwordMinimumLength;
        int passwordMinutesOfInactivityBeforeScreenTimeout;
        int passwordPreviousPasswordBlockCount;
        bool passwordRequired;
        microsoft::graph::requiredPasswordType passwordRequiredType;
        int passwordSignInFailureCountBeforeFactoryReset;
        bool screenCaptureBlocked;
        bool storageBlockRemovableStorage;
        bool storageRequireEncryption;
        bool webBrowserBlocked;
        bool wifiBlockAutomaticConnectHotspots;
        bool wifiBlocked;
        bool wifiBlockHotspotReporting;
        bool windowsStoreBlocked;
    };

    struct windowsUpdateForBusinessConfiguration : graph::deviceConfiguration {
        microsoft::graph::automaticUpdateMode automaticUpdateMode;
        microsoft::graph::windowsUpdateType businessReadyUpdatesOnly;
        microsoft::graph::windowsDeliveryOptimizationMode deliveryOptimizationMode;
        bool driversExcluded;
        int featureUpdatesDeferralPeriodInDays;
        bool featureUpdatesPaused;
        QDateTime featureUpdatesPauseExpiryDateTime;
        microsoft::graph::windowsUpdateInstallScheduleType installationSchedule;
        bool microsoftUpdateServiceAllowed;
        microsoft::graph::prereleaseFeatures prereleaseFeatures;
        int qualityUpdatesDeferralPeriodInDays;
        bool qualityUpdatesPaused;
        QDateTime qualityUpdatesPauseExpiryDateTime;
    };

    struct deviceEnrollmentLimitConfiguration : graph::deviceEnrollmentConfiguration {
        int limit;
    };

    struct deviceEnrollmentPlatformRestrictionsConfiguration : graph::deviceEnrollmentConfiguration {
        microsoft::graph::deviceEnrollmentPlatformRestriction androidRestriction;
        microsoft::graph::deviceEnrollmentPlatformRestriction iosRestriction;
        microsoft::graph::deviceEnrollmentPlatformRestriction macOSRestriction;
        microsoft::graph::deviceEnrollmentPlatformRestriction windowsMobileRestriction;
        microsoft::graph::deviceEnrollmentPlatformRestriction windowsRestriction;
    };

    struct deviceEnrollmentWindowsHelloForBusinessConfiguration : graph::deviceEnrollmentConfiguration {
        microsoft::graph::enablement enhancedBiometricsState;
        int pinExpirationInDays;
        microsoft::graph::windowsHelloForBusinessPinUsage pinLowercaseCharactersUsage;
        int pinMaximumLength;
        int pinMinimumLength;
        int pinPreviousBlockCount;
        microsoft::graph::windowsHelloForBusinessPinUsage pinSpecialCharactersUsage;
        microsoft::graph::windowsHelloForBusinessPinUsage pinUppercaseCharactersUsage;
        bool remotePassportEnabled;
        bool securityDeviceRequired;
        microsoft::graph::enablement state;
        bool unlockWithBiometricsEnabled;
    };

    struct updateWindowsDeviceAccountActionParameter {
        bool calendarSyncEnabled;
        microsoft::graph::windowsDeviceAccount deviceAccount;
        QString deviceAccountEmail;
        QString exchangeServer;
        bool passwordRotationEnabled;
        QString sessionInitiationProtocalAddress;
    };

    struct importedWindowsAutopilotDeviceIdentityUpload : graph::entity {
        QDateTime createdDateTimeUtc;
        microsoft::graph::importedWindowsAutopilotDeviceIdentityUploadStatus status;
        QList<microsoft::graph::importedWindowsAutopilotDeviceIdentity> deviceIdentities;
    };

    struct androidManagedAppRegistration : graph::managedAppRegistration {
    };

    struct iosManagedAppRegistration : graph::managedAppRegistration {
    };

    struct serviceHealth : graph::entity {
        QString service;
        microsoft::graph::serviceHealthStatus status;
        QList<microsoft::graph::serviceHealthIssue> issues;
    };

    struct plannerTask : graph::entity {
        int activeChecklistItemCount;
        microsoft::graph::plannerAppliedCategories appliedCategories;
        QString assigneePriority;
        microsoft::graph::plannerAssignments assignments;
        QString bucketId;
        int checklistItemCount;
        microsoft::graph::identitySet completedBy;
        QDateTime completedDateTime;
        QString conversationThreadId;
        microsoft::graph::identitySet createdBy;
        QDateTime createdDateTime;
        QDateTime dueDateTime;
        bool hasDescription;
        QString orderHint;
        int percentComplete;
        QString planId;
        microsoft::graph::plannerPreviewType previewType;
        int referenceCount;
        QDateTime startDateTime;
        QString title;
        std::unique_ptr<microsoft::graph::plannerAssignedToTaskBoardTaskFormat> assignedToTaskBoardFormat;
        std::unique_ptr<microsoft::graph::plannerBucketTaskBoardTaskFormat> bucketTaskBoardFormat;
        std::unique_ptr<microsoft::graph::plannerTaskDetails> details;
        std::unique_ptr<microsoft::graph::plannerProgressTaskBoardTaskFormat> progressTaskBoardFormat;
    };

    struct notebookLinks {
        microsoft::graph::externalLink oneNoteClientUrl;
        microsoft::graph::externalLink oneNoteWebUrl;
    };

    struct onenotePagePreview {
        microsoft::graph::onenotePagePreviewLinks links;
        QString previewText;
    };

    struct recentNotebook {
        QString displayName;
        QDateTime lastAccessedTime;
        microsoft::graph::recentNotebookLinks links;
        microsoft::graph::onenoteSourceService sourceService;
    };

    struct printJobConfiguration {
        bool collate;
        microsoft::graph::printColorMode colorMode;
        int copies;
        int dpi;
        microsoft::graph::printDuplexMode duplexMode;
        microsoft::graph::printerFeedOrientation feedOrientation;
        QList<microsoft::graph::printFinishing> finishings;
        bool fitPdfToPage;
        QString inputBin;
        microsoft::graph::printMargin margin;
        QString mediaSize;
        QString mediaType;
        microsoft::graph::printMultipageLayout multipageLayout;
        microsoft::graph::printOrientation orientation;
        QString outputBin;
        QList<microsoft::graph::integerRange> pageRanges;
        int pagesPerSheet;
        microsoft::graph::printQuality quality;
        microsoft::graph::printScaling scaling;
    };

    struct printService : graph::entity {
        QList<microsoft::graph::printServiceEndpoint> endpoints;
    };

    struct participantJoiningNotification : graph::entity {
        std::unique_ptr<microsoft::graph::call> call;
    };

    struct participantLeftNotification : graph::entity {
        QString participantId;
        std::unique_ptr<microsoft::graph::call> call;
    };

    struct changeNotification {
        microsoft::graph::changeType changeType;
        QString clientState;
        microsoft::graph::changeNotificationEncryptedContent encryptedContent;
        QString id;
        microsoft::graph::lifecycleEventType lifecycleEvent;
        QString resource;
        microsoft::graph::resourceData resourceData;
        QDateTime subscriptionExpirationDateTime;
        QGuid subscriptionId;
        QGuid tenantId;
    };

    struct changeNotificationCollection {
        QList<QString> validationTokens;
        QList<microsoft::graph::changeNotification> value;
    };

    struct chatMessageMentionedIdentitySet : graph::identitySet {
        microsoft::graph::teamworkConversationIdentity conversation;
    };

    struct chatMessagePolicyViolation {
        microsoft::graph::chatMessagePolicyViolationDlpActionTypes dlpAction;
        QString justificationText;
        microsoft::graph::chatMessagePolicyViolationPolicyTip policyTip;
        microsoft::graph::chatMessagePolicyViolationUserActionTypes userAction;
        microsoft::graph::chatMessagePolicyViolationVerdictDetailsTypes verdictDetails;
    };

    struct chatMessageReaction {
        QDateTime createdDateTime;
        QString reactionType;
        microsoft::graph::chatMessageReactionIdentitySet user;
    };

    struct teamsAppDefinition : graph::entity {
        microsoft::graph::identitySet createdBy;
        QString description;
        QString displayName;
        QDateTime lastModifiedDateTime;
        microsoft::graph::teamsAppPublishingState publishingState;
        QString shortDescription;
        QString teamsAppId;
        QString version;
        std::unique_ptr<microsoft::graph::teamworkBot> bot;
    };

    struct workforceIntegration : graph::changeTrackedEntity {
        int apiVersion;
        QString displayName;
        microsoft::graph::workforceIntegrationEncryption encryption;
        bool isActive;
        microsoft::graph::workforceIntegrationSupportedEntities supportedEntities;
        QString url;
    };

    struct shiftItem : graph::scheduleEntity {
        QList<microsoft::graph::shiftActivity> activities;
        QString displayName;
        QString notes;
    };

    struct openShiftItem : graph::shiftItem {
        int openSlotCount;
    };

    struct shiftAvailability {
        microsoft::graph::patternedRecurrence recurrence;
        QList<microsoft::graph::timeRange> timeSlots;
        QString timeZone;
    };

    struct openShift : graph::changeTrackedEntity {
        microsoft::graph::openShiftItem draftOpenShift;
        QString schedulingGroupId;
        microsoft::graph::openShiftItem sharedOpenShift;
    };

    struct shift : graph::changeTrackedEntity {
        microsoft::graph::shiftItem draftShift;
        QString schedulingGroupId;
        microsoft::graph::shiftItem sharedShift;
        QString userId;
    };

    struct emailFileAssessmentRequest : graph::threatAssessmentRequest {
        QString contentData;
        microsoft::graph::mailDestinationRoutingReason destinationRoutingReason;
        QString recipientEmail;
    };

    struct fileAssessmentRequest : graph::threatAssessmentRequest {
        QString contentData;
        QString fileName;
    };

    struct mailAssessmentRequest : graph::threatAssessmentRequest {
        microsoft::graph::mailDestinationRoutingReason destinationRoutingReason;
        QString messageUri;
        QString recipientEmail;
    };

    struct urlAssessmentRequest : graph::threatAssessmentRequest {
        QString url;
    };

    struct todoTask : graph::entity {
        microsoft::graph::itemBody body;
        QDateTime bodyLastModifiedDateTime;
        microsoft::graph::dateTimeTimeZone completedDateTime;
        QDateTime createdDateTime;
        microsoft::graph::dateTimeTimeZone dueDateTime;
        microsoft::graph::importance importance;
        bool isReminderOn;
        QDateTime lastModifiedDateTime;
        microsoft::graph::patternedRecurrence recurrence;
        microsoft::graph::dateTimeTimeZone reminderDateTime;
        microsoft::graph::taskStatus status;
        QString title;
        QList<microsoft::graph::extension> extensions;
        QList<microsoft::graph::linkedResource> linkedResources;
    };

} // namespace microsoft::graph

namespace microsoft::graph::callRecords {
    struct media {
        microsoft::graph::callRecords::deviceInfo calleeDevice;
        microsoft::graph::callRecords::networkInfo calleeNetwork;
        microsoft::graph::callRecords::deviceInfo callerDevice;
        microsoft::graph::callRecords::networkInfo callerNetwork;
        QString label;
        QList<microsoft::graph::callRecords::mediaStream> streams;
    };

    struct participantEndpoint : microsoft::graph::callRecords::endpoint {
        microsoft::graph::callRecords::userFeedback feedback;
        microsoft::graph::identitySet identity;
    };

    struct segment : graph::entity {
        microsoft::graph::callRecords::endpoint callee;
        microsoft::graph::callRecords::endpoint caller;
        QDateTime endDateTime;
        microsoft::graph::callRecords::failureInfo failureInfo;
        QList<microsoft::graph::callRecords::media> media;
        QDateTime startDateTime;
    };

} // namespace microsoft::graph::callRecords

namespace microsoft::graph::externalConnectors {
    struct connectionOperation : graph::entity {
        microsoft::graph::publicError error;
        microsoft::graph::externalConnectors::connectionOperationStatus status;
    };

    struct externalGroup : graph::entity {
        QString description;
        QString displayName;
        QList<microsoft::graph::externalConnectors::identity> members;
    };

} // namespace microsoft::graph::externalConnectors

namespace microsoft::graph {
    struct auditLogRoot : graph::entity {
        QList<microsoft::graph::directoryAudit> directoryAudits;
        QList<microsoft::graph::provisioningObjectSummary> provisioning;
        QList<microsoft::graph::restrictedSignIn> restrictedSignIns;
        QList<microsoft::graph::signIn> signIns;
    };

    struct contactFolder : graph::entity {
        QString displayName;
        QString parentFolderId;
        QList<microsoft::graph::contactFolder> childFolders;
        QList<microsoft::graph::contact> contacts;
        QList<microsoft::graph::multiValueLegacyExtendedProperty> multiValueExtendedProperties;
        QList<microsoft::graph::singleValueLegacyExtendedProperty> singleValueExtendedProperties;
    };

    struct mailFolder : graph::entity {
        int childFolderCount;
        QString displayName;
        bool isHidden;
        QString parentFolderId;
        int totalItemCount;
        int unreadItemCount;
        QList<microsoft::graph::mailFolder> childFolders;
        QList<microsoft::graph::messageRule> messageRules;
        QList<microsoft::graph::message> messages;
        QList<microsoft::graph::multiValueLegacyExtendedProperty> multiValueExtendedProperties;
        QList<microsoft::graph::singleValueLegacyExtendedProperty> singleValueExtendedProperties;
    };

    struct person : graph::entity {
        QString birthday;
        QString companyName;
        QString department;
        QString displayName;
        QString givenName;
        QString imAddress;
        bool isFavorite;
        QString jobTitle;
        QString officeLocation;
        QString personNotes;
        microsoft::graph::personType personType;
        QList<microsoft::graph::phone> phones;
        QList<microsoft::graph::location> postalAddresses;
        QString profession;
        QList<microsoft::graph::scoredEmailAddress> scoredEmailAddresses;
        QString surname;
        QString userPrincipalName;
        QList<microsoft::graph::website> websites;
        QString yomiCompany;
    };

    struct managedDevice : graph::entity {
        QString activationLockBypassCode;
        QString androidSecurityPatchLevel;
        QString azureADDeviceId;
        bool azureADRegistered;
        QDateTime complianceGracePeriodExpirationDateTime;
        microsoft::graph::complianceState complianceState;
        microsoft::graph::configurationManagerClientEnabledFeatures configurationManagerClientEnabledFeatures;
        QList<microsoft::graph::deviceActionResult> deviceActionResults;
        QString deviceCategoryDisplayName;
        microsoft::graph::deviceEnrollmentType deviceEnrollmentType;
        microsoft::graph::deviceHealthAttestationState deviceHealthAttestationState;
        QString deviceName;
        microsoft::graph::deviceRegistrationState deviceRegistrationState;
        bool easActivated;
        QDateTime easActivationDateTime;
        QString easDeviceId;
        QString emailAddress;
        QDateTime enrolledDateTime;
        QString ethernetMacAddress;
        microsoft::graph::deviceManagementExchangeAccessState exchangeAccessState;
        microsoft::graph::deviceManagementExchangeAccessStateReason exchangeAccessStateReason;
        QDateTime exchangeLastSuccessfulSyncDateTime;
        long long freeStorageSpaceInBytes;
        QString iccid;
        QString imei;
        bool isEncrypted;
        bool isSupervised;
        QString jailBroken;
        QDateTime lastSyncDateTime;
        QString managedDeviceName;
        microsoft::graph::managedDeviceOwnerType managedDeviceOwnerType;
        microsoft::graph::managementAgentType managementAgent;
        QString manufacturer;
        QString meid;
        QString model;
        QString notes;
        QString operatingSystem;
        QString osVersion;
        microsoft::graph::managedDevicePartnerReportedHealthState partnerReportedThreatState;
        QString phoneNumber;
        long long physicalMemoryInBytes;
        QString remoteAssistanceSessionErrorDetails;
        QString remoteAssistanceSessionUrl;
        QString serialNumber;
        QString subscriberCarrier;
        long long totalStorageSpaceInBytes;
        QString udid;
        QString userDisplayName;
        QString userId;
        QString userPrincipalName;
        QString wiFiMacAddress;
        QList<microsoft::graph::deviceCompliancePolicyState> deviceCompliancePolicyStates;
        QList<microsoft::graph::deviceConfigurationState> deviceConfigurationStates;
        std::unique_ptr<microsoft::graph::deviceCategory> deviceCategory;
    };

    struct application : graph::directoryObject {
        QList<microsoft::graph::addIn> addIns;
        microsoft::graph::apiApplication api;
        QString appId;
        QString applicationTemplateId;
        QList<microsoft::graph::appRole> appRoles;
        QDateTime createdDateTime;
        QString description;
        QString disabledByMicrosoftStatus;
        QString displayName;
        QString groupMembershipClaims;
        QList<QString> identifierUris;
        microsoft::graph::informationalUrl info;
        bool isDeviceOnlyAuthSupported;
        bool isFallbackPublicClient;
        QList<microsoft::graph::keyCredential> keyCredentials;
        QByteArray logo;
        QString notes;
        bool oauth2RequirePostResponse;
        microsoft::graph::optionalClaims optionalClaims;
        microsoft::graph::parentalControlSettings parentalControlSettings;
        QList<microsoft::graph::passwordCredential> passwordCredentials;
        microsoft::graph::publicClientApplication publicClient;
        QString publisherDomain;
        QList<microsoft::graph::requiredResourceAccess> requiredResourceAccess;
        QString signInAudience;
        microsoft::graph::spaApplication spa;
        QList<QString> tags;
        QGuid tokenEncryptionKeyId;
        microsoft::graph::verifiedPublisher verifiedPublisher;
        microsoft::graph::webApplication web;
        std::unique_ptr<microsoft::graph::directoryObject> createdOnBehalfOf;
        QList<microsoft::graph::extensionProperty> extensionProperties;
        QList<microsoft::graph::homeRealmDiscoveryPolicy> homeRealmDiscoveryPolicies;
        QList<microsoft::graph::directoryObject> owners;
        QList<microsoft::graph::tokenIssuancePolicy> tokenIssuancePolicies;
        QList<microsoft::graph::tokenLifetimePolicy> tokenLifetimePolicies;
    };

    struct conditionalAccessPolicy : graph::entity {
        microsoft::graph::conditionalAccessConditionSet conditions;
        QDateTime createdDateTime;
        QString description;
        QString displayName;
        microsoft::graph::conditionalAccessGrantControls grantControls;
        QDateTime modifiedDateTime;
        microsoft::graph::conditionalAccessSessionControls sessionControls;
        microsoft::graph::conditionalAccessPolicyState state;
    };

    struct informationProtection : graph::entity {
        std::unique_ptr<microsoft::graph::bitlocker> bitlocker;
        QList<microsoft::graph::threatAssessmentRequest> threatAssessmentRequests;
    };

    struct conversation : graph::entity {
        bool hasAttachments;
        QDateTime lastDeliveredDateTime;
        QString preview;
        QString topic;
        QList<QString> uniqueSenders;
        QList<microsoft::graph::conversationThread> threads;
    };

    struct b2xIdentityUserFlow : graph::identityUserFlow {
        microsoft::graph::userFlowApiConnectorConfiguration apiConnectorConfiguration;
        QList<microsoft::graph::identityProvider> identityProviders;
        QList<microsoft::graph::userFlowLanguageConfiguration> languages;
        QList<microsoft::graph::identityUserFlowAttributeAssignment> userAttributeAssignments;
        QList<microsoft::graph::identityProviderBase> userFlowIdentityProviders;
    };

    struct conditionalAccessRoot : graph::entity {
        QList<microsoft::graph::namedLocation> namedLocations;
        QList<microsoft::graph::conditionalAccessPolicy> policies;
    };

    struct organization : graph::directoryObject {
        QList<microsoft::graph::assignedPlan> assignedPlans;
        QList<QString> businessPhones;
        QString city;
        QString country;
        QString countryLetterCode;
        QDateTime createdDateTime;
        QString displayName;
        QList<QString> marketingNotificationEmails;
        QDateTime onPremisesLastSyncDateTime;
        bool onPremisesSyncEnabled;
        QString postalCode;
        QString preferredLanguage;
        microsoft::graph::privacyProfile privacyProfile;
        QList<microsoft::graph::provisionedPlan> provisionedPlans;
        QList<QString> securityComplianceNotificationMails;
        QList<QString> securityComplianceNotificationPhones;
        QString state;
        QString street;
        QList<QString> technicalNotificationMails;
        QString tenantType;
        QList<microsoft::graph::verifiedDomain> verifiedDomains;
        microsoft::graph::mdmAuthority mobileDeviceManagementAuthority;
        std::unique_ptr<microsoft::graph::organizationalBranding> branding;
        QList<microsoft::graph::certificateBasedAuthConfiguration> certificateBasedAuthConfiguration;
        QList<microsoft::graph::extension> extensions;
    };

    struct rbacApplication : graph::entity {
        QList<microsoft::graph::unifiedRoleAssignment> roleAssignments;
        QList<microsoft::graph::unifiedRoleDefinition> roleDefinitions;
    };

    struct roleManagement {
        std::unique_ptr<microsoft::graph::rbacApplication> directory;
    };

    struct educationAssignment : graph::entity {
        microsoft::graph::educationAddedStudentAction addedStudentAction;
        bool allowLateSubmissions;
        bool allowStudentsToAddResourcesToSubmission;
        QDateTime assignDateTime;
        QDateTime assignedDateTime;
        microsoft::graph::educationAssignmentRecipient assignTo;
        QString classId;
        QDateTime closeDateTime;
        microsoft::graph::identitySet createdBy;
        QDateTime createdDateTime;
        QString displayName;
        QDateTime dueDateTime;
        microsoft::graph::educationAssignmentGradeType grading;
        microsoft::graph::educationItemBody instructions;
        microsoft::graph::identitySet lastModifiedBy;
        QDateTime lastModifiedDateTime;
        QString notificationChannelUrl;
        QString resourcesFolderUrl;
        microsoft::graph::educationAssignmentStatus status;
        QString webUrl;
        QList<microsoft::graph::educationCategory> categories;
        QList<microsoft::graph::educationAssignmentResource> resources;
        std::unique_ptr<microsoft::graph::educationRubric> rubric;
        QList<microsoft::graph::educationSubmission> submissions;
    };

    struct workbookChartSeries : graph::entity {
        QString name;
        std::unique_ptr<microsoft::graph::workbookChartSeriesFormat> format;
        QList<microsoft::graph::workbookChartPoint> points;
    };

    struct workbookChartAxis : graph::entity {
        microsoft::graph::Json majorUnit;
        microsoft::graph::Json maximum;
        microsoft::graph::Json minimum;
        microsoft::graph::Json minorUnit;
        std::unique_ptr<microsoft::graph::workbookChartAxisFormat> format;
        std::unique_ptr<microsoft::graph::workbookChartGridlines> majorGridlines;
        std::unique_ptr<microsoft::graph::workbookChartGridlines> minorGridlines;
        std::unique_ptr<microsoft::graph::workbookChartAxisTitle> title;
    };

    struct locationConstraint {
        bool isRequired;
        QList<microsoft::graph::locationConstraintItem> locations;
        bool suggestLocation;
    };

    struct mailSearchFolder : graph::mailFolder {
        QString filterQuery;
        bool includeNestedFolders;
        bool isSupported;
        QList<QString> sourceFolderIds;
    };

    struct userConsentRequest : graph::request {
        QString reason;
        std::unique_ptr<microsoft::graph::approval> approval;
    };

    struct agreementFile : graph::agreementFileProperties {
        QList<microsoft::graph::agreementFileLocalization> localizations;
    };

    struct mobileLobApp : graph::mobileApp {
        QString committedContentVersion;
        QString fileName;
        long long size;
        QList<microsoft::graph::mobileAppContent> contentVersions;
    };

    struct androidLobApp : graph::mobileLobApp {
        microsoft::graph::androidMinimumOperatingSystem minimumSupportedOperatingSystem;
        QString packageId;
        QString versionCode;
        QString versionName;
    };

    struct deviceAppManagement : graph::entity {
        bool isEnabledForMicrosoftStoreForBusiness;
        QString microsoftStoreForBusinessLanguage;
        QDateTime microsoftStoreForBusinessLastCompletedApplicationSyncTime;
        QDateTime microsoftStoreForBusinessLastSuccessfulSyncDateTime;
        QList<microsoft::graph::managedEBook> managedEBooks;
        QList<microsoft::graph::mobileAppCategory> mobileAppCategories;
        QList<microsoft::graph::managedDeviceMobileAppConfiguration> mobileAppConfigurations;
        QList<microsoft::graph::mobileApp> mobileApps;
        QList<microsoft::graph::vppToken> vppTokens;
        QList<microsoft::graph::androidManagedAppProtection> androidManagedAppProtections;
        QList<microsoft::graph::defaultManagedAppProtection> defaultManagedAppProtections;
        QList<microsoft::graph::iosManagedAppProtection> iosManagedAppProtections;
        QList<microsoft::graph::managedAppPolicy> managedAppPolicies;
        QList<microsoft::graph::managedAppRegistration> managedAppRegistrations;
        QList<microsoft::graph::managedAppStatus> managedAppStatuses;
        QList<microsoft::graph::mdmWindowsInformationProtectionPolicy> mdmWindowsInformationProtectionPolicies;
        QList<microsoft::graph::targetedManagedAppConfiguration> targetedManagedAppConfigurations;
        QList<microsoft::graph::windowsInformationProtectionPolicy> windowsInformationProtectionPolicies;
    };

    struct iosLobApp : graph::mobileLobApp {
        microsoft::graph::iosDeviceType applicableDeviceType;
        QString buildNumber;
        QString bundleId;
        QDateTime expirationDateTime;
        microsoft::graph::iosMinimumOperatingSystem minimumSupportedOperatingSystem;
        QString versionNumber;
    };

    struct managedMobileLobApp : graph::managedApp {
        QString committedContentVersion;
        QString fileName;
        long long size;
        QList<microsoft::graph::mobileAppContent> contentVersions;
    };

    struct managedAndroidLobApp : graph::managedMobileLobApp {
        microsoft::graph::androidMinimumOperatingSystem minimumSupportedOperatingSystem;
        QString packageId;
        QString versionCode;
        QString versionName;
    };

    struct managedIOSLobApp : graph::managedMobileLobApp {
        microsoft::graph::iosDeviceType applicableDeviceType;
        QString buildNumber;
        QString bundleId;
        QDateTime expirationDateTime;
        microsoft::graph::iosMinimumOperatingSystem minimumSupportedOperatingSystem;
        QString versionNumber;
    };

    struct win32LobApp : graph::mobileLobApp {
        microsoft::graph::windowsArchitecture applicableArchitectures;
        QString installCommandLine;
        microsoft::graph::win32LobAppInstallExperience installExperience;
        int minimumCpuSpeedInMHz;
        int minimumFreeDiskSpaceInMB;
        int minimumMemoryInMB;
        int minimumNumberOfProcessors;
        QString minimumSupportedWindowsRelease;
        microsoft::graph::win32LobAppMsiInformation msiInformation;
        QList<microsoft::graph::win32LobAppReturnCode> returnCodes;
        QList<microsoft::graph::win32LobAppRule> rules;
        QString setupFilePath;
        QString uninstallCommandLine;
    };

    struct windowsMobileMSI : graph::mobileLobApp {
        QString commandLine;
        bool ignoreVersionDetection;
        QString productCode;
        QString productVersion;
    };

    struct windowsUniversalAppX : graph::mobileLobApp {
        microsoft::graph::windowsArchitecture applicableArchitectures;
        microsoft::graph::windowsDeviceType applicableDeviceTypes;
        QString identityName;
        QString identityPublisherHash;
        QString identityResourceIdentifier;
        QString identityVersion;
        bool isBundle;
        microsoft::graph::windowsMinimumOperatingSystem minimumSupportedOperatingSystem;
    };

    struct detectedApp : graph::entity {
        int deviceCount;
        QString displayName;
        long long sizeInByte;
        QString version;
        QList<microsoft::graph::managedDevice> managedDevices;
    };

    struct serviceAnnouncement : graph::entity {
        QList<microsoft::graph::serviceHealth> healthOverviews;
        QList<microsoft::graph::serviceHealthIssue> issues;
        QList<microsoft::graph::serviceUpdateMessage> messages;
    };

    struct plannerBucket : graph::entity {
        QString name;
        QString orderHint;
        QString planId;
        QList<microsoft::graph::plannerTask> tasks;
    };

    struct plannerPlan : graph::entity {
        microsoft::graph::identitySet createdBy;
        QDateTime createdDateTime;
        QString owner;
        QString title;
        QList<microsoft::graph::plannerBucket> buckets;
        std::unique_ptr<microsoft::graph::plannerPlanDetails> details;
        QList<microsoft::graph::plannerTask> tasks;
    };

    struct shiftPreferences : graph::changeTrackedEntity {
        QList<microsoft::graph::shiftAvailability> availability;
    };

    struct CopyNotebookModel {
        QString createdBy;
        microsoft::graph::identitySet createdByIdentity;
        QDateTime createdTime;
        QString id;
        bool isDefault;
        bool isShared;
        QString lastModifiedBy;
        microsoft::graph::identitySet lastModifiedByIdentity;
        QDateTime lastModifiedTime;
        microsoft::graph::notebookLinks links;
        QString name;
        QString sectionGroupsUrl;
        QString sectionsUrl;
        QString self;
        microsoft::graph::onenoteUserRole userRole;
    };

    struct chatMessageMention {
        int id;
        microsoft::graph::chatMessageMentionedIdentitySet mentioned;
        QString mentionText;
    };

    struct teamsApp : graph::entity {
        QString displayName;
        microsoft::graph::teamsAppDistributionMethod distributionMethod;
        QString externalId;
        QList<microsoft::graph::teamsAppDefinition> appDefinitions;
    };

    struct chatMessage : graph::entity {
        QList<microsoft::graph::chatMessageAttachment> attachments;
        microsoft::graph::itemBody body;
        microsoft::graph::channelIdentity channelIdentity;
        QString chatId;
        QDateTime createdDateTime;
        QDateTime deletedDateTime;
        QString etag;
        microsoft::graph::chatMessageFromIdentitySet from;
        microsoft::graph::chatMessageImportance importance;
        QDateTime lastEditedDateTime;
        QDateTime lastModifiedDateTime;
        QString locale;
        QList<microsoft::graph::chatMessageMention> mentions;
        microsoft::graph::chatMessageType messageType;
        microsoft::graph::chatMessagePolicyViolation policyViolation;
        QList<microsoft::graph::chatMessageReaction> reactions;
        QString replyToId;
        QString subject;
        QString summary;
        QString webUrl;
        QList<microsoft::graph::chatMessageHostedContent> hostedContents;
        QList<microsoft::graph::chatMessage> replies;
    };

    struct teamsTab : graph::entity {
        microsoft::graph::teamsTabConfiguration configuration;
        QString displayName;
        QString webUrl;
        std::unique_ptr<microsoft::graph::teamsApp> teamsApp;
    };

    struct teamsAppInstallation : graph::entity {
        std::unique_ptr<microsoft::graph::teamsApp> teamsApp;
        std::unique_ptr<microsoft::graph::teamsAppDefinition> teamsAppDefinition;
    };

    struct schedule : graph::entity {
        bool enabled;
        bool offerShiftRequestsEnabled;
        bool openShiftsEnabled;
        microsoft::graph::operationStatus provisionStatus;
        QString provisionStatusCode;
        bool swapShiftsRequestsEnabled;
        bool timeClockEnabled;
        bool timeOffRequestsEnabled;
        QString timeZone;
        QList<QString> workforceIntegrationIds;
        QList<microsoft::graph::offerShiftRequest> offerShiftRequests;
        QList<microsoft::graph::openShiftChangeRequest> openShiftChangeRequests;
        QList<microsoft::graph::openShift> openShifts;
        QList<microsoft::graph::schedulingGroup> schedulingGroups;
        QList<microsoft::graph::shift> shifts;
        QList<microsoft::graph::swapShiftsChangeRequest> swapShiftsChangeRequests;
        QList<microsoft::graph::timeOffReason> timeOffReasons;
        QList<microsoft::graph::timeOffRequest> timeOffRequests;
        QList<microsoft::graph::timeOff> timesOff;
    };

    struct teamwork : graph::entity {
        QList<microsoft::graph::workforceIntegration> workforceIntegrations;
    };

    struct todoTaskList : graph::entity {
        QString displayName;
        bool isOwner;
        bool isShared;
        microsoft::graph::wellknownListName wellknownListName;
        QList<microsoft::graph::extension> extensions;
        QList<microsoft::graph::todoTask> tasks;
    };

} // namespace microsoft::graph

namespace microsoft::graph::callRecords {
    struct session : graph::entity {
        microsoft::graph::callRecords::endpoint callee;
        microsoft::graph::callRecords::endpoint caller;
        QDateTime endDateTime;
        microsoft::graph::callRecords::failureInfo failureInfo;
        QList<microsoft::graph::callRecords::modality> modalities;
        QDateTime startDateTime;
        QList<microsoft::graph::callRecords::segment> segments;
    };

} // namespace microsoft::graph::callRecords

namespace microsoft::graph::externalConnectors {
    struct externalConnection : graph::entity {
        microsoft::graph::externalConnectors::configuration configuration;
        QString description;
        QString name;
        microsoft::graph::externalConnectors::connectionState state;
        QList<microsoft::graph::externalConnectors::externalGroup> groups;
        QList<microsoft::graph::externalConnectors::externalItem> items;
        QList<microsoft::graph::externalConnectors::connectionOperation> operations;
        std::unique_ptr<microsoft::graph::externalConnectors::schema> schema;
    };

} // namespace microsoft::graph::externalConnectors

namespace microsoft::graph {
    struct plannerUser : graph::entity {
        QList<microsoft::graph::plannerPlan> plans;
        QList<microsoft::graph::plannerTask> tasks;
    };

    struct userSettings : graph::entity {
        bool contributionToContentDiscoveryAsOrganizationDisabled;
        bool contributionToContentDiscoveryDisabled;
        std::unique_ptr<microsoft::graph::shiftPreferences> shiftPreferences;
    };

    struct chat : graph::entity {
        microsoft::graph::chatType chatType;
        QDateTime createdDateTime;
        QDateTime lastUpdatedDateTime;
        QString topic;
        QList<microsoft::graph::teamsAppInstallation> installedApps;
        QList<microsoft::graph::conversationMember> members;
        QList<microsoft::graph::chatMessage> messages;
        QList<microsoft::graph::teamsTab> tabs;
    };

    struct todo : graph::entity {
        QList<microsoft::graph::todoTaskList> lists;
    };

    struct applicationServicePrincipal {
        std::unique_ptr<microsoft::graph::application> application;
        std::unique_ptr<microsoft::graph::servicePrincipal> servicePrincipal;
    };

    struct policyRoot : graph::entity {
        std::unique_ptr<microsoft::graph::authenticationMethodsPolicy> authenticationMethodsPolicy;
        std::unique_ptr<microsoft::graph::authenticationFlowsPolicy> authenticationFlowsPolicy;
        QList<microsoft::graph::activityBasedTimeoutPolicy> activityBasedTimeoutPolicies;
        std::unique_ptr<microsoft::graph::authorizationPolicy> authorizationPolicy;
        QList<microsoft::graph::claimsMappingPolicy> claimsMappingPolicies;
        QList<microsoft::graph::homeRealmDiscoveryPolicy> homeRealmDiscoveryPolicies;
        QList<microsoft::graph::permissionGrantPolicy> permissionGrantPolicies;
        QList<microsoft::graph::tokenIssuancePolicy> tokenIssuancePolicies;
        QList<microsoft::graph::tokenLifetimePolicy> tokenLifetimePolicies;
        QList<microsoft::graph::featureRolloutPolicy> featureRolloutPolicies;
        std::unique_ptr<microsoft::graph::adminConsentRequestPolicy> adminConsentRequestPolicy;
        QList<microsoft::graph::conditionalAccessPolicy> conditionalAccessPolicies;
        std::unique_ptr<microsoft::graph::identitySecurityDefaultsEnforcementPolicy> identitySecurityDefaultsEnforcementPolicy;
    };

    struct plannerGroup : graph::entity {
        QList<microsoft::graph::plannerPlan> plans;
    };

    struct identityContainer : graph::entity {
        std::unique_ptr<microsoft::graph::conditionalAccessRoot> conditionalAccess;
        QList<microsoft::graph::identityApiConnector> apiConnectors;
        QList<microsoft::graph::b2xIdentityUserFlow> b2xUserFlows;
        QList<microsoft::graph::identityProviderBase> identityProviders;
        QList<microsoft::graph::identityUserFlowAttribute> userFlowAttributes;
    };

    struct workbookChartAxes : graph::entity {
        std::unique_ptr<microsoft::graph::workbookChartAxis> categoryAxis;
        std::unique_ptr<microsoft::graph::workbookChartAxis> seriesAxis;
        std::unique_ptr<microsoft::graph::workbookChartAxis> valueAxis;
    };

    struct appConsentRequest : graph::entity {
        QString appDisplayName;
        QString appId;
        QList<microsoft::graph::appConsentRequestScope> pendingScopes;
        QList<microsoft::graph::userConsentRequest> userConsentRequests;
    };

    struct agreement : graph::entity {
        QString displayName;
        bool isPerDeviceAcceptanceRequired;
        bool isViewingBeforeAcceptanceRequired;
        microsoft::graph::termsExpiration termsExpiration;
        std::chrono::system_clock::duration userReacceptRequiredFrequency;
        QList<microsoft::graph::agreementAcceptance> acceptances;
        std::unique_ptr<microsoft::graph::agreementFile> file;
        QList<microsoft::graph::agreementFileLocalization> files;
    };

    struct admin {
        std::unique_ptr<microsoft::graph::serviceAnnouncement> serviceAnnouncement;
    };

    struct planner : graph::entity {
        QList<microsoft::graph::plannerBucket> buckets;
        QList<microsoft::graph::plannerPlan> plans;
        QList<microsoft::graph::plannerTask> tasks;
    };

    struct appCatalogs : graph::entity {
        QList<microsoft::graph::teamsApp> teamsApps;
    };

    struct userScopeTeamsAppInstallation : graph::teamsAppInstallation {
        std::unique_ptr<microsoft::graph::chat> chat;
    };

} // namespace microsoft::graph

namespace microsoft::graph::callRecords {
    struct callRecord : graph::entity {
        QDateTime endDateTime;
        QString joinWebUrl;
        QDateTime lastModifiedDateTime;
        QList<microsoft::graph::callRecords::modality> modalities;
        microsoft::graph::identitySet organizer;
        QList<microsoft::graph::identitySet> participants;
        QDateTime startDateTime;
        microsoft::graph::callRecords::callType type;
        long long version;
        QList<microsoft::graph::callRecords::session> sessions;
    };

} // namespace microsoft::graph::callRecords

namespace microsoft::graph::externalConnectors {
    struct external {
        QList<microsoft::graph::externalConnectors::externalConnection> connections;
    };

} // namespace microsoft::graph::externalConnectors

namespace microsoft::graph {
    struct userTeamwork : graph::entity {
        QList<microsoft::graph::userScopeTeamsAppInstallation> installedApps;
    };

    struct cloudCommunications : graph::entity {
        QList<microsoft::graph::call> calls;
        QList<microsoft::graph::callRecords::callRecord> callRecords;
        QList<microsoft::graph::onlineMeeting> onlineMeetings;
        QList<microsoft::graph::presence> presences;
    };

    struct appConsentApprovalRoute : graph::entity {
        QList<microsoft::graph::appConsentRequest> appConsentRequests;
    };

    struct termsOfUseContainer : graph::entity {
        QList<microsoft::graph::agreementAcceptance> agreementAcceptances;
        QList<microsoft::graph::agreement> agreements;
    };

    struct identityGovernance {
        std::unique_ptr<microsoft::graph::accessReviewSet> accessReviews;
        std::unique_ptr<microsoft::graph::appConsentApprovalRoute> appConsent;
        std::unique_ptr<microsoft::graph::entitlementManagement> entitlementManagement;
        std::unique_ptr<microsoft::graph::termsOfUseContainer> termsOfUse;
    };

} // namespace microsoft::graph

// clang-format on
