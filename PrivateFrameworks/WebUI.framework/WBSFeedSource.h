/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSArray, NSString, NSURL;

@interface WBSFeedSource : NSObject {
    NSURL *_feedURL;
    NSArray *_siteIconURLs;
    NSURL *_sourceURL;
    int _state;
    BOOL _subscribedWhenSyncWasOff;
    NSString *_title;
}

@property(readonly) NSString * displayName;
@property(readonly) NSURL * feedURL;
@property(readonly) NSArray * siteIconURLs;
@property(readonly) NSURL * sourceURL;
@property(readonly) int state;
@property BOOL subscribedWhenSyncWasOff;
@property(retain) NSString * title;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForSyncing;
- (id)displayName;
- (id)feedURL;
- (unsigned int)hash;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)initWithFeedURL:(id)arg1 sourceURL:(id)arg2 siteIconURLs:(id)arg3 title:(id)arg4 state:(int)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringTitle:(id)arg1;
- (void)setSubscribedWhenSyncWasOff:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)siteIconURLs;
- (id)sourceURL;
- (int)state;
- (BOOL)subscribedWhenSyncWasOff;
- (id)title;

@end
