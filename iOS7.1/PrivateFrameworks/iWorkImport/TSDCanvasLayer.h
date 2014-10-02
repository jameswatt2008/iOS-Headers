//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDNoDefaultImplicitActionLayer.h>

@class TSDCanvasView, TSDInteractiveCanvasController;

__attribute__((visibility("hidden")))
@interface TSDCanvasLayer : TSDNoDefaultImplicitActionLayer
{
    TSDInteractiveCanvasController *mController;
    struct CGSize mUnscaledSize;
    struct UIEdgeInsets mContentInset;
    float mViewScale;
    unsigned int mViewScaleAnimationCount;
    BOOL mAllowsPinchZoom;
    float mMinimumPinchViewScale;
    float mMaximumPinchViewScale;
    BOOL mShowsScaleFeedback;
    BOOL mIsInfinite;
    BOOL mHorizontallyCenteredInScrollView;
    BOOL mVerticallyCenteredInScrollView;
    BOOL mDisableLayout;
}

@property(nonatomic) BOOL verticallyCenteredInScrollView; // @synthesize verticallyCenteredInScrollView=mVerticallyCenteredInScrollView;
@property(nonatomic) BOOL horizontallyCenteredInScrollView; // @synthesize horizontallyCenteredInScrollView=mHorizontallyCenteredInScrollView;
@property(nonatomic, getter=isLayoutDisabled) BOOL disableLayout; // @synthesize disableLayout=mDisableLayout;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=mUnscaledSize;
@property(nonatomic) TSDInteractiveCanvasController *controller; // @synthesize controller=mController;
@property(nonatomic, getter=isInfinite) BOOL infinite; // @synthesize infinite=mIsInfinite;
@property(nonatomic) BOOL showsScaleFeedback; // @synthesize showsScaleFeedback=mShowsScaleFeedback;
@property(nonatomic) BOOL allowsPinchZoom; // @synthesize allowsPinchZoom=mAllowsPinchZoom;
@property(nonatomic) float maximumPinchViewScale; // @synthesize maximumPinchViewScale=mMaximumPinchViewScale;
@property(nonatomic) float minimumPinchViewScale; // @synthesize minimumPinchViewScale=mMinimumPinchViewScale;
@property(nonatomic) float viewScale; // @synthesize viewScale=mViewScale;
- (struct CGRect)p_fixedBoundsForScrollViewSize:(struct CGSize)arg1 viewScale:(float)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (void)p_setEnclosingScrollViewZoomParameters;
- (void)p_setViewScale:(float)arg1 preservingScrollOffset:(BOOL)arg2;
- (void)p_setViewScale:(float)arg1;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect)arg1;
- (void)animateToViewScale:(float)arg1 contentCenter:(struct CGPoint)arg2 contentInset:(struct UIEdgeInsets)arg3 duration:(double)arg4 animation:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)animateToViewScale:(float)arg1 contentCenter:(struct CGPoint)arg2 contentInset:(struct UIEdgeInsets)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setViewScale:(float)arg1 andScrollViewFrame:(struct CGRect)arg2 maintainPosition:(BOOL)arg3 animated:(BOOL)arg4;
- (struct CGPoint)p_contentOffsetForUnscaledContentCenter:(struct CGPoint)arg1 viewScale:(float)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (struct CGPoint)contentOffsetForUnscaledContentCenter:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGPoint unscaledContentCenter;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
@property(readonly, nonatomic) TSDCanvasView *canvasView;
- (void)p_reenableDrawingAfterResumingFromBackground;
- (void)layoutSublayers;
- (void)layoutIfNeededIgnoringDisabledLayout;
- (void)setNeedsLayout;
- (void)fixFrameAndScrollView;
@property(nonatomic) BOOL centeredInScrollView; // @dynamic centeredInScrollView;
- (void)teardown;
- (void)p_scrollViewScrollerStyleDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)p_commonInit;

@end
