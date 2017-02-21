//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioSession, AVAudioSessionDataSourceDescription, AVAudioSessionRouteDescription, NSArray, NSHashTable, NSRecursiveLock, NSSet, NSString;

@interface RTCAudioSession : NSObject
{
    AVAudioSession *_session;
    NSHashTable *_delegates;
    int _activationCount;
    BOOL _isActive;
    BOOL _isLocked;
    NSRecursiveLock *_lock;
}

+ (id)lockError;
+ (id)sharedInstance;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) AVAudioSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)notifyMediaServicesWereReset;
- (void)notifyMediaServicesWereLost;
- (void)notifyDidChangeRouteWithReason:(unsigned int)arg1 previousRoute:(id)arg2;
- (void)notifyDidEndInterruptionWithShouldResumeSession:(BOOL)arg1;
- (void)notifyDidBeginInterruption;
- (void)updateAudioSessionAfterEvent;
- (int)decrementActivationCount;
- (int)incrementActivationCount;
@property(readonly, nonatomic) int activationCount;
@property(readonly, nonatomic) NSSet *delegates;
- (BOOL)checkLock:(id *)arg1;
- (void)handleMediaServicesWereReset:(id)arg1;
- (void)handleMediaServicesWereLost:(id)arg1;
- (void)handleRouteChangeNotification:(id)arg1;
- (void)handleInterruptionNotification:(id)arg1;
- (BOOL)setOutputDataSource:(id)arg1 error:(id *)arg2;
- (BOOL)setInputDataSource:(id)arg1 error:(id *)arg2;
- (BOOL)setPreferredInput:(id)arg1 error:(id *)arg2;
- (BOOL)overrideOutputAudioPort:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)setPreferredOutputNumberOfChannels:(int)arg1 error:(id *)arg2;
- (BOOL)setPreferredInputNumberOfChannels:(int)arg1 error:(id *)arg2;
- (BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;
- (BOOL)setPreferredSampleRate:(double)arg1 error:(id *)arg2;
- (BOOL)setInputGain:(float)arg1 error:(id *)arg2;
- (BOOL)setMode:(id)arg1 error:(id *)arg2;
- (BOOL)setCategory:(id)arg1 withOptions:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
@property(readonly) double IOBufferDuration;
@property(readonly) double outputLatency;
@property(readonly) double inputLatency;
@property(readonly) float outputVolume;
@property(readonly) int outputNumberOfChannels;
@property(readonly) int inputNumberOfChannels;
@property(readonly) double sampleRate;
@property(readonly) AVAudioSessionDataSourceDescription *outputDataSource;
@property(readonly) NSArray *outputDataSources;
@property(readonly) AVAudioSessionDataSourceDescription *inputDataSource;
@property(readonly) NSArray *inputDataSources;
@property(readonly) BOOL inputAvailable;
@property(readonly) BOOL inputGainSettable;
@property(readonly) float inputGain;
@property(readonly) int maximumOutputNumberOfChannels;
@property(readonly) int maximumInputNumberOfChannels;
@property(readonly) AVAudioSessionRouteDescription *currentRoute;
@property(readonly) BOOL secondaryAudioShouldBeSilencedHint;
@property(readonly) NSString *mode;
@property(readonly) unsigned int categoryOptions;
@property(readonly) NSString *category;
- (void)unlockForConfiguration;
- (void)lockForConfiguration;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isActive;
- (void)setIsActive:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
