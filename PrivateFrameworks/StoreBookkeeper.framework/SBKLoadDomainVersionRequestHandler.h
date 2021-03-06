/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSString, SBKSyncTransaction;

@interface SBKLoadDomainVersionRequestHandler : SBKSyncRequestHandler <SBKSyncTransactionProcessing> {
    unsigned int _itemCount;
    BOOL _loadsRemoteItemCount;
    unsigned int _responseItemCount;
    SBKSyncTransaction *_transaction;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property unsigned int itemCount;
@property BOOL loadsRemoteItemCount;
@property(copy) NSString * responseDomainVersion;
@property(readonly) unsigned int responseItemCount;
@property(readonly) Class superclass;
@property(retain) SBKSyncTransaction * transaction;

+ (int)conflictDetectionType;

- (void).cxx_destruct;
- (unsigned int)itemCount;
- (BOOL)loadsRemoteItemCount;
- (unsigned int)responseItemCount;
- (void)runWithCompletionHandler:(id)arg1;
- (void)setItemCount:(unsigned int)arg1;
- (void)setLoadsRemoteItemCount:(BOOL)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
