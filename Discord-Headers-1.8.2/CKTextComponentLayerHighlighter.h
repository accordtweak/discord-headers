//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKHighlightOverlayLayer, CKTextComponentLayer;

@interface CKTextComponentLayerHighlighter : NSObject
{
    CKTextComponentLayer *_textComponentLayer;
    CKHighlightOverlayLayer *_highlightOverlayLayer;
    struct _NSRange _highlightedRange;
}

@property(nonatomic) struct _NSRange highlightedRange; // @synthesize highlightedRange=_highlightedRange;
- (void).cxx_destruct;
- (void)layoutHighlight;
- (id)initWithTextComponentLayer:(id)arg1;

@end

