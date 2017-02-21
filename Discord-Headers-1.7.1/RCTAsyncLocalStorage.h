//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "RCTInvalidating.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTAsyncLocalStorage : NSObject <RCTBridgeModule, RCTInvalidating>
{
    _Bool _haveSetup;
    NSMutableDictionary *_manifest;
    _Bool _clearOnInvalidate;
}

+ (id)__rct_export__4385;
+ (id)__rct_export__4304;
+ (id)__rct_export__3983;
+ (id)__rct_export__3622;
+ (id)__rct_export__3421;
+ (id)__rct_export__3230;
+ (void)clearAllData;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) _Bool clearOnInvalidate; // @synthesize clearOnInvalidate=_clearOnInvalidate;
- (void).cxx_destruct;
- (void)getAllKeys:(CDUnknownBlockType)arg1;
- (void)clear:(CDUnknownBlockType)arg1;
- (void)multiRemove:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)multiMerge:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)multiSet:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)multiGet:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_writeEntry:(id)arg1 changedManifest:(_Bool *)arg2;
- (id)_getValueForKey:(id)arg1 errorOut:(id *)arg2;
- (id)_appendItemForKey:(id)arg1 toArray:(id)arg2;
- (id)_writeManifest:(id *)arg1;
- (id)_ensureSetup;
- (id)_filePathForKey:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;
- (void)clearAllData;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

