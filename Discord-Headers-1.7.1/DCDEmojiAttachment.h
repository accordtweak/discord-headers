//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextAttachment.h"

@interface DCDEmojiAttachment : NSTextAttachment
{
    struct CGSize _size;
    struct CGPoint _origin;
}

@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithURLString:(id)arg1 formatName:(id)arg2 size:(struct CGSize)arg3 origin:(struct CGPoint)arg4;

@end

