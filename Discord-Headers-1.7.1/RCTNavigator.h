//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "RCTFrameUpdateObserver.h"
#import "RCTWrapperViewControllerNavigationListener.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSMutableArray, NSString, NSTimer, RCTBridge, RCTNavigationController;

@interface RCTNavigator : UIView <RCTWrapperViewControllerNavigationListener, UINavigationControllerDelegate, RCTFrameUpdateObserver>
{
    RCTBridge *_bridge;
    long long _numberOfViewControllerMovesToIgnore;
    _Bool _paused;
    CDUnknownBlockType _pauseCallback;
    UIView *_reactNavSuperviewLink;
    long long _requestedTopOfStack;
    CDUnknownBlockType _onNavigationProgress;
    CDUnknownBlockType _onNavigationComplete;
    long long _previousRequestedTopOfStack;
    NSArray *_previousViews;
    NSMutableArray *_currentViews;
    RCTNavigationController *_navigationController;
    double _mostRecentProgress;
    NSTimer *_runTimer;
    long long _currentlyTransitioningFrom;
    long long _currentlyTransitioningTo;
    UIView *_dummyView;
}

@property(readonly, nonatomic) UIView *dummyView; // @synthesize dummyView=_dummyView;
@property(readonly, nonatomic) long long currentlyTransitioningTo; // @synthesize currentlyTransitioningTo=_currentlyTransitioningTo;
@property(readonly, nonatomic) long long currentlyTransitioningFrom; // @synthesize currentlyTransitioningFrom=_currentlyTransitioningFrom;
@property(readonly, nonatomic) NSTimer *runTimer; // @synthesize runTimer=_runTimer;
@property(readonly, nonatomic) double mostRecentProgress; // @synthesize mostRecentProgress=_mostRecentProgress;
@property(retain, nonatomic) RCTNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSMutableArray *currentViews; // @synthesize currentViews=_currentViews;
@property(copy, nonatomic) NSArray *previousViews; // @synthesize previousViews=_previousViews;
@property(nonatomic) long long previousRequestedTopOfStack; // @synthesize previousRequestedTopOfStack=_previousRequestedTopOfStack;
@property(copy, nonatomic) CDUnknownBlockType onNavigationComplete; // @synthesize onNavigationComplete=_onNavigationComplete;
@property(copy, nonatomic) CDUnknownBlockType onNavigationProgress; // @synthesize onNavigationProgress=_onNavigationProgress;
@property(nonatomic) long long requestedTopOfStack; // @synthesize requestedTopOfStack=_requestedTopOfStack;
@property(retain, nonatomic) UIView *reactNavSuperviewLink; // @synthesize reactNavSuperviewLink=_reactNavSuperviewLink;
@property(copy, nonatomic) CDUnknownBlockType pauseCallback; // @synthesize pauseCallback=_pauseCallback;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)wrapperViewController:(id)arg1 didMoveToNavigationController:(id)arg2;
- (void)reactBridgeDidFinishTransaction;
- (id)reactSuperview;
- (void)dispatchFakeScrollEvent;
- (void)handleTopOfStackChanged;
- (void)removeReactSubview:(id)arg1;
- (void)layoutSubviews;
- (id)reactSubviews;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)freeLock;
- (_Bool)requestSchedulingJavaScriptNavigation;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)reactViewController;
- (void)dealloc;
- (void)setPaused:(_Bool)arg1;
- (void)didUpdateFrame:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

