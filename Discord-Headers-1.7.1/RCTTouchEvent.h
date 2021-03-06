//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTEvent.h"

@class NSArray, NSNumber, NSString;

@interface RCTTouchEvent : NSObject <RCTEvent>
{
    NSArray *_reactTouches;
    NSArray *_changedIndexes;
    unsigned short _coalescingKey;
    NSString *_eventName;
    NSNumber *_viewTag;
}

+ (id)moduleDotMethod;
@property(readonly, nonatomic) NSNumber *viewTag; // @synthesize viewTag=_viewTag;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned short coalescingKey;
- (id)arguments;
- (id)coalesceWithEvent:(id)arg1;
- (_Bool)canCoalesce;
- (id)init;
- (id)initWithEventName:(id)arg1 reactTouches:(id)arg2 changedIndexes:(id)arg3 coalescingKey:(unsigned short)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

