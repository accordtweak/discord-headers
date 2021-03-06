//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImagePickerController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, RCTEventDispatcher;

@interface DCDCameraViewController : UIImagePickerController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    RCTEventDispatcher *_eventDispatcher;
}

@property(retain, nonatomic) RCTEventDispatcher *eventDispatcher; // @synthesize eventDispatcher=_eventDispatcher;
- (void).cxx_destruct;
- (id)scaleAndRotateImage:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)reactTag;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

