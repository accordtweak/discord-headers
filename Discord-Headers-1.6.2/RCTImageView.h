//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "RCTImageComponent.h"

@class NSString, RCTBridge, RCTImageSource, UIImage;

@interface RCTImageView : UIImageView <RCTImageComponent>
{
    RCTBridge *_bridge;
    struct CGSize _targetSize;
    CDUnknownBlockType _reloadImageCancellationBlock;
    UIImage *_defaultImage;
    int _renderingMode;
    RCTImageSource *_source;
    CDUnknownBlockType _onLoadStart;
    CDUnknownBlockType _onProgress;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onLoad;
    CDUnknownBlockType _onLoadEnd;
    struct UIEdgeInsets _capInsets;
}

@property(copy, nonatomic) CDUnknownBlockType onLoadEnd; // @synthesize onLoadEnd=_onLoadEnd;
@property(copy, nonatomic) CDUnknownBlockType onLoad; // @synthesize onLoad=_onLoad;
@property(copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(copy, nonatomic) CDUnknownBlockType onProgress; // @synthesize onProgress=_onProgress;
@property(copy, nonatomic) CDUnknownBlockType onLoadStart; // @synthesize onLoadStart=_onLoadStart;
@property(retain, nonatomic) RCTImageSource *source; // @synthesize source=_source;
@property(nonatomic) int renderingMode; // @synthesize renderingMode=_renderingMode;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) struct UIEdgeInsets capInsets; // @synthesize capInsets=_capInsets;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)reactSetFrame:(struct CGRect)arg1;
- (void)reloadImage;
- (void)clearImage;
- (void)cancelImageLoad;
- (void)setContentMode:(int)arg1;
- (BOOL)sourceNeedsReload;
- (void)setImage:(id)arg1;
- (void)updateImage;
- (id)init;
- (id)initWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly) Class superclass;

@end

