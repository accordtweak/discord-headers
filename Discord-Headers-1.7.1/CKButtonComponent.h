//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKComponent.h"

@interface CKButtonComponent : CKComponent
{
    struct CGSize _intrinsicSize;
}

+ (id)newWithTitles:(const unordered_map_4af95a89 *)arg1 titleColors:(const unordered_map_30601d37 *)arg2 images:(const unordered_map_ecc7abe5 *)arg3 backgroundImages:(const unordered_map_ecc7abe5 *)arg4 titleFont:(id)arg5 selected:(_Bool)arg6 enabled:(_Bool)arg7 action:(SEL)arg8 size:(const struct CKComponentSize *)arg9 attributes:(const unordered_map_89cf6b77 *)arg10 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration)arg11;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end

