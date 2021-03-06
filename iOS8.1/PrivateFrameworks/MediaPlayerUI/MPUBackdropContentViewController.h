//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MPUPinningView, UIView, _UIBackdropView;

@interface MPUBackdropContentViewController : UIViewController
{
    _UIBackdropView *_backdropView;
    MPUPinningView *_pinningView;
    int _backdropViewPrivateStyle;
    UIView *_backgroundView;
    UIViewController *_contentViewController;
}

@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) int backdropViewPrivateStyle; // @synthesize backdropViewPrivateStyle=_backdropViewPrivateStyle;
- (void).cxx_destruct;
- (void)_embedBackgroundView;
- (void)viewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotate;
- (int)preferredInterfaceOrientationForPresentation;
- (id)initWithContentViewController:(id)arg1;

@end

