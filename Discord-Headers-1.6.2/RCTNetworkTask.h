//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTURLRequestDelegate.h"

@class NSMutableData, NSNumber, NSString, NSURLRequest, NSURLResponse;

@interface RCTNetworkTask : NSObject <RCTURLRequestDelegate>
{
    NSMutableData *_data;
    id <RCTURLRequestHandler> _handler;
    RCTNetworkTask *_selfReference;
    NSURLRequest *_request;
    NSNumber *_requestID;
    id _requestToken;
    NSURLResponse *_response;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _downloadProgressBlock;
    CDUnknownBlockType _incrementalDataBlock;
    CDUnknownBlockType _responseBlock;
    CDUnknownBlockType _uploadProgressBlock;
}

@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(copy, nonatomic) CDUnknownBlockType incrementalDataBlock; // @synthesize incrementalDataBlock=_incrementalDataBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(readonly, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) __weak id requestToken; // @synthesize requestToken=_requestToken;
@property(readonly, nonatomic) NSNumber *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)URLRequest:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLRequest:(id)arg1 didReceiveData:(id)arg2;
- (void)URLRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)URLRequest:(id)arg1 didSendDataWithProgress:(long long)arg2;
- (BOOL)validateRequestToken:(id)arg1;
- (void)cancel;
- (void)start;
- (void)invalidate;
- (id)init;
- (id)initWithRequest:(id)arg1 handler:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

