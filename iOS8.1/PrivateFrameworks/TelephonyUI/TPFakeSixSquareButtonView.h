//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TPFakeSixSquareButtonView : UIView
{
    BOOL _onlyShowsFourButtons;
}

@property(nonatomic) BOOL onlyShowsFourButtons; // @synthesize onlyShowsFourButtons=_onlyShowsFourButtons;
- (void)_addButtonAtPosition:(int)arg1 withIcon:(id)arg2 title:(id)arg3;
- (void)addButtons;
- (struct CGSize)totalSize;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
