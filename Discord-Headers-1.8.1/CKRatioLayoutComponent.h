//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKComponent.h"

@interface CKRatioLayoutComponent : CKComponent
{
    double _ratio;
    CKComponent *_component;
}

+ (id)newWithRatio:(double)arg1 size:(const struct CKComponentSize *)arg2 component:(id)arg3;
- (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
