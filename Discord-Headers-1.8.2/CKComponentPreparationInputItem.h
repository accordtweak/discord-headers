//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKComponentPreparationItem.h"

@class CKComponentLifecycleManager, NSIndexPath, NSString;

@interface CKComponentPreparationInputItem : NSObject <CKComponentPreparationItem>
{
    struct CKSizeRange _constrainedSize;
    _Bool _passthrough;
    id <NSObject> _replacementModel;
    CKComponentLifecycleManager *_lifecycleManager;
    NSString *_UUID;
    NSIndexPath *_sourceIndexPath;
    NSIndexPath *_destinationIndexPath;
    unsigned long long _changeType;
    id <NSObject> _context;
    struct CGSize _oldSize;
}

@property(readonly, nonatomic) id <NSObject> context; // @synthesize context=_context;
@property(readonly, nonatomic) struct CGSize oldSize; // @synthesize oldSize=_oldSize;
@property(readonly, nonatomic, getter=isPassthrough) _Bool passthrough; // @synthesize passthrough=_passthrough;
@property(readonly, nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(readonly, copy, nonatomic) NSIndexPath *destinationIndexPath; // @synthesize destinationIndexPath=_destinationIndexPath;
@property(readonly, copy, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) CKComponentLifecycleManager *lifecycleManager; // @synthesize lifecycleManager=_lifecycleManager;
@property(readonly, nonatomic) id <NSObject> replacementModel; // @synthesize replacementModel=_replacementModel;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKSizeRange)constrainedSize;
- (id)init;
- (id)initWithReplacementModel:(id)arg1 lifecycleManager:(id)arg2 constrainedSize:(struct CKSizeRange)arg3 oldSize:(struct CGSize)arg4 UUID:(id)arg5 sourceIndexPath:(id)arg6 destinationIndexPath:(id)arg7 changeType:(unsigned long long)arg8 passthrough:(_Bool)arg9 context:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
