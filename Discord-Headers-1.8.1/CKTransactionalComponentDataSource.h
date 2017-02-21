//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKComponentStateListener.h"

@class CKTransactionalComponentDataSourceListenerAnnouncer, CKTransactionalComponentDataSourceState, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface CKTransactionalComponentDataSource : NSObject <CKComponentStateListener>
{
    CKTransactionalComponentDataSourceState *_state;
    CKTransactionalComponentDataSourceListenerAnnouncer *_announcer;
    unordered_map_fc8abdf3 _pendingAsynchronousStateUpdates;
    unordered_map_fc8abdf3 _pendingSynchronousStateUpdates;
    NSMutableArray *_pendingAsynchronousModifications;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_processStateUpdates;
- (void)_synchronouslyApplyChange:(id)arg1;
- (id)_cancelEnqueuedModificationsOfType:(Class)arg1;
- (void)_startFirstAsynchronousModification;
- (void)_enqueueModification:(id)arg1;
- (void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(CDUnknownBlockType)arg3 mode:(unsigned long long)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)reloadWithMode:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)updateConfiguration:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)applyChangeset:(id)arg1 mode:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)state;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

