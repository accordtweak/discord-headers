//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextViewDelegate.h"

@class NSString, SLKTextView;

@protocol SLKTextViewDelegate <UITextViewDelegate>

@optional
- (BOOL)textView:(SLKTextView *)arg1 shouldInsertSuffixForFormattingWithSymbol:(NSString *)arg2 prefixRange:(struct _NSRange)arg3;
- (BOOL)textView:(SLKTextView *)arg1 shouldOfferFormattingForSymbol:(NSString *)arg2;
@end
