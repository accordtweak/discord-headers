//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "RCTInvalidating.h"

@class NSString, RCTBridge, RCTModalHostViewController, RCTTouchHandler;

@interface RCTModalHostView : UIView <RCTInvalidating>
{
    RCTBridge *_bridge;
    BOOL _isPresented;
    RCTModalHostViewController *_modalViewController;
    RCTTouchHandler *_touchHandler;
    BOOL _animated;
}

@property(nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
- (void).cxx_destruct;
@property(nonatomic, getter=isTransparent) BOOL transparent;
- (void)invalidate;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)dismissModalViewController;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (id)reactSubviews;
- (void)notifyForBoundsChange:(struct CGRect)arg1;
- (id)initWithBridge:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

