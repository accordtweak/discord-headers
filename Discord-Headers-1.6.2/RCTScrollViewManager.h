//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

@interface RCTScrollViewManager : RCTViewManager
{
}

+ (id)__rct_export__1555;
+ (id)__rct_export__1434;
+ (id)__rct_export__1313;
+ (id)__rct_export__1172;
+ (id)__rct_export__1001;
+ (id)__rct_export__810;
+ (id)propConfig_onRefreshStart;
+ (id)propConfig_contentOffset;
+ (id)propConfig_snapToAlignment;
+ (id)propConfig_snapToInterval;
+ (id)propConfig_scrollIndicatorInsets;
+ (id)propConfig_contentInset;
+ (id)propConfig_zoomScale;
+ (id)propConfig_scrollEventThrottle;
+ (id)propConfig_stickyHeaderIndices;
+ (id)propConfig_showsVerticalScrollIndicator;
+ (id)propConfig_showsHorizontalScrollIndicator;
+ (id)propConfig_scrollsToTop;
+ (id)propConfig_scrollEnabled;
+ (id)propConfig_pagingEnabled;
+ (id)propConfig_minimumZoomScale;
+ (id)propConfig_maximumZoomScale;
+ (id)propConfig_keyboardDismissMode;
+ (id)propConfig_directionalLockEnabled;
+ (id)propConfig_decelerationRate;
+ (id)propConfig_automaticallyAdjustContentInsets;
+ (id)propConfig_centerContent;
+ (id)propConfig_canCancelContentTouches;
+ (id)propConfig_bouncesZoom;
+ (id)propConfig_bounces;
+ (id)propConfig_alwaysBounceVertical;
+ (id)propConfig_alwaysBounceHorizontal;
+ (void)load;
+ (id)moduleName;
- (id)customDirectEventTypes;
- (void)zoomToRect:(id)arg1 withRect:(struct CGRect)arg2;
- (void)scrollWithoutAnimationTo:(id)arg1 withOffset:(struct CGPoint)arg2;
- (void)scrollTo:(id)arg1 withOffset:(struct CGPoint)arg2;
- (void)endRefreshing:(id)arg1;
- (void)calculateChildFrames:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getContentSize:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)constantsToExport;
- (id)view;

@end

