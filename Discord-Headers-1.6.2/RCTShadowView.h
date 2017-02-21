//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTComponent.h"

@class NSDictionary, NSMutableArray, NSNumber, NSString, UIColor;

@interface RCTShadowView : NSObject <RCTComponent>
{
    unsigned int _propagationLifecycle;
    unsigned int _textLifecycle;
    NSDictionary *_lastParentProperties;
    NSMutableArray *_reactSubviews;
    BOOL _recomputePadding;
    BOOL _recomputeMargin;
    BOOL _recomputeBorder;
    float _paddingMetaProps[7];
    float _marginMetaProps[7];
    float _borderMetaProps[7];
    BOOL _newView;
    NSNumber *_reactTag;
    RCTShadowView *_superview;
    struct css_node *_cssNode;
    NSString *_viewName;
    UIColor *_backgroundColor;
    unsigned int _layoutLifecycle;
    CDUnknownBlockType _onLayout;
    int _sizeFlexibility;
    struct CGRect _frame;
}

@property(nonatomic) int sizeFlexibility; // @synthesize sizeFlexibility=_sizeFlexibility;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic, getter=isNewView) BOOL newView; // @synthesize newView=_newView;
@property(copy, nonatomic) CDUnknownBlockType onLayout; // @synthesize onLayout=_onLayout;
@property(nonatomic) unsigned int layoutLifecycle; // @synthesize layoutLifecycle=_layoutLifecycle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
@property(readonly, nonatomic) struct css_node *cssNode; // @synthesize cssNode=_cssNode;
@property(readonly, nonatomic) __weak RCTShadowView *superview; // @synthesize superview=_superview;
@property(copy, nonatomic) NSNumber *reactTag; // @synthesize reactTag=_reactTag;
- (void).cxx_destruct;
- (void)didSetProps:(id)arg1;
@property(nonatomic) int flexWrap;
@property(nonatomic) int position;
@property(nonatomic) int alignItems;
@property(nonatomic) int alignSelf;
@property(nonatomic) int justifyContent;
@property(nonatomic) int flexDirection;
@property(nonatomic) float flex;
- (void)setSize:(struct CGSize)arg1;
- (void)setTopLeft:(struct CGPoint)arg1;
@property(nonatomic) float left;
@property(nonatomic) float bottom;
@property(nonatomic) float right;
@property(nonatomic) float top;
@property(nonatomic) float maxHeight;
@property(nonatomic) float maxWidth;
@property(nonatomic) float minHeight;
@property(nonatomic) float minWidth;
@property(nonatomic) float height;
@property(nonatomic) float width;
@property(nonatomic) float borderRightWidth;
@property(nonatomic) float borderBottomWidth;
@property(nonatomic) float borderLeftWidth;
@property(nonatomic) float borderTopWidth;
@property(nonatomic) float borderWidth;
- (struct UIEdgeInsets)paddingAsInsets;
@property(nonatomic) float paddingRight;
@property(nonatomic) float paddingBottom;
@property(nonatomic) float paddingLeft;
@property(nonatomic) float paddingTop;
@property(nonatomic) float paddingHorizontal;
@property(nonatomic) float paddingVertical;
@property(nonatomic) float padding;
@property(nonatomic) float marginRight;
@property(nonatomic) float marginBottom;
@property(nonatomic) float marginLeft;
@property(nonatomic) float marginTop;
@property(nonatomic) float marginHorizontal;
@property(nonatomic) float marginVertical;
@property(nonatomic) float margin;
- (id)recursiveDescription;
- (void)addRecursiveDescriptionToString:(id)arg1 atLevel:(unsigned int)arg2;
@property(readonly, copy) NSString *description;
- (id)reactTagAtPoint:(struct CGPoint)arg1;
- (id)reactSuperview;
- (id)reactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (void)setTextComputed;
- (BOOL)isTextDirty;
- (void)dirtyText;
- (BOOL)isPropagationDirty;
- (void)dirtyPropagation;
- (BOOL)isLayoutDirty;
- (void)dirtyLayout;
- (void)dealloc;
- (BOOL)isReactRootView;
- (id)init;
- (struct CGRect)measureLayoutRelativeToAncestor:(id)arg1;
- (id)collectRootUpdatedFrames;
- (void)applySizeConstraints;
- (void)collectUpdatedProperties:(id)arg1 parentProperties:(id)arg2;
- (id)processUpdatedProperties:(id)arg1 parentProperties:(id)arg2;
- (void)applyLayoutNode:(struct css_node *)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(struct CGPoint)arg3;
- (void)fillCSSNode:(struct css_node *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
