//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIImage;

@interface CKNetworkImageSpecifier : NSObject
{
    NSURL *_url;
    UIImage *_defaultImage;
    id <CKNetworkImageDownloading> _imageDownloader;
    id _scenePath;
    struct CGRect _cropRect;
}

@property(readonly, nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) id scenePath; // @synthesize scenePath=_scenePath;
@property(readonly, nonatomic) id <CKNetworkImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithURL:(id)arg1 defaultImage:(id)arg2 imageDownloader:(id)arg3 scenePath:(id)arg4 cropRect:(struct CGRect)arg5;

@end

