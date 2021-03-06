//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTShadowView.h"

@class NSArray, NSAttributedString, NSString, NSTextStorage, UIColor;

@interface RCTShadowText : RCTShadowView
{
    NSTextStorage *_cachedTextStorage;
    double _cachedTextStorageWidth;
    double _cachedTextStorageWidthMode;
    NSAttributedString *_cachedAttributedString;
    double _effectiveLetterSpacing;
    _Bool _isHighlighted;
    _Bool _allowFontScaling;
    _Bool _adjustsFontSizeToFit;
    UIColor *_color;
    NSString *_fontFamily;
    double _fontSize;
    NSString *_fontWeight;
    NSString *_fontStyle;
    NSArray *_fontVariant;
    double _letterSpacing;
    double _lineHeight;
    unsigned long long _numberOfLines;
    long long _ellipsizeMode;
    long long _textAlign;
    long long _writingDirection;
    UIColor *_textDecorationColor;
    long long _textDecorationStyle;
    long long _textDecorationLine;
    double _fontSizeMultiplier;
    double _opacity;
    double _textShadowRadius;
    UIColor *_textShadowColor;
    double _minimumFontScale;
    struct CGSize _shadowOffset;
    struct CGSize _textShadowOffset;
}

@property(nonatomic) double minimumFontScale; // @synthesize minimumFontScale=_minimumFontScale;
@property(nonatomic) _Bool adjustsFontSizeToFit; // @synthesize adjustsFontSizeToFit=_adjustsFontSizeToFit;
@property(retain, nonatomic) UIColor *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(nonatomic) double textShadowRadius; // @synthesize textShadowRadius=_textShadowRadius;
@property(nonatomic) struct CGSize textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) _Bool allowFontScaling; // @synthesize allowFontScaling=_allowFontScaling;
@property(nonatomic) double fontSizeMultiplier; // @synthesize fontSizeMultiplier=_fontSizeMultiplier;
@property(nonatomic) long long textDecorationLine; // @synthesize textDecorationLine=_textDecorationLine;
@property(nonatomic) long long textDecorationStyle; // @synthesize textDecorationStyle=_textDecorationStyle;
@property(retain, nonatomic) UIColor *textDecorationColor; // @synthesize textDecorationColor=_textDecorationColor;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection=_writingDirection;
@property(nonatomic) long long textAlign; // @synthesize textAlign=_textAlign;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) long long ellipsizeMode; // @synthesize ellipsizeMode=_ellipsizeMode;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(copy, nonatomic) NSArray *fontVariant; // @synthesize fontVariant=_fontVariant;
@property(copy, nonatomic) NSString *fontStyle; // @synthesize fontStyle=_fontStyle;
@property(copy, nonatomic) NSString *fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)calculateSize:(id)arg1;
- (long long)numberOfLinesRequired:(id)arg1;
- (long long)attemptScale:(double)arg1 inStorage:(id)arg2 forFrame:(struct CGRect)arg3;
- (struct CGSize)calculateOptimumScaleInFrame:(struct CGRect)arg1 forStorage:(id)arg2 minScale:(double)arg3 maxScale:(double)arg4 prevMid:(double)arg5;
- (struct CGRect)updateStorage:(id)arg1 toFitFrame:(struct CGRect)arg2;
- (struct CGRect)calculateTextFrame:(id)arg1;
- (void)_setParagraphStyleOnAttributedString:(id)arg1 fontLineHeight:(double)arg2 heightOfTallestSubview:(double)arg3;
- (void)_addAttribute:(id)arg1 withValue:(id)arg2 toAttributedString:(id)arg3;
- (id)_attributedStringWithFontFamily:(id)arg1 fontSize:(id)arg2 fontWeight:(id)arg3 fontStyle:(id)arg4 letterSpacing:(id)arg5 useBackgroundColor:(_Bool)arg6 foregroundColor:(id)arg7 backgroundColor:(id)arg8 opacity:(double)arg9;
- (id)attributedString;
- (void)recomputeText;
- (void)dirtyText;
- (id)buildTextStorageForWidth:(double)arg1 widthMode:(int)arg2;
- (void)applyLayoutToChildren:(struct CSSNode *)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(struct CGPoint)arg3;
- (void)applyLayoutNode:(struct CSSNode *)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(struct CGPoint)arg3;
- (id)processUpdatedProperties:(id)arg1 parentProperties:(id)arg2;
- (void)contentSizeMultiplierDidChange:(id)arg1;
- (_Bool)isCSSLeafNode;
- (id)description;
- (void)dealloc;
- (id)init;

@end

