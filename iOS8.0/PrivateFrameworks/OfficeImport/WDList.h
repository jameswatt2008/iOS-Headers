//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDList : NSObject
{
    WDDocument *mDocument;
    long mListId;
    long mListDefinitionId;
    NSMutableArray *mLevelOverrides;
}

@property(readonly, nonatomic) long listDefinitionId; // @synthesize listDefinitionId=mListDefinitionId;
@property(readonly, nonatomic) long listId; // @synthesize listId=mListId;
- (id)description;
- (id)initWithDocument:(id)arg1 listId:(long)arg2 listDefinitionId:(long)arg3;
- (id)levelOverrides;
- (id)addLevelOverrideWithLevel:(unsigned char)arg1;
- (id)levelOverrideForLevel:(unsigned char)arg1;
- (id)levelOverrideAt:(unsigned int)arg1;
- (unsigned int)levelOverrideCount;
- (void)dealloc;

@end

