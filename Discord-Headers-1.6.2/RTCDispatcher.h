//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface RTCDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
}

+ (id)dispatchQueueForType:(int)arg1;
+ (void)dispatchAsyncOnType:(int)arg1 block:(CDUnknownBlockType)arg2;
+ (void)initialize;
- (void).cxx_destruct;

@end

