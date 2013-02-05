/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CAState, <PKPassShredderSheetDelegate>, CAStateController, CALayer, _UICAPackageView, PKPassView;

@interface PKPassShredderSheet : NSObject <CAStateControllerDelegate> {
    <PKPassShredderSheetDelegate> *_delegate;
    _UICAPackageView *_packageView;
    PKPassView *_passView;
    CALayer *_rootLayer;
    CAState *_shredderFinishedState;
    CAState *_shredderOffscreenOnBackState;
    CAState *_shredderShredState;
    CAState *_shredderUpOnBackState;
    CAStateController *_stateController;
}

@property <PKPassShredderSheetDelegate> * delegate;
@property(retain) _UICAPackageView * packageView;
@property(retain) PKPassView * passView;
@property(retain) CALayer * rootLayer;
@property(retain) CAState * shredderFinishedState;
@property(retain) CAState * shredderOffscreenOnBackState;
@property(retain) CAState * shredderShredState;
@property(retain) CAState * shredderUpOnBackState;
@property(retain) CAStateController * stateController;

- (void)_cancelButtonPressed;
- (void)_confirmButtonPressed;
- (void)_dismissImmediately;
- (id)_meshTransformForInitialStrikeAtTime:(double)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithPassView:(id)arg1;
- (id)packageView;
- (id)passView;
- (void)registerForEnterBackgroundNotification;
- (id)rootLayer;
- (void)setDelegate:(id)arg1;
- (void)setPackageView:(id)arg1;
- (void)setPassView:(id)arg1;
- (void)setRootLayer:(id)arg1;
- (void)setShredderFinishedState:(id)arg1;
- (void)setShredderOffscreenOnBackState:(id)arg1;
- (void)setShredderShredState:(id)arg1;
- (void)setShredderUpOnBackState:(id)arg1;
- (void)setStateController:(id)arg1;
- (void)showInView:(id)arg1;
- (id)shredderFinishedState;
- (id)shredderOffscreenOnBackState;
- (id)shredderShredState;
- (id)shredderUpOnBackState;
- (id)stateController;
- (void)unregisterForEnterBackgroundNotification;

@end