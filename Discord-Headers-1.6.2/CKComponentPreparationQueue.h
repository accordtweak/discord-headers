//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKComponentPreparationQueueListenerAnnouncer, NSObject<OS_dispatch_queue>;

@interface CKComponentPreparationQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_inputQueue;
    unsigned int _queueWidth;
    struct Mutex _lock;
    CKComponentPreparationQueueListenerAnnouncer *_announcer;
}

+ (id)prepare:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_processJob:(id)arg1;
- (void)enqueueBatch:(const struct CKComponentPreparationInputBatch *)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithQueueWidth:(int)arg1;

@end

