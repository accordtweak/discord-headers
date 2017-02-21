//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSArray, NSMutableArray, NSString, UIColor, UILabel;

@interface SLKTextView : UITextView
{
    _Bool _didNotResignFirstResponder;
    _Bool _loupeVisible;
    _Bool _trackpadEnabled;
    _Bool _undoManagerEnabled;
    _Bool _dynamicTypeEnabled;
    _Bool _didFlashScrollIndicators;
    _Bool _formatting;
    unsigned long long _maxNumberOfLines;
    unsigned long long _pastableMediaTypes;
    UILabel *_placeholderLabel;
    double _initialFontSize;
    NSArray *_keyboardCommands;
    long long _verticalMoveDirection;
    NSMutableArray *_registeredFormattingTitles;
    NSMutableArray *_registeredFormattingSymbols;
    struct CGRect _verticalMoveStartCaretRect;
    struct CGRect _verticalMoveLastCaretRect;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (double)pointSizeDifferenceForCategory:(id)arg1;
@property(nonatomic, getter=isFormatting) _Bool formatting; // @synthesize formatting=_formatting;
@property(retain, nonatomic) NSMutableArray *registeredFormattingSymbols; // @synthesize registeredFormattingSymbols=_registeredFormattingSymbols;
@property(retain, nonatomic) NSMutableArray *registeredFormattingTitles; // @synthesize registeredFormattingTitles=_registeredFormattingTitles;
@property(nonatomic) _Bool didFlashScrollIndicators; // @synthesize didFlashScrollIndicators=_didFlashScrollIndicators;
@property(nonatomic) struct CGRect verticalMoveLastCaretRect; // @synthesize verticalMoveLastCaretRect=_verticalMoveLastCaretRect;
@property(nonatomic) struct CGRect verticalMoveStartCaretRect; // @synthesize verticalMoveStartCaretRect=_verticalMoveStartCaretRect;
@property(nonatomic) long long verticalMoveDirection; // @synthesize verticalMoveDirection=_verticalMoveDirection;
@property(retain, nonatomic) NSArray *keyboardCommands; // @synthesize keyboardCommands=_keyboardCommands;
@property(nonatomic) double initialFontSize; // @synthesize initialFontSize=_initialFontSize;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic, getter=isDynamicTypeEnabled) _Bool dynamicTypeEnabled; // @synthesize dynamicTypeEnabled=_dynamicTypeEnabled;
@property(nonatomic) _Bool undoManagerEnabled; // @synthesize undoManagerEnabled=_undoManagerEnabled;
@property(readonly, nonatomic, getter=isTrackpadEnabled) _Bool trackpadEnabled; // @synthesize trackpadEnabled=_trackpadEnabled;
@property(nonatomic, getter=isLoupeVisible) _Bool loupeVisible; // @synthesize loupeVisible=_loupeVisible;
@property(nonatomic) _Bool didNotResignFirstResponder; // @synthesize didNotResignFirstResponder=_didNotResignFirstResponder;
@property(nonatomic) unsigned long long pastableMediaTypes; // @synthesize pastableMediaTypes=_pastableMediaTypes;
@property(nonatomic) unsigned long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
- (void).cxx_destruct;
- (void)dealloc;
- (void)slk_unregisterNotifications;
- (void)slk_registerNotifications;
- (_Bool)slk_isNewVerticalMovementForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)slk_closestPositionToPosition:(id)arg1 inDirection:(long long)arg2;
- (void)slk_moveCursorTodirection:(long long)arg1;
- (void)didPressAnyArrowKey:(id)arg1;
- (void)slk_didPressCommandZKeys:(id)arg1;
- (void)slk_didPressLineBreakKeys:(id)arg1;
- (id)keyCommands;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)slk_didHideMenuController:(id)arg1;
- (void)slk_willShowMenuController:(id)arg1;
- (void)slk_didChangeContentSizeCategory:(id)arg1;
- (void)slk_didChangeTextInputMode:(id)arg1;
- (void)slk_didEndEditing:(id)arg1;
- (void)slk_didChangeText:(id)arg1;
- (void)slk_didBeginEditing:(id)arg1;
@property(readonly, nonatomic) NSArray *registeredSymbols;
- (void)registerMarkdownFormattingSymbol:(id)arg1 withTitle:(id)arg2;
- (void)slk_format:(id)arg1;
- (id)slk_formattingSymbolWithTitle:(id)arg1;
- (id)slk_formattingTitleFromSelector:(SEL)arg1;
- (void)slk_presentFormattingMenu:(id)arg1;
- (void)slk_redo:(id)arg1;
- (void)slk_undo:(id)arg1;
- (void)slk_addCustomMenuControllerItems;
- (void)refreshInputViews;
- (void)refreshFirstResponder;
- (void)slk_flashScrollIndicatorsIfNeeded;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)paste:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)endFloatingCursor;
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFontName:(id)arg1 pointSize:(double)arg2 withContentSizeCategory:(id)arg3;
- (void)setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
@property(nonatomic, getter=isTypingSuggestionEnabled) _Bool typingSuggestionEnabled;
@property(copy, nonatomic) UIColor *placeholderColor;
@property(copy, nonatomic) NSString *placeholder;
- (struct CGRect)slk_placeholderRectThatFits:(struct CGRect)arg1;
- (_Bool)slk_shouldHidePlaceholder;
@property(readonly, nonatomic) _Bool isExpanding;
- (id)slk_supportedMediaTypes;
- (id)slk_pasteboardContentType;
- (_Bool)slk_isPasteboardItemSupported;
- (id)slk_pastedItem;
@property(readonly, nonatomic, getter=isFormattingEnabled) _Bool formattingEnabled;
@property(readonly, nonatomic) unsigned long long numberOfLines;
- (void)layoutSubviews;
- (void)layoutIfNeeded;
- (struct CGSize)intrinsicContentSize;
- (void)slk_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)slk_prepareForUndo:(id)arg1;
- (id)slk_wordAtRange:(struct _NSRange)arg1 rangeInText:(struct _NSRange *)arg2;
- (id)slk_wordAtCaretRange:(struct _NSRange *)arg1;
- (struct _NSRange)slk_insertText:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)slk_insertTextAtCaretRange:(id)arg1;
- (void)slk_insertNewLineBreak;
- (void)slk_scrollToBottomAnimated:(_Bool)arg1;
- (void)slk_scrollToCaretPositonAnimated:(_Bool)arg1;
- (void)slk_clearText:(_Bool)arg1;

// Remaining properties
@property(nonatomic) __weak id <SLKTextViewDelegate><UITextViewDelegate> delegate; // @dynamic delegate;

@end

