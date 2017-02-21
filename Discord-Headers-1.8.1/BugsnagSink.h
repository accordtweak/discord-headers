//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KSCrashReportFilter.h"

@class NSString, NSURLSession;

@interface BugsnagSink : NSObject <KSCrashReportFilter>
{
    NSURLSession *_session;
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)getBodyFromReports:(id)arg1;
- (void)sendReports:(id)arg1 payload:(id)arg2 toURL:(id)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

