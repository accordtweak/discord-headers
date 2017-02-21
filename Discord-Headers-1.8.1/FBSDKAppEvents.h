//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSDKAppEventsState, FBSDKServerConfiguration, NSString, NSTimer;

@interface FBSDKAppEvents : NSObject
{
    _Bool _explicitEventsLoggedYet;
    NSTimer *_flushTimer;
    NSTimer *_attributionIDRecheckTimer;
    FBSDKServerConfiguration *_serverConfiguration;
    FBSDKAppEventsState *_appEventsState;
    _Bool _disableTimer;
    unsigned long long _flushBehavior;
    NSString *_pushNotificationsDeviceTokenString;
}

+ (id)requestForCustomAudienceThirdPartyIDWithAccessToken:(id)arg1;
+ (id)singleton;
+ (void)logImplicitEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)flush;
+ (void)setLoggingOverrideAppID:(id)arg1;
+ (id)loggingOverrideAppID;
+ (void)setFlushBehavior:(unsigned long long)arg1;
+ (unsigned long long)flushBehavior;
+ (void)setPushNotificationsDeviceToken:(id)arg1;
+ (void)activateApp;
+ (void)logPushNotificationOpen:(id)arg1 action:(id)arg2;
+ (void)logPushNotificationOpen:(id)arg1;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3;
+ (void)logPurchase:(double)arg1 currency:(id)arg2;
+ (void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)logEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
+ (void)logEvent:(id)arg1 parameters:(id)arg2;
+ (void)logEvent:(id)arg1 valueToSum:(double)arg2;
+ (void)logEvent:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *pushNotificationsDeviceTokenString; // @synthesize pushNotificationsDeviceTokenString=_pushNotificationsDeviceTokenString;
@property(nonatomic) _Bool disableTimer; // @synthesize disableTimer=_disableTimer;
@property(nonatomic) unsigned long long flushBehavior; // @synthesize flushBehavior=_flushBehavior;
- (void).cxx_destruct;
- (void)applicationMovingFromActiveStateOrTerminating;
- (void)applicationDidBecomeActive;
- (void)appSettingsFetchStateResetTimerFired:(id)arg1;
- (void)flushTimerFired:(id)arg1;
- (void)handleActivitiesPostCompletion:(id)arg1 loggingEntry:(id)arg2 appEventsState:(id)arg3;
- (void)flushOnMainQueue:(id)arg1 forReason:(unsigned long long)arg2;
- (void)checkPersistedEvents;
- (void)instanceLogEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(_Bool)arg4 accessToken:(id)arg5;
- (void)fetchServerConfiguration:(CDUnknownBlockType)arg1;
- (void)publishInstall;
- (id)appID;
- (void)flushForReason:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

