//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MASConstraint.h"

#import "NSCopying.h"

@class MASLayoutConstraint, MASViewAttribute, UIView;

@interface MASViewConstraint : MASConstraint <NSCopying>
{
    BOOL _hasLayoutRelation;
    BOOL _useAnimator;
    MASViewAttribute *_firstViewAttribute;
    MASViewAttribute *_secondViewAttribute;
    UIView *_installedView;
    MASLayoutConstraint *_layoutConstraint;
    int _layoutRelation;
    float _layoutPriority;
    float _layoutMultiplier;
    float _layoutConstant;
    id _mas_key;
}

+ (id)installedConstraintsForView:(id)arg1;
@property(nonatomic) BOOL useAnimator; // @synthesize useAnimator=_useAnimator;
@property(retain, nonatomic) id mas_key; // @synthesize mas_key=_mas_key;
@property(nonatomic) BOOL hasLayoutRelation; // @synthesize hasLayoutRelation=_hasLayoutRelation;
@property(nonatomic) float layoutConstant; // @synthesize layoutConstant=_layoutConstant;
@property(nonatomic) float layoutMultiplier; // @synthesize layoutMultiplier=_layoutMultiplier;
@property(nonatomic) float layoutPriority; // @synthesize layoutPriority=_layoutPriority;
@property(nonatomic) int layoutRelation; // @synthesize layoutRelation=_layoutRelation;
@property(nonatomic) __weak MASLayoutConstraint *layoutConstraint; // @synthesize layoutConstraint=_layoutConstraint;
@property(nonatomic) __weak UIView *installedView; // @synthesize installedView=_installedView;
@property(retain, nonatomic) MASViewAttribute *secondViewAttribute; // @synthesize secondViewAttribute=_secondViewAttribute;
@property(readonly, nonatomic) MASViewAttribute *firstViewAttribute; // @synthesize firstViewAttribute=_firstViewAttribute;
- (void).cxx_destruct;
- (void)uninstall;
- (id)layoutConstraintSimilarTo:(id)arg1;
- (void)install;
- (void)deactivate;
- (void)activate;
- (void)setCenterOffset:(struct CGPoint)arg1;
- (void)setSizeOffset:(struct CGSize)arg1;
- (void)setOffset:(float)arg1;
- (void)setInsets:(struct UIEdgeInsets)arg1;
- (CDUnknownBlockType)key;
- (id)addConstraintWithLayoutAttribute:(int)arg1;
- (id)and;
- (id)with;
- (CDUnknownBlockType)equalToWithRelation;
- (CDUnknownBlockType)priority;
- (CDUnknownBlockType)dividedBy;
- (CDUnknownBlockType)multipliedBy;
- (BOOL)hasBeenInstalled;
- (BOOL)isActive;
- (BOOL)supportsActiveProperty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirstViewAttribute:(id)arg1;

@end

