/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UIWebViewSettings : NSObject <NSCopying> {
    NSString *_customUserAgent;
    unsigned long long _dataDetectorTypes;
    bool_allowsInlineMediaPlayback;
    bool_mediaPlaybackAllowsAirPlay;
    bool_mediaPlaybackRequiresUserAction;
    bool_suppressesIncrementalRendering;
}

@property bool allowsInlineMediaPlayback;
@property(copy) NSString * customUserAgent;
@property unsigned long long dataDetectorTypes;
@property bool mediaPlaybackAllowsAirPlay;
@property bool mediaPlaybackRequiresUserAction;
@property bool suppressesIncrementalRendering;

+ (id)defaultSettings;

- (id)_encodeAsDictionary;
- (id)_initWithDictionary:(id)arg1;
- (bool)allowsInlineMediaPlayback;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customUserAgent;
- (unsigned long long)dataDetectorTypes;
- (void)dealloc;
- (id)init;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)mediaPlaybackRequiresUserAction;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (bool)suppressesIncrementalRendering;

@end