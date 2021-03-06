//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface DCDGestureRecognizersManager : NSObject <RCTBridgeModule>
{
    RCTBridge *_bridge;
}

+ (id)__rct_export__491;
+ (id)__rct_export__210;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)respondToTapGesture:(id)arg1;
- (void)removeAllGestureRecognizers:(id)arg1;
- (void)addTapGestureRecognizer:(id)arg1 taps:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

