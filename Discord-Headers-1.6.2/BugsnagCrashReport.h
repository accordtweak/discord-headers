//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface BugsnagCrashReport : NSObject
{
    NSDictionary *_ksReport;
}

@property(retain) NSDictionary *ksReport; // @synthesize ksReport=_ksReport;
- (void).cxx_destruct;
- (id)crash;
- (id)config;
@property(readonly) NSDictionary *state;
@property(readonly) NSDictionary *system;
@property(readonly) NSDictionary *appStats;
@property(readonly) NSDictionary *metaData;
@property(readonly) unsigned int depth;
@property(readonly) NSString *deviceAppHash;
@property(readonly) NSString *dsymUUID;
@property(readonly) NSString *severity;
@property(readonly) NSString *errorMessage;
@property(readonly) NSString *errorClass;
@property(readonly) NSString *errorType;
@property(readonly) NSDictionary *error;
@property(readonly) NSArray *threads;
@property(readonly) NSArray *binaryImages;
@property(readonly) NSString *appVersion;
@property(readonly) NSString *context;
@property(readonly) NSArray *notifyReleaseStages;
@property(readonly) NSString *releaseStage;
- (id)initWithKSReport:(id)arg1;

@end
