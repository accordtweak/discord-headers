//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKPointAnnotation.h"

#import "MKAnnotation.h"

@class NSString, UIColor, UIImage;

@interface RCTMapAnnotation : MKPointAnnotation <MKAnnotation>
{
    BOOL _hasLeftCallout;
    BOOL _hasRightCallout;
    BOOL _animateDrop;
    BOOL _draggable;
    NSString *_identifier;
    UIColor *_tintColor;
    UIImage *_image;
    int _viewIndex;
    int _leftCalloutViewIndex;
    int _rightCalloutViewIndex;
    int _detailCalloutViewIndex;
}

@property(nonatomic) BOOL draggable; // @synthesize draggable=_draggable;
@property(nonatomic) int detailCalloutViewIndex; // @synthesize detailCalloutViewIndex=_detailCalloutViewIndex;
@property(nonatomic) int rightCalloutViewIndex; // @synthesize rightCalloutViewIndex=_rightCalloutViewIndex;
@property(nonatomic) int leftCalloutViewIndex; // @synthesize leftCalloutViewIndex=_leftCalloutViewIndex;
@property(nonatomic) int viewIndex; // @synthesize viewIndex=_viewIndex;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) BOOL animateDrop; // @synthesize animateDrop=_animateDrop;
@property(nonatomic) BOOL hasRightCallout; // @synthesize hasRightCallout=_hasRightCallout;
@property(nonatomic) BOOL hasLeftCallout; // @synthesize hasLeftCallout=_hasLeftCallout;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

