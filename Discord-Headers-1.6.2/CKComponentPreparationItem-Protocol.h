//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKComponentLifecycleManager, NSIndexPath, NSString;

@protocol CKComponentPreparationItem <NSObject>
@property(readonly, nonatomic) id <NSObject> context;
@property(readonly, nonatomic, getter=isPassthrough) BOOL passthrough;
@property(readonly, nonatomic) unsigned int changeType;
@property(readonly, copy, nonatomic) NSIndexPath *indexPath;
@property(readonly, copy, nonatomic) NSString *UUID;
@property(readonly, nonatomic) struct CGSize oldSize;
@property(readonly, nonatomic) CKComponentLifecycleManager *lifecycleManager;
@property(readonly, nonatomic) id <NSObject> replacementModel;
@end

