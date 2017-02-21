//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

@interface DCDChatManager : RCTViewManager
{
}

+ (id)__rct_export__2798;
+ (id)__rct_export__2687;
+ (id)__rct_export__2576;
+ (id)__rct_export__2455;
+ (id)__rct_export__2344;
+ (id)__rct_export__2233;
+ (id)__rct_export__2122;
+ (id)__rct_export__2011;
+ (id)__rct_export__1690;
+ (id)propConfig_showLeftButton;
+ (id)propConfig_rightButtonTitle;
+ (id)propConfig_rightEditorButtonTitle;
+ (id)propConfig_leftEditorButtonTitle;
+ (id)propConfig_borderColor;
+ (id)propConfig_disabledColor;
+ (id)propConfig_tintColor;
+ (id)propConfig_textViewBackgroundColor;
+ (id)propConfig_chatBackgroundColor;
+ (id)propConfig_textColor;
+ (id)propConfig_dark;
+ (id)propConfig_onQueryAutoCompleteUsers;
+ (id)propConfig_onCancelEditing;
+ (id)propConfig_onSaveEditing;
+ (id)propConfig_onLongPressInputBar;
+ (id)propConfig_onFetchEmoji;
+ (id)propConfig_onTapSeparator;
+ (id)propConfig_onTapMessage;
+ (id)propConfig_onLongPressMessage;
+ (id)propConfig_onTapLink;
+ (id)propConfig_onTapMention;
+ (id)propConfig_onTapChannel;
+ (id)propConfig_onTapImage;
+ (id)propConfig_onChatScrollPosition;
+ (id)propConfig_onPressRightButton;
+ (id)propConfig_onPressLeftButton;
+ (id)propConfig_onTextChange;
+ (id)propConfig_leftButtonTintColor;
+ (id)propConfig_containerWidth;
+ (id)propConfig_autoCompletionViewBackgroundColor;
+ (id)propConfig_separatorColor;
+ (id)propConfig_placeholderColor;
+ (id)propConfig_editorTitle;
+ (id)propConfig_bottomMarginToWindow;
+ (id)propConfig_autocompleteChannels;
+ (id)propConfig_autocompleteEmojis;
+ (id)propConfig_autocompleteUsers;
+ (id)propConfig_placeholder;
+ (id)propConfig_maxCharCount;
+ (id)propConfig_autoHideRightButton;
+ (id)propConfig_inverted;
+ (id)propConfig_shouldScrollToBottomAfterKeyboardShows;
+ (id)propConfig_keyboardPanning;
+ (id)propConfig_shakeToClear;
+ (id)propConfig_bounces;
+ (id)propConfig_disableInput;
+ (id)propConfig_rightButtonEnabled;
+ (id)propConfig_enabled;
+ (void)load;
+ (id)moduleName;
- (void)updateAutoComplete:(id)arg1 array:(id)arg2;
- (void)insertText:(id)arg1 text:(id)arg2;
- (void)setDefaultText:(id)arg1 text:(id)arg2;
- (void)scrollToMessage:(id)arg1 index:(id)arg2 animated:(id)arg3;
- (void)scrollToBottom:(id)arg1 animated:(id)arg2;
- (void)editContent:(id)arg1 content:(id)arg2;
- (void)updateRows:(id)arg1 rows:(id)arg2;
- (void)clearRows:(id)arg1;
- (void)updateTypingUsernames:(id)arg1 usernames:(id)arg2;
- (void)set_showLeftButton:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_rightButtonTitle:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_rightEditorButtonTitle:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_leftEditorButtonTitle:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_borderColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_disabledColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_tintColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_textViewBackgroundColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_chatBackgroundColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_textColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_dark:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (id)view;

@end

