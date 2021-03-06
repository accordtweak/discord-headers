//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RTCRtpReceiver.h"

@class NSString, RTCMediaStreamTrack, RTCRtpParameters;

@interface RTCRtpReceiver : NSObject <RTCRtpReceiver>
{
    scoped_refptr_92bf499b _nativeRtpReceiver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithNativeRtpReceiver:(scoped_refptr_92bf499b)arg1;
@property(readonly, nonatomic) scoped_refptr_92bf499b nativeRtpReceiver;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) RTCMediaStreamTrack *track;
- (void)setParameters:(id)arg1;
@property(readonly, nonatomic) RTCRtpParameters *parameters;
@property(readonly, nonatomic) NSString *receiverId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

