//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface DCDBugsnagManager : NSObject <RCTBridgeModule>
{
    NSDictionary *_user;
}

+ (id)__rct_export__534;
+ (id)__rct_export__463;
+ (id)__rct_export__392;
+ (id)__rct_export__351;
+ (id)__rct_export__300;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) NSDictionary *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)leaveBreadcrumbWithMessage:(id)arg1;
- (void)notify:(id)arg1 reason:(id)arg2;
- (void)setMetadata:(id)arg1 metadata:(id)arg2;
- (void)clearUser;
- (id)initWithApiKey:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end
