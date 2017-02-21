//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "RCTInvalidating.h"
#import "UIGestureRecognizerDelegate.h"

@class DCDMessageViewController, NSString;

@interface DCDChat : UIView <RCTInvalidating, UIGestureRecognizerDelegate>
{
    DCDMessageViewController *_messagesController;
}

+ (id)attributedStringWithContent:(id)arg1 result:(id)arg2 options:(id)arg3 attributes:(id)arg4;
+ (id)attributedStringWithContent:(id)arg1 result:(id)arg2 options:(id)arg3;
@property(retain, nonatomic) DCDMessageViewController *messagesController; // @synthesize messagesController=_messagesController;
- (void).cxx_destruct;
- (void)invalidate;
- (_Bool)isValid;
- (void)reactBridgeDidFinishTransaction;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (void)resetStyling;
- (void)handleCustomPan:(id)arg1;
- (id)initWithEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

