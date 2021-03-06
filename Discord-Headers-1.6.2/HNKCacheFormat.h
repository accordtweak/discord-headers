//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HNKCache, HNKDiskCache, NSString;

@interface HNKCacheFormat : NSObject
{
    BOOL _allowUpscaling;
    float _compressionQuality;
    NSString *_name;
    int _scaleMode;
    int _preloadPolicy;
    int _diskCacheLoadPolicy;
    CDUnknownBlockType _preResizeBlock;
    CDUnknownBlockType _postResizeBlock;
    HNKCache *_cache;
    unsigned int _requestCount;
    HNKDiskCache *_diskCache;
    struct CGSize _size;
    unsigned long long _diskCapacity;
}

@property(retain, nonatomic) HNKDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(nonatomic) unsigned int requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) __weak HNKCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) CDUnknownBlockType postResizeBlock; // @synthesize postResizeBlock=_postResizeBlock;
@property(copy, nonatomic) CDUnknownBlockType preResizeBlock; // @synthesize preResizeBlock=_preResizeBlock;
@property(nonatomic) int diskCacheLoadPolicy; // @synthesize diskCacheLoadPolicy=_diskCacheLoadPolicy;
@property(nonatomic) int preloadPolicy; // @synthesize preloadPolicy=_preloadPolicy;
@property(nonatomic) unsigned long long diskCapacity; // @synthesize diskCapacity=_diskCapacity;
@property(nonatomic) int scaleMode; // @synthesize scaleMode=_scaleMode;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) float compressionQuality; // @synthesize compressionQuality=_compressionQuality;
@property(nonatomic) BOOL allowUpscaling; // @synthesize allowUpscaling=_allowUpscaling;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *directory;
@property(readonly, nonatomic) unsigned long long diskSize;
- (id)resizedImageFromImage:(id)arg1;
- (id)initWithName:(id)arg1;

@end

