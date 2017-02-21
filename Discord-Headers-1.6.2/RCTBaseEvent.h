//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTEvent.h"

@class NSDictionary, NSNumber, NSString;

@interface RCTBaseEvent : NSObject <RCTEvent>
{
    NSNumber *_viewTag;
    NSString *_eventName;
    NSDictionary *_body;
}

+ (id)moduleDotMethod;
@property(readonly, copy, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) NSNumber *viewTag; // @synthesize viewTag=_viewTag;
- (void).cxx_destruct;
- (id)coalesceWithEvent:(id)arg1;
- (BOOL)canCoalesce;
@property(readonly, nonatomic) unsigned short coalescingKey;
- (id)init;
- (id)initWithViewTag:(id)arg1 eventName:(id)arg2 body:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
