//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKTextKitRenderer.h"

@interface CKTextKitRenderer (Tracking)
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (struct CGRect)trailingRect;
- (void)enumerateTextIndexesAtPosition:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)_internalRectForGlyphAtIndex:(unsigned long long)arg1 measureOption:(unsigned long long)arg2 layoutManager:(id)arg3 textContainer:(id)arg4 textStorage:(id)arg5;
- (unsigned long long)nearestTextIndexAtPosition:(struct CGPoint)arg1;
- (id)rectsForTextRange:(struct _NSRange)arg1 measureOption:(unsigned long long)arg2;
@end

