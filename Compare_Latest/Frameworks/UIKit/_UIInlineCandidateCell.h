/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString, UIFont;

// Not exported
@interface _UIInlineCandidateCell : UIView
{
    NSString *_candidate;
    unsigned long long _index;
    UIFont *_font;
    struct CGSize _stringImageSize;
    _Bool _highlighted;
    id _target;
    SEL _action;
    _Bool _lastItem;
    _Bool _dontDrawRightEdge;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setLastItem:(_Bool)arg1;
- (void)dontDrawRightEdge:(_Bool)arg1;
- (unsigned long long)index;
- (struct CGSize)stringImageSize;
- (void)dealloc;
- (id)initWithCandidate:(id)arg1 andIndex:(unsigned long long)arg2 withFontSize:(double)arg3 target:(id)arg4 action:(SEL)arg5;

@end
