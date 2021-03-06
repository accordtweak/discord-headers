//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKAsyncLayer.h"

@class CKTextComponentLayerHighlighter, CKTextKitRenderer;

@interface CKTextComponentLayer : CKAsyncLayer
{
    CKTextComponentLayerHighlighter *_highlighter;
    CKTextKitRenderer *_renderer;
}

+ (void)drawInContext:(struct CGContext *)arg1 parameters:(id)arg2;
+ (id)defaultValueForKey:(id)arg1;
@property(retain, nonatomic) CKTextKitRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)layoutSublayers;
@property(readonly, nonatomic) CKTextComponentLayerHighlighter *highlighter;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2;
- (id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1;
- (id)drawParameters;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;

@end

