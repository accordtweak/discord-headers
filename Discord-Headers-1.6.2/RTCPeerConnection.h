//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, RTCSessionDescription;

@interface RTCPeerConnection : NSObject
{
    NSMutableArray *_localStreams;
    struct scoped_ptr<webrtc::PeerConnectionDelegateAdapter, rtc::DefaultDeleter<webrtc::PeerConnectionDelegateAdapter>> _observer;
    scoped_refptr_1f0d680a _peerConnection;
    id <RTCPeerConnectionDelegate> _delegate;
}

+ (int)nativeStatsOutputLevelForLevel:(int)arg1;
+ (id)stringForIceGatheringState:(int)arg1;
+ (int)iceGatheringStateForNativeState:(int)arg1;
+ (int)nativeIceGatheringStateForState:(int)arg1;
+ (id)stringForIceConnectionState:(int)arg1;
+ (int)iceConnectionStateForNativeState:(int)arg1;
+ (int)nativeIceConnectionStateForState:(int)arg1;
+ (id)stringForSignalingState:(int)arg1;
+ (int)signalingStateForNativeState:(int)arg1;
+ (int)nativeSignalingStateForState:(int)arg1;
@property(nonatomic) __weak id <RTCPeerConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) scoped_refptr_1f0d680a nativePeerConnection;
- (void)setRemoteDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLocalDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)answerForConstraints:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)offerForConstraints:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeStream:(id)arg1;
- (void)addStream:(id)arg1;
- (void)addIceCandidate:(id)arg1;
- (void)close;
@property(readonly, nonatomic) int iceGatheringState;
@property(readonly, nonatomic) int iceConnectionState;
@property(readonly, nonatomic) int signalingState;
@property(readonly, nonatomic) RTCSessionDescription *remoteDescription;
@property(readonly, nonatomic) RTCSessionDescription *localDescription;
@property(readonly, nonatomic) NSArray *localStreams;
- (id)initWithFactory:(id)arg1 configuration:(id)arg2 constraints:(id)arg3 delegate:(id)arg4;
- (id)dataChannelForLabel:(id)arg1 configuration:(id)arg2;
- (void)statsForTrack:(id)arg1 statsOutputLevel:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

