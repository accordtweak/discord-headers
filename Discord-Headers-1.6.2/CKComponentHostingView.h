//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CKComponentLifecycleManagerDelegate.h"

@class CKComponentLifecycleManager, CKComponentRootView, NSString;

@interface CKComponentHostingView : UIView <CKComponentLifecycleManagerDelegate>
{
    CKComponentLifecycleManager *_lifecycleManager;
    id <CKComponentSizeRangeProviding> _sizeRangeProvider;
    CKComponentRootView *_containerView;
    BOOL _isUpdating;
    id <NSObject> _context;
    id <CKComponentHostingViewDelegate> _delegate;
    id <NSObject> _model;
    struct CKSizeRange _constrainedSize;
}

@property(readonly, nonatomic) CKComponentLifecycleManager *lifecycleManager; // @synthesize lifecycleManager=_lifecycleManager;
@property(readonly, nonatomic) struct CKSizeRange constrainedSize; // @synthesize constrainedSize=_constrainedSize;
@property(retain, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(retain, nonatomic) id <NSObject> model; // @synthesize model=_model;
@property(nonatomic) __weak id <CKComponentHostingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_update;
- (void)componentLifecycleManager:(id)arg1 sizeDidChangeWithAnimation:(const struct CKComponentBoundsAnimation *)arg2;
@property(readonly, nonatomic) UIView *containerView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2 context:(id)arg3;
- (id)initWithLifecycleManager:(id)arg1 sizeRangeProvider:(id)arg2 context:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

