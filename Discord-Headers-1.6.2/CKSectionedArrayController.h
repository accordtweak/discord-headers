//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CKSectionedArrayController : NSObject
{
    NSMutableArray *_sections;
}

- (void).cxx_destruct;
- (struct Changeset)applyChangeset:(struct Changeset)arg1;
- (pair_2db5cf6c)firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsInSectionAtIndex:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (int)numberOfObjectsInSection:(int)arg1;
- (int)numberOfSections;
- (id)description;
- (id)init;

@end
