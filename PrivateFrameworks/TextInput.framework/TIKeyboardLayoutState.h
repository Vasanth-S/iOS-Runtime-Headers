/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {
    NSString *_inputMode;
    NSString *_layoutTag;
    bool_canMultitap;
    bool_hasAccentKey;
    bool_hasCandidateKey;
    bool_interfaceIdiomIsPad;
    bool_isAlphabeticPlane;
}

@property bool canMultitap;
@property bool hasAccentKey;
@property bool hasCandidateKey;
@property(copy) NSString * inputMode;
@property bool interfaceIdiomIsPad;
@property bool isAlphabeticPlane;
@property(copy) NSString * layoutTag;

+ (bool)supportsSecureCoding;

- (bool)canMultitap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAccentKey;
- (bool)hasCandidateKey;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)inputMode;
- (bool)interfaceIdiomIsPad;
- (bool)isAlphabeticPlane;
- (bool)isEqual:(id)arg1;
- (id)layoutTag;
- (void)setCanMultitap:(bool)arg1;
- (void)setHasAccentKey:(bool)arg1;
- (void)setHasCandidateKey:(bool)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInterfaceIdiomIsPad:(bool)arg1;
- (void)setIsAlphabeticPlane:(bool)arg1;
- (void)setLayoutTag:(id)arg1;

@end