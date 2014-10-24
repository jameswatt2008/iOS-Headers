//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GQDNameMappable.h"

@class GQDColor, GQDRStrokePattern, NSString;

__attribute__((visibility("hidden")))
@interface GQDRStroke : NSObject <GQDNameMappable>
{
    float mMiterLimit;
    float mWidth;
    int mCap;
    int mJoin;
    GQDColor *mColor;
    GQDRStrokePattern *mPattern;
}

+ (const struct StateSpec *)stateForReading;
- (id)pattern;
- (id)color;
- (int)join;
- (int)cap;
- (float)width;
- (float)miterLimit;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
