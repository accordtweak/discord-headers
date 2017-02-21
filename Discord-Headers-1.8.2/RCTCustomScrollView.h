//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSIndexSet, NSString, RCTRefreshControl, UIView;

@interface RCTCustomScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    UIView *_dockedHeaderView;
    _Bool _centerContent;
    NSIndexSet *_stickyHeaderIndices;
    RCTRefreshControl *_rctRefreshControl;
}

@property(retain, nonatomic) RCTRefreshControl *rctRefreshControl; // @synthesize rctRefreshControl=_rctRefreshControl;
@property(nonatomic) _Bool centerContent; // @synthesize centerContent=_centerContent;
@property(copy, nonatomic) NSIndexSet *stickyHeaderIndices; // @synthesize stickyHeaderIndices=_stickyHeaderIndices;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dockClosestSectionHeader;
- (void)setContentOffset:(struct CGPoint)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)handleCustomPan:(id)arg1;
- (_Bool)_shouldDisableScrollInteraction;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

