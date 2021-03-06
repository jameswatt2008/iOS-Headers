//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KNAnimationPluginContext.h"

@class KNAnimatedBuild, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext>
{
    BOOL _isWarmingUp;
    KNAnimatedBuild *_animatedBuild;
    NSArray *_magicMoveMatches;
    NSArray *_textures;
    NSDictionary *_transitionAttributes;
    unsigned int _direction;
    int _rendererType;
    double _percent;
    double _duration;
}

@property(nonatomic) int rendererType; // @synthesize rendererType=_rendererType;
@property(nonatomic) BOOL isWarmingUp; // @synthesize isWarmingUp=_isWarmingUp;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int direction; // @synthesize direction=_direction;
@property(nonatomic) NSDictionary *transitionAttributes; // @synthesize transitionAttributes=_transitionAttributes;
@property(nonatomic) NSArray *textures; // @synthesize textures=_textures;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) NSArray *magicMoveMatches; // @synthesize magicMoveMatches=_magicMoveMatches;
@property(nonatomic) KNAnimatedBuild *animatedBuild; // @synthesize animatedBuild=_animatedBuild;
- (id)description;
@property(readonly, nonatomic) BOOL isFrameRenderer;
@property(readonly, nonatomic) BOOL isMagicMove;
@property(readonly, nonatomic) BOOL isTransition;
@property(readonly, nonatomic) BOOL isBuild;

@end

