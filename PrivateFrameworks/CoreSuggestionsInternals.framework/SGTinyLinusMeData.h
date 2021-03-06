/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSSet, NSString;

@interface SGTinyLinusMeData : NSObject {
    NSSet *_addresses;
    NSString *_compositeName;
    NSString *_firstName;
    NSString *_lastName;
    NSSet *_normalizedEmails;
    NSSet *_normalizedPhones;
}

@property(readonly) NSSet * addresses;
@property(readonly) NSString * compositeName;
@property(readonly) NSString * firstName;
@property(readonly) NSString * lastName;
@property(readonly) NSSet * normalizedEmails;
@property(readonly) NSSet * normalizedPhones;

+ (void)clearCache;
+ (id)fetch;
+ (id)fetchWithAddressBook:(void*)arg1;

- (void).cxx_destruct;
- (id)addresses;
- (id)compositeName;
- (id)firstName;
- (id)lastName;
- (id)normalizedEmails;
- (id)normalizedPhones;

@end
