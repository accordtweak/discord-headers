//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTInvalidating.h"

@class NSArray, NSDictionary, NSLock, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTModuleData : NSObject <RCTInvalidating>
{
    NSDictionary *_constantsToExport;
    NSString *_queueName;
    RCTBridge *_bridge;
    NSLock *_instanceLock;
    _Bool _setupComplete;
    _Bool _requiresMainThreadSetup;
    _Bool _hasConstantsToExport;
    _Bool _implementsBatchDidComplete;
    _Bool _implementsPartialBatchDidFlush;
    NSArray *_methods;
    id <RCTBridgeModule> _instance;
    NSObject<OS_dispatch_queue> *_methodQueue;
    Class _moduleClass;
}

@property(readonly, nonatomic) _Bool implementsPartialBatchDidFlush; // @synthesize implementsPartialBatchDidFlush=_implementsPartialBatchDidFlush;
@property(readonly, nonatomic) _Bool implementsBatchDidComplete; // @synthesize implementsBatchDidComplete=_implementsBatchDidComplete;
@property(readonly, nonatomic) _Bool hasConstantsToExport; // @synthesize hasConstantsToExport=_hasConstantsToExport;
@property(readonly, nonatomic) _Bool requiresMainThreadSetup; // @synthesize requiresMainThreadSetup=_requiresMainThreadSetup;
@property(readonly, nonatomic) Class moduleClass; // @synthesize moduleClass=_moduleClass;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)invalidate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue; // @synthesize methodQueue=_methodQueue;
@property(readonly, copy, nonatomic) NSArray *config;
- (void)gatherConstants;
@property(readonly, copy, nonatomic) NSArray *methods; // @synthesize methods=_methods;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) id <RCTBridgeModule> instance; // @synthesize instance=_instance;
@property(readonly, nonatomic) _Bool hasInstance;
- (void)setUpMethodQueue;
- (void)finishSetupForInstance;
- (void)setBridgeForInstance;
- (void)setUpInstanceAndBridge;
- (id)init;
- (id)initWithModuleInstance:(id)arg1 bridge:(id)arg2;
- (id)initWithModuleClass:(Class)arg1 bridge:(id)arg2;
- (void)setUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

