/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CoreDAVTaskGroupDelegate>, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL;

@interface CalDAVAddDropBoxAttachmentsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {
    NSSet *_aceItems;
    NSDictionary *_attachments;
    NSSet *_attendeePrincipalURLs;
    NSDictionary *_contentTypes;
    NSURL *_dropboxURL;
    NSDictionary *_putFailureSizes;
    NSMutableDictionary *_sentAttachmentURLsToETags;
    int _state;
    bool_attendeesCanManageDropBox;
}

@property(retain) NSSet * aceItems;
@property(retain) NSDictionary * attachments;
@property(retain) NSSet * attendeePrincipalURLs;
@property bool attendeesCanManageDropBox;
@property(retain) NSDictionary * contentTypes;
@property(copy,readonly) NSString * debugDescription;
@property <CoreDAVTaskGroupDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) NSURL * dropboxURL;
@property(retain,readonly) NSDictionary * etags;
@property(readonly) unsigned long long hash;
@property(retain) NSDictionary * putFailureSizes;
@property(retain) NSMutableDictionary * sentAttachmentURLsToETags;
@property int state;
@property(readonly) Class superclass;

+ (id)dropboxACEItemsForPrincipalURLs:(id)arg1 baseURL:(id)arg2 writable:(bool)arg3;

- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_makeDropBox;
- (void)_sendAttachments;
- (void)_updateACLWithState:(int)arg1;
- (id)aceItems;
- (id)attachments;
- (id)attendeePrincipalURLs;
- (bool)attendeesCanManageDropBox;
- (id)contentTypes;
- (void)dealloc;
- (id)dropboxURL;
- (id)etags;
- (id)initWithAccountInfoProvider:(id)arg1 dropboxURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 attendeePrincipalURLs:(id)arg5 attendeesCanManageDropBox:(bool)arg6 taskManager:(id)arg7;
- (id)putFailureSizes;
- (id)sentAttachmentURLsToETags;
- (void)setAceItems:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttendeePrincipalURLs:(id)arg1;
- (void)setAttendeesCanManageDropBox:(bool)arg1;
- (void)setContentTypes:(id)arg1;
- (void)setDropboxURL:(id)arg1;
- (void)setPutFailureSizes:(id)arg1;
- (void)setSentAttachmentURLsToETags:(id)arg1;
- (void)setState:(int)arg1;
- (void)startTaskGroup;
- (int)state;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;

@end