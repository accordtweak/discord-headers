//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface RTCDataBuffer : NSObject
{
    struct scoped_ptr<webrtc::DataBuffer, rtc::DefaultDeleter<webrtc::DataBuffer>> _dataBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const struct DataBuffer *nativeDataBuffer;
- (id)initWithNativeBuffer:(const struct DataBuffer *)arg1;
@property(readonly, nonatomic) BOOL isBinary;
@property(readonly, nonatomic) NSData *data;
- (id)initWithData:(id)arg1 isBinary:(BOOL)arg2;

@end
