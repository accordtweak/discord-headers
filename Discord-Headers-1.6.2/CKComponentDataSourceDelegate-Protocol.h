//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKComponentDataSource, CKComponentDataSourceOutputItem, NSIndexPath;

@protocol CKComponentDataSourceDelegate <NSObject>
- (void)componentDataSource:(CKComponentDataSource *)arg1 didChangeSizeForObject:(CKComponentDataSourceOutputItem *)arg2 atIndexPath:(NSIndexPath *)arg3 animation:(const struct CKComponentBoundsAnimation *)arg4;
- (void)componentDataSource:(CKComponentDataSource *)arg1 hasChangesOfTypes:(unsigned int)arg2 changesetApplicator:(struct Changeset (^)(void))arg3;
@end

