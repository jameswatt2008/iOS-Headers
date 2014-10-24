//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CALayer, NSMutableArray, NSMutableDictionary, NSString, TSDTextureSet, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDTexturedRectangle : NSObject <NSCopying>
{
    struct CGPoint mOffset;
    struct CGPoint mOriginalPosition;
    struct CGSize mSize;
    struct CGRect mContentRect;
    struct CGRect mOriginalFrame;
    CALayer *mLayer;
    CDUnknownBlockType mRenderBlock;
    struct CGImage *mSourceImage;
    struct CGImage *mBakedImage;
    TSDTextureSet *mParent;
    int mTextureType;
    float mTextureOpacity;
    unsigned int mSingleTextureName;
    BOOL mSingleTextureContainsMipmaps;
    BOOL mIsFlattened;
    NSMutableDictionary *mAttributes;
    NSMutableArray *mTags;
    struct CGColorSpace *mColorSpace;
    BOOL _isVerticalText;
    float _textBaseline;
    float _textXHeight;
    TSUColor *_textColor;
    NSString *_text;
    struct CGSize _singleTextureSize;
    struct _NSRange _textRange;
}

+ (struct CGRect)boundingRectOnCanvasForTextures:(id)arg1;
+ (struct CGRect)boundingRectForTextures:(id)arg1;
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) TSUColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) float textXHeight; // @synthesize textXHeight=_textXHeight;
@property(nonatomic) float textBaseline; // @synthesize textBaseline=_textBaseline;
@property(nonatomic) BOOL isVerticalText; // @synthesize isVerticalText=_isVerticalText;
@property(readonly, nonatomic) struct CGSize singleTextureSize; // @synthesize singleTextureSize=_singleTextureSize;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=mTags;
@property(nonatomic) float textureOpacity; // @synthesize textureOpacity=mTextureOpacity;
@property(nonatomic) int textureType; // @synthesize textureType=mTextureType;
@property(nonatomic) struct CGSize size; // @synthesize size=mSize;
@property(nonatomic) TSDTextureSet *parent; // @synthesize parent=mParent;
@property(nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=mOriginalPosition;
@property(nonatomic) BOOL isFlattened; // @synthesize isFlattened=mIsFlattened;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=mLayer;
@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=mColorSpace;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=mContentRect;
- (struct CGRect)convertToCanvasCoordinates:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect frameOnCanvas;
@property(readonly, nonatomic) CALayer *parentLayer;
@property(readonly, nonatomic) BOOL isBackgroundTexture;
- (void)renderIntoContext:(struct CGContext *)arg1;
- (void)bakeLayerWithAngle:(float)arg1 scale:(float)arg2;
@property(readonly, nonatomic) struct CGImage *image;
@property(readonly, nonatomic) float singleTextureOpacity;
- (void)releaseSingleTexture;
@property(readonly, nonatomic) unsigned int singleTextureTarget;
@property(readonly, nonatomic) unsigned int singleTextureName;
- (void)setupSingleTexture;
- (void)setupSingleTextureAndGenerateMipMaps:(BOOL)arg1;
- (void)renderLayerContentsIfNeeded;
@property(readonly, nonatomic) BOOL isRenderable;
- (void)resetToSourceImage;
- (struct CGImage *)p_newImageAndBufferWithAngle:(float)arg1 scale:(float)arg2 offset:(struct CGPoint)arg3;
- (struct CGColorSpace *)p_colorSpace;
- (void)resetAnchorPoint;
- (void)adjustAnchorRelativeToParentsCenterOfRotation:(struct CGPoint)arg1 isMagicMove:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isImageSource;
@property(readonly, nonatomic) struct CGRect frame;
@property(nonatomic) struct CGPoint offset;
- (void)p_updateFrame;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (void)teardown;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2 renderBlock:(CDUnknownBlockType)arg3;

@end
