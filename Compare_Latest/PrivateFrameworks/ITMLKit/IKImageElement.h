//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class NSDictionary, NSURL, UIColor;

@interface IKImageElement : IKViewElement
{
    float _srcWidth;
    float _srcHeight;
    NSDictionary *_srcset;
    unsigned int _imageType;
    NSURL *_defaultURL;
}

+ (BOOL)shouldParseChildDOMElements;
@property(retain, nonatomic) NSURL *defaultURL; // @synthesize defaultURL=_defaultURL;
@property(readonly, nonatomic) unsigned int imageType; // @synthesize imageType=_imageType;
@property(readonly, retain, nonatomic) NSDictionary *srcset; // @synthesize srcset=_srcset;
- (void).cxx_destruct;
- (unsigned int)_imageTypeForTagName:(id)arg1;
@property(readonly, nonatomic) int reflect;
@property(readonly, nonatomic) int fill;
@property(readonly, nonatomic) UIColor *borderColor;
@property(readonly, nonatomic) unsigned int position;
@property(readonly, nonatomic) float height;
@property(readonly, nonatomic) float width;
@property(readonly, retain, nonatomic) NSURL *placeholderURL;
@property(readonly, nonatomic) NSURL *url;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
