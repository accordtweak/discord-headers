//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface RTCRtpEncodingParameters : NSObject
{
    _Bool _isActive;
    NSNumber *_maxBitrateBps;
}

@property(copy, nonatomic) NSNumber *maxBitrateBps; // @synthesize maxBitrateBps=_maxBitrateBps;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct RtpEncodingParameters nativeParameters;
- (id)initWithNativeParameters:(const struct RtpEncodingParameters *)arg1;
- (id)init;

@end

