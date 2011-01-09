/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, IMPeople, IMServiceImpl, NSDate, NSData, NSAttributedString, NSDictionary, NSString, UIImage, NSMutableDictionary, IMHandle;



@interface IMAccount : NSObject <IMSystemMonitorListener>
{
    IMServiceImpl *_service;
    IMPeople *_buddyList;
    NSMutableDictionary *_imHandles;
    NSMutableDictionary *_inlineTransfers;
    IMHandle *_loginIMHandle;
    NSArray *_cachedAllowList;
    NSArray *_cachedBlockList;
    NSString *_loginID;
    NSString *_displayName;
    NSString *_uniqueID;
    NSDictionary *_data;
    NSMutableDictionary *_dataChanges;
    NSDictionary *_profile;
    NSMutableDictionary *_profileChanges;
    NSDictionary *_accountPreferences;
    NSMutableDictionary *_accountPreferencesChanges;
    NSArray *_groups;
    NSMutableDictionary *_sortOrders;
    NSDictionary *_members;
    NSMutableDictionary *_coalescedChanges;
    NSArray *_targetGroupState;
    NSArray *_lastReceivedGroupState;
    UIImage *_smallImage;
    UIImage *_accountImage;
    NSDictionary *_subtypeInfo;
    NSUInteger _myStatus;
    NSMutableDictionary *_currentAccountStatus;
    NSString *_myStatusMessage;
    NSDictionary *_myNowPlaying;
    NSDate *_myIdleSince;
    NSData *_myPictureData;
    NSData *_accountImageData;
    unsigned long long _capabilities;
    NSAttributedString *_myProfile;
    NSInteger _registrationStatus;
    NSInteger _registrationFailureReason;
    NSUInteger _loginStatus;
    unsigned int _isActive : 1;
    unsigned int _justLoggedIn : 1;
    unsigned int _asleep : 1;
    unsigned int _useMeCardName : 1;
    NSInteger _cachedBlockingMode;
    unsigned int _blockIdleStatus : 1;
    unsigned int _blockOtherAddresses : 1;
    unsigned int _allowsVCRelay : 1;
    unsigned int _syncedBuddies : 1;
    unsigned int _syncedWithRemoteBuddyList : 1;
    unsigned int _hasReceivedSync : 1;
    NSInteger _numHolding;
    NSInteger _coalesceCount;
    unsigned int _needToCheckForWatchedIMHandles : 1;
    unsigned int _iconChecked : 1;
    unsigned int _hasBeenRemoved : 1;
}

+ (id)arrayOfAllIMHandles;
+ (id)allBuddyListIMHandles;
+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forServiceName:(id)arg3;
+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (id)_groupSummaryFromGroupList:(id)arg1;
+ (id)nameOfLoginStatus:(NSUInteger)arg1;

- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setInteger:(NSInteger)arg1 forKey:(id)arg2;
- (id)arrayOfAllIMHandles;
- (id)loginIMHandle;
- (id)service;
- (BOOL)allowsVCRelay;
- (id)login;
- (BOOL)canBeSecure;
- (id)internalName;
- (id)imHandleWithInfo:(id)arg1;
- (id)imHandleWithID:(id)arg1;
- (id)loginStatusMessage;
- (id)accountDescription;
- (BOOL)useSSL;
- (void)setDisplayName:(id)arg1;
- (unsigned long long)capabilities;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)setPassword:(id)arg1;
- (NSInteger)port;
- (id)password;
- (void)finalize;
- (BOOL)isActive;
- (NSInteger)integerForKey:(id)arg1;
- (void)setIsActive:(BOOL)arg1;
- (id)name;
- (void)removeObjectForKey:(id)arg1;
- (id)dictionary;
- (id)objectForKey:(id)arg1;
- (id)server;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)dealloc;
- (NSUInteger)status;
- (id)stringForKey:(id)arg1;
- (void)loadFromDictionary:(id)arg1;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (void)clearServiceCaches;
- (id)initWithUniqueID:(id)arg1 service:(id)arg2;
- (void)_loginWithAutoLogin:(BOOL)arg1;
- (void)autoLoginAccount;
- (void)loginAccount;
- (void)logoutAccount;
- (void)loginStatusChanged:(NSUInteger)arg1 message:(id)arg2 reason:(NSUInteger)arg3 properties:(id)arg4;
- (void)_updateLogin:(id)arg1;
- (void)_updateMyStatus:(NSUInteger)arg1 message:(id)arg2;
- (void)setCurrentAccountStatus:(id)arg1;
- (id)myNowPlayingString;
- (id)myStatusDictionary;
- (id)myProfile;
- (id)myStatusMessage;
- (id)myPictureData;
- (id)myIdleSince;
- (void)setUniqueID:(id)arg1;
- (id)accountImageData;
- (void)resetToDefaults;
- (BOOL)emailAddressIsID:(id)arg1;
- (NSInteger)compareLoginStatus:(id)arg1;
- (NSInteger)compareAccountNames:(id)arg1;
- (NSInteger)compareStatus:(id)arg1;
- (NSInteger)compareIDs:(id)arg1;
- (NSInteger)compareServices:(id)arg1;
- (void)updateCapabilities:(unsigned long long)arg1;
- (void)removePassword;
- (BOOL)isInvisible;
- (void)setInvisible:(BOOL)arg1;
- (BOOL)hasCustomDescription;
- (BOOL)autoLogin;
- (id)_serverWithSSL:(BOOL)arg1;
- (BOOL)goIdle;
- (void)setGoIdle:(BOOL)arg1;
- (void)setAllowsVCRelay:(BOOL)arg1;
- (BOOL)canActivate;
- (BOOL)validLogin;
- (BOOL)validPort;
- (BOOL)validServer;
- (BOOL)isManaged;
- (NSInteger)invalidSettings;
- (void)enableSecureIM:(BOOL)arg1;
- (void)disableCertificatesForIMHandle:(id)arg1;
- (void)setSecureImEnabled:(BOOL)arg1;
- (BOOL)secureImEnabled;
- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;
- (void)setCachedAllowList:(id)arg1;
- (void)setCachedBlockList:(id)arg1;
- (void)setCachedBlockingMode:(NSUInteger)arg1;
- (void)setCachedBlockIdleStatus:(BOOL)arg1;
- (void)blockMessages:(BOOL)arg1 fromID:(id)arg2;
- (void)setBlockList:(id)arg1;
- (id)blockList;
- (void)setAllowList:(id)arg1;
- (id)allowList;
- (void)setBlockingMode:(NSUInteger)arg1;
- (NSUInteger)blockingMode;
- (BOOL)blockIdleStatus;
- (void)setBlockIdleStatus:(BOOL)arg1;
- (BOOL)blockOtherAddresses;
- (void)setBlockOtherAddresses:(BOOL)arg1;
- (void)clearTargetState;
- (BOOL)isAwaitingTargetGroupState;
- (BOOL)hasTargetGroupStateBeenMet;
- (void)targetGroupStateTimeout;
- (void)setWaitForTargetState;
- (void)updateWithTargetGroups;
- (void)setTargetGroupsState:(id)arg1;
- (void)_applyChangesToTemporaryCache:(id)arg1;
- (void)beginChanges;
- (void)hookupToDaemon;
- (void)requestGroups;
- (void)_ensureGroupsExists:(id)arg1;
- (BOOL)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(NSInteger)arg3;
- (BOOL)removePeople:(id)arg1 fromGroups:(id)arg2;
- (BOOL)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(NSInteger)arg3;
- (BOOL)removeIMHandle:(id)arg1 fromGroups:(id)arg2;
- (void)addBuddyToBuddyList:(id)arg1;
- (void)changeBuddyList:(id)arg1 add:(BOOL)arg2 groups:(id)arg3 atLocation:(NSInteger)arg4;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)reorderGroup:(id)arg1 order:(id)arg2;
- (void)reorderGroups:(id)arg1;
- (id)propertiesForGroup:(id)arg1;
- (id)groupMembers:(id)arg1;
- (id)groupList;
- (id)memberGroups:(id)arg1;
- (BOOL)makingChanges;
- (void)holdBuddyUpdates;
- (void)_resumeBuddyUpdatesNow;
- (void)resumeBuddyUpdates;
- (void)buddyPropertiesChanged:(id)arg1;
- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;
- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;
- (void)_serviceDidConnect:(id)arg1;
- (void)_serviceDidReconnect:(id)arg1;
- (void)_serviceDidDisconnect:(id)arg1;
- (void)accountWillBeRemoved;
- (void)accountDidBecomeActive;
- (void)accountDidDeactivate;
- (void)_updateRegistrationStatus:(NSInteger)arg1 error:(NSInteger)arg2;
- (void)_notJustLoggedIn;
- (void)setIMAccountLoginStatus:(NSUInteger)arg1 errorMessage:(id)arg2;
- (void)setIMAccountLoginStatus:(NSUInteger)arg1 errorMessage:(id)arg2 reason:(NSUInteger)arg3;
- (void)groupsChanged:(id)arg1 error:(id)arg2;
- (id)accountSubtypeInfo;
- (id)recalculatedSubtypeInfo;
- (void)recalculateSubtypeInfo;
- (Class)imHandleClass;
- (id)existingIMHandleWithInfo:(id)arg1;
- (id)imHandleWithInfo:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (unsigned long long)defaultHandleCapabilities;
- (id)imHandleWithID:(id)arg1 alreadyCanonical:(BOOL)arg2;
- (id)personForIMHandle:(id)arg1;
- (id)personSibsForIMHandle:(id)arg1;
- (NSUInteger)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;
- (void)setBuddyListAuthorization:(BOOL)arg1 forIMHandle:(id)arg2;
- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;
- (BOOL)addIMHandle:(id)arg1 toIMPerson:(id)arg2;
- (BOOL)removeIMHandle:(id)arg1 fromIMPerson:(id)arg2;
- (void)_watchBuddiesIfNecessary;
- (void)watchBuddiesIfNecessary;
- (void)startWatchingIMHandle:(id)arg1;
- (void)stopWatchingIMHandle:(id)arg1;
- (void)forgetAllWatches;
- (void)_refreshLoginIMHandle;
- (void)registerIMHandle:(id)arg1;
- (void)unregisterIMHandle:(id)arg1;
- (void)disconnectAllIMHandles;
- (void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2;
- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;
- (BOOL)justLoggedIn;
- (void)nowLoggedIn;
- (void)nowLoggedOut;
- (id)chatIDForRoomName:(id)arg1;
- (id)defaultChatSuffix;
- (struct _FZChatRoomValidity { NSInteger x1; unsigned short x2; })validityOfChatRoomName:(id)arg1;
- (BOOL)requestNewAuthorizationCredentials;
- (id)profileInfo;
- (BOOL)removeProfileValueForKey:(id)arg1;
- (BOOL)setProfileValue:(id)arg1 forKey:(id)arg2;
- (NSInteger)profileValidationErrorReason;
- (void)_updateProfileInfo:(id)arg1;
- (id)_aliases;
- (id)_aliasInfoForAlias:(id)arg1;
- (id)_statuses;
- (id)aliasesForType:(NSInteger)arg1;
- (BOOL)addAlias:(id)arg1 type:(NSInteger)arg2;
- (BOOL)removeAlias:(id)arg1 type:(NSInteger)arg2;
- (NSInteger)typeForAlias:(id)arg1;
- (BOOL)validateAlias:(id)arg1 type:(NSInteger)arg2;
- (NSInteger)validationStatusForAlias:(id)arg1 type:(NSInteger)arg2;
- (NSInteger)validationErrorReasonForAlias:(id)arg1;
- (NSInteger)validationErrorReasonForAlias:(id)arg1 type:(NSInteger)arg2;
- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;
- (id)dictionaryDataForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)accountPreferences;
- (id)objectForPreferenceKey:(id)arg1;
- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;
- (void)removeObjectForPreferenceKey:(id)arg1;
- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;
- (id)dictionaryDataForPreferenceKey:(id)arg1;
- (id)stringForPreferenceKey:(id)arg1;
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;
- (BOOL)boolForPreferenceKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forPreferenceKey:(id)arg2;
- (NSInteger)integerForPreferenceKey:(id)arg1;
- (void)setInteger:(NSInteger)arg1 forPreferenceKey:(id)arg2;
- (BOOL)_updateDisplayName:(id)arg1;
- (void)syncWithRemoteBuddies;
- (BOOL)hasSyncedWithRemoteBuddies;
- (void)setIMAccountLoginStatus:(NSUInteger)arg1;
- (NSUInteger)loginStatus;
- (id)existingIMHandleWithID:(id)arg1;
- (void)_syncWithRemoteBuddies;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (BOOL)supportsAuthorization;
- (BOOL)supportsRegistration;
- (BOOL)handlesChatInvites;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (id)emailDomains;
- (id)shortName;
- (id)canonicalFormOfID:(id)arg1;
- (NSUInteger)myStatus;
- (id)profileStringForKey:(id)arg1;
- (BOOL)setProfileString:(id)arg1 forKey:(id)arg2;
- (BOOL)validateProfile;
- (void)setLogin:(id)arg1;
- (id)profileValueForKey:(id)arg1;
- (NSInteger)registrationFailureReason;
- (BOOL)removeAlias:(id)arg1;
- (NSInteger)profileValidationStatus;
- (id)authorizationID;
- (id)authorizationToken;
- (BOOL)addAlias:(id)arg1;
- (BOOL)validateAlias:(id)arg1;
- (id)aliases;
- (NSInteger)validationStatusForAlias:(id)arg1;
- (id)buddyList;
- (void)setAutoLogin:(BOOL)arg1;
- (void)writeSettings;
- (BOOL)registerAccount;
- (BOOL)unregisterAccount;
- (NSInteger)registrationStatus;
- (BOOL)isConnecting;
- (id)imHandlesForIMPerson:(id)arg1;
- (BOOL)isConnected;
- (id)initWithService:(id)arg1;
- (id)displayName;
- (id)serviceName;
- (NSInteger)compareNames:(id)arg1;
- (id)uniqueID;
- (void)endChanges;
- (void)setAccountDescription:(id)arg1;

@end