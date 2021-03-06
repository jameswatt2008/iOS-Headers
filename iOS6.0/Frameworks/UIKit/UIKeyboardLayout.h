/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIKeyboardLayoutProtocol-Protocol.h"

@class NSMutableArray, UITouch;

@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol>
{
    NSMutableArray *_uncommittedTouches;
    UITouch *_activeTouch;
    UITouch *_shiftKeyTouch;
    int _orientation;
    int m_orientation;
}

@property int orientation; // @synthesize orientation=m_orientation;
@property(retain, nonatomic) UITouch *shiftKeyTouch; // @synthesize shiftKeyTouch=_shiftKeyTouch;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (id)simulateTouch:(struct CGPoint)arg1;
- (void)changeToKeyplane:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (id)keyplaneForKey:(id)arg1;
- (id)baseKeyForString:(id)arg1;
- (SEL)handlerForNotification:(id)arg1;
- (struct CGRect)frameForKeylayoutName:(id)arg1;
- (struct CGSize)dragGestureSize;
- (float)flickDistance;
- (float)hitBuffer;
- (void)phraseBoundaryDidChange;
- (void)commitTouchesBeforeTouch:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchCancelled:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchDragged:(id)arg1;
- (void)touchDown:(id)arg1;
- (BOOL)canProduceString:(id)arg1;
- (BOOL)shouldShowIndicator;
- (id)activationIndicatorView;
- (void)clearAllKeyDelegates;
- (BOOL)updateKeysWithDelegates;
- (void)setDelegate:(id)arg1 forKey:(id)arg2;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (BOOL)hasCandidateKeys;
- (id)candidateList;
- (BOOL)performSpaceAction;
- (BOOL)performReturnAction;
- (void)didClearInput;
- (void)longPressAction;
- (BOOL)doesKeyCharging;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)isShiftKeyBeingHeld;
- (void)setAutoshift:(BOOL)arg1;
- (void)setShift:(BOOL)arg1;
- (BOOL)ignoresShiftState;
- (BOOL)usesAutoShift;
- (void)updateLocalizedKeys:(BOOL)arg1;
- (void)deactivateActiveKeys;
- (void)clearUnusedObjects:(BOOL)arg1;
- (void)showKeyboardType:(int)arg1 withAppearance:(int)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addWipeRecognizer;
- (void)wipeGestureRecognized:(id)arg1;
- (void)addSwipeRecognizer;
- (void)swipeGestureRecognized:(id)arg1;

@end

