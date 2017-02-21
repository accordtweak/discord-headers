//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface CKTextKitContext : NSObject
{
    struct mutex _textKitMutex;
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)performBlockWithLockedTextKitComponents:(CDUnknownBlockType)arg1;
- (id)initWithAttributedString:(id)arg1 lineBreakMode:(int)arg2 maximumNumberOfLines:(unsigned int)arg3 constrainedSize:(struct CGSize)arg4;

@end
