//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "RCTInvalidating.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTAlertManager : NSObject <UIAlertViewDelegate, RCTBridgeModule, RCTInvalidating>
{
    NSMutableArray *_alerts;
    NSMutableArray *_alertControllers;
    NSMutableArray *_alertCallbacks;
    NSMutableArray *_alertButtonKeys;
}

+ (id)__rct_export__720;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertWithArgs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)invalidate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

