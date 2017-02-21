//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKTextKitTruncating.h"

@class CKTextKitContext, NSAttributedString, NSCharacterSet, NSString;

@interface CKTextKitTailTruncater : NSObject <CKTextKitTruncating>
{
    CKTextKitContext *_context;
    NSAttributedString *_truncationAttributedString;
    NSCharacterSet *_avoidTailTruncationSet;
    struct CGSize _constrainedSize;
    vector_d5f79a51 _visibleRanges;
    struct CGRect _truncationStringRect;
}

@property(readonly, nonatomic) struct CGRect truncationStringRect; // @synthesize truncationStringRect=_truncationStringRect;
@property(readonly, nonatomic) vector_d5f79a51 visibleRanges; // @synthesize visibleRanges=_visibleRanges;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_truncate;
- (unsigned long long)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2 textStorage:(id)arg3;
- (unsigned long long)_calculateCharacterIndexBeforeTruncationMessage:(id)arg1 textStorage:(id)arg2 textContainer:(id)arg3;
- (id)initWithContext:(id)arg1 truncationAttributedString:(id)arg2 avoidTailTruncationSet:(id)arg3 constrainedSize:(struct CGSize)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
