//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKComponent, UIView;

@interface CKComponentController : NSObject
{
    unsigned long long _state;
    _Bool _updatingComponent;
    _Bool _performedInitialMount;
    CKComponent *_previousComponent;
    unsigned long long _nextAnimationID;
    struct vector<CKPendingComponentAnimation, std::__1::allocator<CKPendingComponentAnimation>> _pendingAnimationsOnInitialMount;
    struct unordered_map<unsigned long, CKAppliedComponentAnimation, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, CKAppliedComponentAnimation>>> _appliedAnimationsOnInitialMount;
    struct vector<CKPendingComponentAnimation, std::__1::allocator<CKPendingComponentAnimation>> _pendingAnimations;
    struct unordered_map<unsigned long, CKAppliedComponentAnimation, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, CKAppliedComponentAnimation>>> _appliedAnimations;
    CKComponent *_component;
    UIView *_view;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) __weak CKComponent *component; // @synthesize component=_component;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;
- (void)component:(id)arg1 didAcquireView:(id)arg2;
- (void)component:(id)arg1 willRelinquishView:(id)arg2;
- (void)_cleanupAppliedAnimations;
- (void)_relinquishView;
- (void)componentDidUnmount:(id)arg1;
- (void)componentWillUnmount:(id)arg1;
- (void)componentDidMount:(id)arg1;
- (void)componentWillMount:(id)arg1;
- (void)componentTreeDidDisappear;
- (void)componentTreeWillAppear;
- (void)componentDidAcquireView;
- (void)componentWillRelinquishView;
- (void)didUpdateComponent;
- (void)willUpdateComponent;
- (void)didUnmount;
- (void)willUnmount;
- (void)didRemount;
- (void)willRemount;
- (void)didMount;
- (void)willMount;
- (id)initWithComponent:(id)arg1;
- (id)debugQuickLookObject;

@end

