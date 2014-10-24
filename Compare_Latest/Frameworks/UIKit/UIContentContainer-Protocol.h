//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITraitCollection;

@protocol UIContentContainer <NSObject>
@property(readonly, nonatomic) struct CGSize preferredContentSize;
- (void)willTransitionToTraitCollection:(UITraitCollection *)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (struct CGSize)sizeForChildContentContainer:(id <UIContentContainer>)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id <UIContentContainer>)arg1;
@end
