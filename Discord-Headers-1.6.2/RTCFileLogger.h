//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RTCFileLogger : NSObject
{
    BOOL _hasStarted;
    NSString *_dirPath;
    unsigned int _maxFileSize;
    struct scoped_ptr<rtc::FileRotatingLogSink, rtc::DefaultDeleter<rtc::FileRotatingLogSink>> _logSink;
    BOOL _shouldDisableBuffering;
    unsigned int _severity;
    unsigned int _rotationType;
}

@property(nonatomic) BOOL shouldDisableBuffering; // @synthesize shouldDisableBuffering=_shouldDisableBuffering;
@property(readonly, nonatomic) unsigned int rotationType; // @synthesize rotationType=_rotationType;
@property(nonatomic) unsigned int severity; // @synthesize severity=_severity;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)rtcSeverity;
- (id)logData;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithDirPath:(id)arg1 maxFileSize:(unsigned int)arg2 rotationType:(unsigned int)arg3;
- (id)initWithDirPath:(id)arg1 maxFileSize:(unsigned int)arg2;
- (id)init;

@end

