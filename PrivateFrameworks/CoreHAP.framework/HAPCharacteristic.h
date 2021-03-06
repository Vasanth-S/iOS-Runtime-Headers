/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@class HAPCharacteristicMetadata, HAPService, NSNumber, NSString;

@interface HAPCharacteristic : NSObject {
    BOOL _eventNotificationsEnabled;
    NSNumber *_instanceID;
    HAPCharacteristicMetadata *_metadata;
    unsigned int _properties;
    HAPService *_service;
    NSString *_type;
    id _value;
}

@property BOOL eventNotificationsEnabled;
@property(copy) NSNumber * instanceID;
@property(retain) HAPCharacteristicMetadata * metadata;
@property unsigned int properties;
@property HAPService * service;
@property(copy) NSString * type;
@property(copy) id value;

+ (id)characteristicTypeFromUUIDString:(id)arg1;
+ (id)masterCharacteristicsUUIDDictionary;

- (void).cxx_destruct;
- (id)_generateValidMetadata:(id)arg1;
- (id)_getDefaultMetadata;
- (void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2;
- (id)description;
- (BOOL)eventNotificationsEnabled;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 properties:(unsigned int)arg4 eventNotificationsEnabled:(BOOL)arg5 metadata:(id)arg6;
- (id)instanceID;
- (BOOL)isEqualToCharacteristic:(id)arg1;
- (id)metadata;
- (unsigned int)properties;
- (id)propertiesDescription;
- (id)service;
- (void)setEventNotificationsEnabled:(BOOL)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProperties:(unsigned int)arg1;
- (void)setService:(id)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (id)type;
- (id)validateValue:(id)arg1 outValue:(id*)arg2;
- (id)value;

@end
