//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"
#import "RCTBridgeModule.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface DCDSoundManager : NSObject <RCTBridgeModule, AVAudioPlayerDelegate>
{
    NSMutableDictionary *_playerPool;
    NSMutableDictionary *_callbackPool;
}

+ (id)__rct_export__16712;
+ (id)__rct_export__15911;
+ (id)__rct_export__15210;
+ (id)__rct_export__1459;
+ (id)__rct_export__1388;
+ (id)__rct_export__1297;
+ (id)__rct_export__1216;
+ (id)__rct_export__1145;
+ (id)__rct_export__1064;
+ (id)__rct_export__913;
+ (id)__rct_export__822;
+ (id)__rct_export__631;
+ (id)__rct_export__570;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)getCurrentTime:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)setCurrentTime:(id)arg1 withValue:(id)arg2;
- (void)setNumberOfLoops:(id)arg1 withValue:(id)arg2;
- (void)setPan:(id)arg1 withValue:(id)arg2;
- (void)setVolume:(id)arg1 withValue:(id)arg2;
- (void)release:(id)arg1;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)prepare:(id)arg1 withKey:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)enableInSilenceMode:(_Bool)arg1;
- (void)setCategory:(id)arg1 withValue:(id)arg2;
- (void)enable:(_Bool)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)getDirectory:(unsigned long long)arg1;
- (CDUnknownBlockType)callbackForKey:(id)arg1;
- (id)keyForPlayer:(id)arg1;
- (id)playerForKey:(id)arg1;
- (id)callbackPool;
- (id)playerPool;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

