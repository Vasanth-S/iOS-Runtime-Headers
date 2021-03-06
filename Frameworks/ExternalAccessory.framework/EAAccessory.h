/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class <EAAccessoryDelegate>, EAAccessoryInternal, NSArray, NSString;

@interface EAAccessory : NSObject {
    EAAccessoryInternal *_internal;
}

@property(getter=isConnected,readonly) BOOL connected;
@property(readonly) unsigned int connectionID;
@property <EAAccessoryDelegate> * delegate;
@property(readonly) NSString * firmwareRevision;
@property(readonly) NSString * hardwareRevision;
@property(readonly) NSString * manufacturer;
@property(readonly) NSString * modelNumber;
@property(readonly) NSString * name;
@property(readonly) NSArray * protocolStrings;
@property(readonly) NSString * serialNumber;

- (void)_addSession:(id)arg1;
- (id)_createWakeToken;
- (void)_endSession:(unsigned int)arg1;
- (id)_initWithAccessory:(id)arg1;
- (unsigned int)_internalConnectionID;
- (BOOL)_internalNotPresentInIAPAccessoriesArray;
- (void)_openCompleteForSession:(unsigned int)arg1;
- (id)_protocolIDForProtocolString:(id)arg1;
- (void)_removeSession:(id)arg1;
- (void)_setConnected:(BOOL)arg1;
- (void)_setNotPresentInIAPAccessoriesArray:(BOOL)arg1;
- (id)_shortDescription;
- (void)_updateAccessoryInfo:(id)arg1;
- (BOOL)accessoryHasNMEASentencesAvailable;
- (id)allPublicProtocolStrings;
- (id)audioPorts;
- (id)bonjourName;
- (int)classType;
- (unsigned int)connectionID;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned int)eqIndex;
- (id)eqNames;
- (id)firmwareRevision;
- (BOOL)getEphemerisExpirationInterval:(double*)arg1;
- (BOOL)getEphemerisRecommendRefreshInterval:(double*)arg1;
- (BOOL)getEphemerisURL:(id*)arg1;
- (void)getIAPTimeSyncInfo:(id)arg1 completionHandler:(id)arg2;
- (BOOL)getNMEASentence:(id*)arg1;
- (id)getVehicleInfoData;
- (id)hardwareRevision;
- (BOOL)hasIPConnection;
- (id)init;
- (BOOL)isAvailableOverBonjour;
- (BOOL)isConnected;
- (int)locationSentenceTypesMask;
- (id)macAddress;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (id)preferredApp;
- (id)protocolStrings;
- (void)resetIAPTimeSyncKalmanFilter;
- (BOOL)sendEphemeris:(id)arg1;
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (BOOL)sendGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2;
- (id)serialNumber;
- (void)setBonjourName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setEqNames:(id)arg1;
- (void)setHasIPConnection:(BOOL)arg1;
- (void)setIAPTimeSyncParams:(id)arg1;
- (void)setIsAvailableOverBonjour:(BOOL)arg1;
- (void)setLocationSentenceTypesMask:(int)arg1;
- (BOOL)setNMEASentencesToFilter:(id)arg1;
- (void)setVehicleInfoSupportedTypes:(id)arg1;
- (void)setVehicleInfovehicleInfoInitialData:(id)arg1;
- (BOOL)shouldBeHiddenFromUI;
- (BOOL)supportsAccessibility;
- (BOOL)supportsLocation;
- (BOOL)supportsPointOfInterest;
- (BOOL)supportsPublicIap;
- (void)updateItemProperty:(int)arg1 withValue:(id)arg2;
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;
- (id)vehicleInfoInitialData;
- (id)vehicleInfoSupportedTypes;
- (id)wakeToken;

@end
