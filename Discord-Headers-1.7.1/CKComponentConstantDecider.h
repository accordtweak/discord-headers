//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKComponentDeciding.h"

@class NSString;

@interface CKComponentConstantDecider : NSObject <CKComponentDeciding>
{
    _Bool _enabled;
}

- (id)componentCompliantModel:(id)arg1;
- (id)initWithEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

