//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KSSystemInfo : NSObject
{
}

+ (id)systemInfo;
+ (_Bool)isJailbroken;
+ (id)processName:(int)arg1;
+ (id)currentCPUArch;
+ (id)CPUArchForCPUType:(int)arg1 subType:(int)arg2;
+ (id)deviceAndAppHash;
+ (id)appUUID;
+ (id)executablePath;
+ (id)uuidBytesToString:(const char *)arg1;
+ (id)dateSysctl:(id)arg1;
+ (id)stringSysctl:(id)arg1;
+ (id)int64Sysctl:(id)arg1;
+ (id)int32Sysctl:(id)arg1;

@end

