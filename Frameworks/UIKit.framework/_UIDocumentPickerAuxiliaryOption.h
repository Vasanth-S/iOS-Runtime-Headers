/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding> {
    id _handler;
    NSString *_identifier;
    UIImage *_image;
    unsigned int _order;
    NSString *_title;
}

@property(copy) id handler;
@property(copy) NSString * identifier;
@property(retain) UIImage * image;
@property unsigned int order;
@property(copy) NSString * title;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)handler;
- (id)identifier;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)order;
- (void)setHandler:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setOrder:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
