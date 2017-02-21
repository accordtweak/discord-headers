//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RTCMediaStreamTrack.h"

@class NSMutableArray, RTCVideoSource;

@interface RTCVideoTrack : RTCMediaStreamTrack
{
    NSMutableArray *_adapters;
    RTCVideoSource *_source;
}

@property(readonly, nonatomic) RTCVideoSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
@property(readonly, nonatomic) scoped_refptr_cae59c25 nativeVideoTrack;
- (void)removeRenderer:(id)arg1;
- (void)addRenderer:(id)arg1;
- (void)dealloc;
- (id)initWithNativeMediaTrack:(scoped_refptr_7d7e84a9)arg1 type:(int)arg2;
- (id)initWithFactory:(id)arg1 source:(id)arg2 trackId:(id)arg3;

@end

