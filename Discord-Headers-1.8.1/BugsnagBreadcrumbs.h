//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

@interface BugsnagBreadcrumbs : NSObject
{
    unsigned long long _capacity;
    NSMutableArray *_breadcrumbs;
    NSLock *_lock;
}

@property(readonly, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *breadcrumbs; // @synthesize breadcrumbs=_breadcrumbs;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)resizeToFitCapacity:(unsigned long long)arg1;
- (id)arrayValue;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
- (void)clearBreadcrumbs;
- (void)addBreadcrumbWithBlock:(CDUnknownBlockType)arg1;
- (void)addBreadcrumb:(id)arg1;
- (id)init;

@end

