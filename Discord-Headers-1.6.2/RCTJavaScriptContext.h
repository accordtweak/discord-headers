//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTInvalidating.h"

@class JSContext, NSString;

@interface RCTJavaScriptContext : NSObject <RCTInvalidating>
{
    RCTJavaScriptContext *_selfReference;
    JSContext *_context;
}

@property(readonly, nonatomic) JSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (BOOL)isValid;
@property(readonly, nonatomic) struct OpaqueJSContext *ctx;
- (id)init;
- (id)initWithJSContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

