//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface KSCrashReportInfo : NSObject
{
    NSString *_reportID;
    NSDate *_creationDate;
}

+ (id)reportInfoWithID:(id)arg1 creationDate:(id)arg2;
@property(readonly, retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, retain, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)initWithID:(id)arg1 creationDate:(id)arg2;

@end

