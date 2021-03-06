//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInputViewController.h>

@class NSArray, NSMutableDictionary, UIKeyboard, UIResponder<UITextInput>;

@interface UISystemInputViewController : UIInputViewController
{
    NSMutableDictionary *_accessoryViews;
    NSMutableDictionary *_accessoryConstraints;
    UIResponder<UITextInput> *_persistentDelegate;
    UIKeyboard *_keyboard;
    NSArray *_keyboardConstraits;
}

+ (BOOL)_requiresProxyInterface;
@property(retain, nonatomic) NSArray *keyboardConstraits; // @synthesize keyboardConstraits=_keyboardConstraits;
@property(retain, nonatomic) UIKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) UIResponder<UITextInput> *persistentDelegate; // @synthesize persistentDelegate=_persistentDelegate;
- (void)viewWillLayoutSubviews;
- (void)setAccessoryView:(id)arg1 forEdge:(int)arg2;
- (id)accessoryViewForEdge:(int)arg1;
- (void)setConstraits:(id)arg1 forEdge:(int)arg2;
- (id)constraitsForEdge:(int)arg1;
- (void)updateViewConstraints;
- (id)constraintFromView:(id)arg1 attribute:(int)arg2 toView:(id)arg3 attribute:(int)arg4;
- (id)_keyboard;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)dealloc;
- (void)loadView;
- (id)init;

@end

