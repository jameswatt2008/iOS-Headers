/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKDataRequest.h>

@class GKPlayer, NSArray;

@interface GKGetGameRecordsRequest : GKDataRequest
{
    NSArray *_games;
    GKPlayer *_player;
}

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSArray *games; // @synthesize games=_games;
- (id)request;
- (id)key;
- (void)dealloc;

@end

