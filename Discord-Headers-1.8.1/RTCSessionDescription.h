//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RTCSessionDescription : NSObject
{
    long long _type;
    NSString *_sdp;
}

+ (long long)typeForStdString:(const basic_string_a490aa4c *)arg1;
+ (basic_string_a490aa4c)stdStringForType:(long long)arg1;
+ (long long)typeForString:(id)arg1;
+ (id)stringForType:(long long)arg1;
@property(readonly, nonatomic) NSString *sdp; // @synthesize sdp=_sdp;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithNativeDescription:(const struct SessionDescriptionInterface *)arg1;
@property(readonly, nonatomic) struct SessionDescriptionInterface *nativeDescription;
- (id)description;
- (id)initWithType:(long long)arg1 sdp:(id)arg2;

@end

