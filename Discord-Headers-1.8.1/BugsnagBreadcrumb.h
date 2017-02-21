//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface BugsnagBreadcrumb : NSObject
{
    NSDate *_timestamp;
    unsigned long long _type;
    NSString *_name;
    NSDictionary *_metadata;
}

+ (id)breadcrumbWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)objectValue;
- (_Bool)isValid;
- (id)init;

@end
