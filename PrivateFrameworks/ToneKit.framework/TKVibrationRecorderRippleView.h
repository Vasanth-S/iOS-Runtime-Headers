/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class <TKVibrationRecorderStyleProvider>, CAAnimation, NSMutableArray, NSMutableDictionary;

@interface TKVibrationRecorderRippleView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    double _currentSpeedCoefficient;
    } _currentTouchLocation;
    double _currentTouchStartTime;
    double _fadeOutRadius;
    double _fingerMovingSpeed;
    double _fingerStillSpeed;
    double _firstRippleInitialRadius;
    unsigned long long _lastRingLayerIdentifier;
    unsigned long long _numberOfRipplesForCurrentTouch;
    NSMutableArray *_recentTouchesContextQueue;
    NSMutableArray *_reusableRingLayers;
    NSMutableArray *_reusableTouchContexts;
    CAAnimation *_ringEnlargementAnimation;
    NSMutableDictionary *_ringLayersByIdentifiers;
    NSMutableArray *_ringLayersQueue;
    <TKVibrationRecorderStyleProvider> *_styleProvider;
    bool_animating;
    bool_needsCurrentSpeedRefresh;
    bool_trackingTouch;
}

@property(getter=_isAnimating,setter=_setAnimating:) bool _animating;
@property(readonly) double _currentSpeed;
@property(setter=_setCurrentSpeedCoefficient:) double _currentSpeedCoefficient;
@property(setter=_setCurrentTouchLocation:) struct CGPoint { double x1; double x2; } _currentTouchLocation;
@property(setter=_setCurrentTouchStartTime:) double _currentTouchStartTime;
@property(setter=_setLastRingLayerIdentifier:) unsigned long long _lastRingLayerIdentifier;
@property(setter=_setNeedsCurrentSpeedRefresh:) bool _needsCurrentSpeedRefresh;
@property(setter=_setNumberOfRipplesForCurrentTouch:) unsigned long long _numberOfRipplesForCurrentTouch;
@property(setter=_setRecentTouchesContextQueue:,retain) NSMutableArray * _recentTouchesContextQueue;
@property(setter=_setReusableRingLayers:,retain) NSMutableArray * _reusableRingLayers;
@property(setter=_setReusableTouchContexts:,retain) NSMutableArray * _reusableTouchContexts;
@property(setter=_setRingEnlargementAnimation:,retain) CAAnimation * _ringEnlargementAnimation;
@property(setter=_setRingLayersByIdentifiers:,retain) NSMutableDictionary * _ringLayersByIdentifiers;
@property(setter=_setRingLayersQueue:,retain) NSMutableArray * _ringLayersQueue;
@property(setter=_setStyleProvider:,retain) <TKVibrationRecorderStyleProvider> * _styleProvider;
@property(getter=_isTouchDown,readonly) bool _touchDown;
@property(getter=_isTrackingTouch,setter=_setTrackingTouch:) bool _trackingTouch;
@property double fadeOutRadius;
@property double fingerMovingSpeed;
@property double fingerStillSpeed;
@property double firstRippleInitialRadius;

- (double)_currentSpeed;
- (double)_currentSpeedCoefficient;
- (struct CGPoint { double x1; double x2; })_currentTouchLocation;
- (double)_currentTouchStartTime;
- (void)_enqueueReusableRingLayer:(id)arg1;
- (void)_enqueueReusableTouchContextObject:(id)arg1;
- (void)_enqueueRingLayerWithTimeIntervalSinceCreation:(double)arg1 normalizedLocation:(struct CGPoint { double x1; double x2; })arg2 speed:(double)arg3;
- (bool)_isAnimating;
- (bool)_isTouchDown;
- (bool)_isTrackingTouch;
- (unsigned long long)_lastRingLayerIdentifier;
- (bool)_needsCurrentSpeedRefresh;
- (unsigned long long)_numberOfRipplesForCurrentTouch;
- (id)_recentTouchesContextQueue;
- (void)_refresh:(id)arg1;
- (id)_reusableRingLayer;
- (id)_reusableRingLayers;
- (id)_reusableTouchContextObject;
- (id)_reusableTouchContexts;
- (id)_ringEnlargementAnimation;
- (id)_ringLayersByIdentifiers;
- (id)_ringLayersQueue;
- (void)_setAnimating:(bool)arg1;
- (void)_setCurrentSpeedCoefficient:(double)arg1;
- (void)_setCurrentTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setCurrentTouchStartTime:(double)arg1;
- (void)_setLastRingLayerIdentifier:(unsigned long long)arg1;
- (void)_setNeedsCurrentSpeedRefresh:(bool)arg1;
- (void)_setNumberOfRipplesForCurrentTouch:(unsigned long long)arg1;
- (void)_setRecentTouchesContextQueue:(id)arg1;
- (void)_setReusableRingLayers:(id)arg1;
- (void)_setReusableTouchContexts:(id)arg1;
- (void)_setRingEnlargementAnimation:(id)arg1;
- (void)_setRingLayersByIdentifiers:(id)arg1;
- (void)_setRingLayersQueue:(id)arg1;
- (void)_setStyleProvider:(id)arg1;
- (void)_setTrackingTouch:(bool)arg1;
- (void)_startAnimation;
- (void)_stopAnimation;
- (id)_styleProvider;
- (void)_touchBeganAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_touchEndedAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_touchMovedToLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateRingEnlargementAnimation;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (double)fadeOutRadius;
- (double)fingerMovingSpeed;
- (double)fingerStillSpeed;
- (double)firstRippleInitialRadius;
- (id)init;
- (id)initWithStyleProvider:(id)arg1;
- (void)layoutSubviews;
- (void)setFadeOutRadius:(double)arg1;
- (void)setFingerMovingSpeed:(double)arg1;
- (void)setFingerStillSpeed:(double)arg1;
- (void)setFirstRippleInitialRadius:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end