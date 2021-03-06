//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTStatusBarManager : NSObject <RCTBridgeModule>
{
    RCTBridge *_bridge;
}

+ (id)__rct_export__1233;
+ (id)__rct_export__1122;
+ (id)__rct_export__1001;
+ (id)__rct_export__920;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)setNetworkActivityIndicatorVisible:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 withAnimation:(int)arg2;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)getHeight:(CDUnknownBlockType)arg1;
- (void)applicationWillChangeStatusBarFrame:(id)arg1;
- (void)applicationDidChangeStatusBarFrame:(id)arg1;
- (void)emitEvent:(id)arg1 forNotification:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)dealloc;
- (void)setBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

