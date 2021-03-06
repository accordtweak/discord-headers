//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "RCTURLRequestHandler.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, NSURLCache, RCTBridge;

@interface RCTImageLoader : NSObject <RCTBridgeModule, RCTURLRequestHandler>
{
    NSArray *_loaders;
    NSArray *_decoders;
    NSObject<OS_dispatch_queue> *_URLCacheQueue;
    NSURLCache *_URLCache;
    RCTBridge *_bridge;
}

+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (id)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (BOOL)canHandleRequest:(id)arg1;
- (CDUnknownBlockType)getImageSize:(id)arg1 block:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)decodeImageData:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)loadImageWithTag:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)loadImageOrDataWithTag:(id)arg1 size:(struct CGSize)arg2 scale:(float)arg3 resizeMode:(int)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (CDUnknownBlockType)loadImageWithTag:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)imageDataDecoderForData:(id)arg1;
- (id)imageURLLoaderForURL:(id)arg1;
- (void)setUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

