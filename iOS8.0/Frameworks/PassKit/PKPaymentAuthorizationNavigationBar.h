//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationBar.h"

@class NSString, PKPaymentAuthorizationNavigationBarBackgroundView, UIButton, UILabel, UIView;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar
{
    PKPaymentAuthorizationNavigationBarBackgroundView *_bgView;
    UILabel *_customTitleView;
    UIButton *_customButton;
    id _customButtonTarget;
    SEL _customButtonAction;
    UIView *_separatorView;
    NSString *_customTitle;
}

@property(retain, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
- (id)_buttonAttributedStringWithString:(id)arg1;
- (id)_titleAttributedStringWithString:(id)arg1 color:(id)arg2;
- (void)_prepareConstraints;
- (void)_createSubviewsWithFrame:(struct CGRect)arg1;
- (void)setCustomButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCustomButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setCustomTitleHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
