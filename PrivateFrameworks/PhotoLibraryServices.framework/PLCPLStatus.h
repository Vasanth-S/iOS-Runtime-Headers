/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLCPLStatusDelegate>, CPLStatus, NSDate, NSProgress, NSString;

@interface PLCPLStatus : NSObject <CPLStatusDelegate> {
    CPLStatus *_cplStatus;
    <PLCPLStatusDelegate> *_delegate;
    unsigned int _imageDeletionCountSinceSync;
    BOOL _isCPLDataClassEnabled;
    BOOL _isCPLDataClassEnabledValid;
    unsigned int _numberOfImagesToDownload;
    unsigned int _numberOfImagesToUpload;
    unsigned int _numberOfVideosToDownload;
    unsigned int _numberOfVideosToUpload;
    NSProgress *_progress;
    id _progressSubscriber;
    double _syncProgress;
    unsigned int _videoDeletionCountSinceSync;
}

@property(copy,readonly) NSString * debugDescription;
@property <PLCPLStatusDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSDate * exitDeleteTime;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isEnabled;
@property(readonly) BOOL isExceedingQuota;
@property(readonly) BOOL isSyncing;
@property(retain,readonly) NSDate * lastSuccessfulSyncDate;
@property(readonly) unsigned int numberOfImagesToDownload;
@property(readonly) unsigned int numberOfImagesToUpload;
@property(readonly) unsigned int numberOfVideosToDownload;
@property(readonly) unsigned int numberOfVideosToUpload;
@property(setter=_setProgress:,retain) NSProgress * progress;
@property(readonly) Class superclass;
@property(readonly) double syncProgress;

+ (id)_accountStore;
+ (void)setDeletionCountsSinceLastSyncforImages:(unsigned int)arg1 videos:(unsigned int)arg2;
+ (void)setUploadCountsForImages:(unsigned int)arg1 videos:(unsigned int)arg2;

- (void)_loadDeletionCounts;
- (void)_loadUploadCounts;
- (void)_networkReachabilityChanged:(id)arg1;
- (void)_setProgress:(id)arg1;
- (void)_setSyncProgress:(double)arg1;
- (void)_setup;
- (void)_subscribeToProgress;
- (void)_teardown;
- (void)_unsubscribeFromProgress;
- (void)_updateDownloadingItemsCount;
- (void)_updateSyncProgress;
- (void)accountStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)exitDeleteTime;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)isExceedingQuota;
- (BOOL)isSyncing;
- (id)lastSuccessfulSyncDate;
- (unsigned int)numberOfImagesToDownload;
- (unsigned int)numberOfImagesToUpload;
- (unsigned int)numberOfVideosToDownload;
- (unsigned int)numberOfVideosToUpload;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (void)setDelegate:(id)arg1;
- (void)statusDidChange:(id)arg1;
- (double)syncProgress;

@end
