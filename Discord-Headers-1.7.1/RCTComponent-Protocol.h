//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@protocol RCTComponent <NSObject>
@property(copy, nonatomic) NSNumber *reactTag;
- (_Bool)isReactRootView;
- (NSNumber *)reactTagAtPoint:(struct CGPoint)arg1;
- (id <RCTComponent>)reactSuperview;
- (NSArray *)reactSubviews;
- (void)removeReactSubview:(id <RCTComponent>)arg1;
- (void)insertReactSubview:(id <RCTComponent>)arg1 atIndex:(long long)arg2;

@optional
- (void)reactBridgeDidFinishTransaction;
- (void)didSetProps:(NSArray *)arg1;
@end

