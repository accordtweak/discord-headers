//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSString;

@interface CKAppliedAnimationContext : NSObject
{
    CALayer *_targetLayer;
    NSString *_key;
}

@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) CALayer *targetLayer; // @synthesize targetLayer=_targetLayer;
- (void).cxx_destruct;
- (id)initWithTargetLayer:(id)arg1 key:(id)arg2;

@end

