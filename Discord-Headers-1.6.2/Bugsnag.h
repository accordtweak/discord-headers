//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Bugsnag : NSObject
{
}

+ (BOOL)bugsnagStarted;
+ (void)clearTabWithName:(id)arg1;
+ (void)addAttribute:(id)arg1 withValue:(id)arg2 toTabWithName:(id)arg3;
+ (void)notify:(id)arg1 withData:(id)arg2 atSeverity:(id)arg3;
+ (void)notify:(id)arg1 withData:(id)arg2;
+ (void)notify:(id)arg1;
+ (id)notifier;
+ (id)instance;
+ (id)configuration;
+ (void)startBugsnagWithConfiguration:(id)arg1;
+ (void)startBugsnagWithApiKey:(id)arg1;

@end

