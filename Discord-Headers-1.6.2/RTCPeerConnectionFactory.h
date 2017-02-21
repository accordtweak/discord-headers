//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RTCPeerConnectionFactory : NSObject
{
    struct scoped_ptr<rtc::Thread, rtc::DefaultDeleter<rtc::Thread>> _signalingThread;
    struct scoped_ptr<rtc::Thread, rtc::DefaultDeleter<rtc::Thread>> _workerThread;
    scoped_refptr_1eaeeec2 _nativeFactory;
}

@property(readonly, nonatomic) scoped_refptr_1eaeeec2 nativeFactory; // @synthesize nativeFactory=_nativeFactory;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
