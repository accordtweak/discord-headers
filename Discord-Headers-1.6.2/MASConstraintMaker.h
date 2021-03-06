//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MASConstraintDelegate.h"

@class MASConstraint, NSMutableArray, NSString, UIView;

@interface MASConstraintMaker : NSObject <MASConstraintDelegate>
{
    BOOL _updateExisting;
    BOOL _removeExisting;
    UIView *_view;
    NSMutableArray *_constraints;
}

@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) BOOL removeExisting; // @synthesize removeExisting=_removeExisting;
@property(nonatomic) BOOL updateExisting; // @synthesize updateExisting=_updateExisting;
- (void).cxx_destruct;
- (CDUnknownBlockType)group;
@property(readonly, nonatomic) MASConstraint *center;
@property(readonly, nonatomic) MASConstraint *size;
@property(readonly, nonatomic) MASConstraint *edges;
@property(readonly, nonatomic) MASConstraint *centerYWithinMargins;
@property(readonly, nonatomic) MASConstraint *centerXWithinMargins;
@property(readonly, nonatomic) MASConstraint *trailingMargin;
@property(readonly, nonatomic) MASConstraint *leadingMargin;
@property(readonly, nonatomic) MASConstraint *bottomMargin;
@property(readonly, nonatomic) MASConstraint *topMargin;
@property(readonly, nonatomic) MASConstraint *rightMargin;
@property(readonly, nonatomic) MASConstraint *leftMargin;
@property(readonly, nonatomic) CDUnknownBlockType attributes;
@property(readonly, nonatomic) MASConstraint *baseline;
@property(readonly, nonatomic) MASConstraint *centerY;
@property(readonly, nonatomic) MASConstraint *centerX;
@property(readonly, nonatomic) MASConstraint *height;
@property(readonly, nonatomic) MASConstraint *width;
@property(readonly, nonatomic) MASConstraint *trailing;
@property(readonly, nonatomic) MASConstraint *leading;
@property(readonly, nonatomic) MASConstraint *bottom;
@property(readonly, nonatomic) MASConstraint *right;
@property(readonly, nonatomic) MASConstraint *top;
@property(readonly, nonatomic) MASConstraint *left;
- (id)addConstraintWithLayoutAttribute:(int)arg1;
- (id)addConstraintWithAttributes:(int)arg1;
- (id)constraint:(id)arg1 addConstraintWithLayoutAttribute:(int)arg2;
- (void)constraint:(id)arg1 shouldBeReplacedWithConstraint:(id)arg2;
- (id)install;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

