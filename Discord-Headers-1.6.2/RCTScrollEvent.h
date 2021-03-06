//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTEvent.h"

@class NSDictionary, NSNumber, NSString, UIScrollView;

@interface RCTScrollEvent : NSObject <RCTEvent>
{
    int _type;
    UIScrollView *_scrollView;
    NSDictionary *_userData;
    NSNumber *_viewTag;
}

+ (id)moduleDotMethod;
@property(readonly, nonatomic) NSNumber *viewTag; // @synthesize viewTag=_viewTag;
- (void).cxx_destruct;
- (id)coalesceWithEvent:(id)arg1;
- (BOOL)canCoalesce;
@property(readonly, copy, nonatomic) NSString *eventName;
@property(readonly, copy, nonatomic) NSDictionary *body;
@property(readonly, nonatomic) unsigned short coalescingKey;
- (id)init;
- (id)initWithType:(int)arg1 reactTag:(id)arg2 scrollView:(id)arg3 userData:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

