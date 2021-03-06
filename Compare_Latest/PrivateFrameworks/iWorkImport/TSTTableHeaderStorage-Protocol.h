//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSTTableHeaderInfo;

@protocol TSTTableHeaderStorage <NSObject>
- (unsigned long)lowerBound:(unsigned long)arg1;
- (unsigned long)upperBound:(unsigned long)arg1;
- (unsigned long)maxKey;
- (unsigned long)minKey;
- (int)count;
- (void)shiftKeysAtIndex:(unsigned long)arg1 amount:(long)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 willModify:(BOOL)arg3;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(BOOL)arg2;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned long)arg1;
- (void)setHeader:(TSTTableHeaderInfo *)arg1 forKey:(unsigned long)arg2;
- (TSTTableHeaderInfo *)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3;
- (TSTTableHeaderInfo *)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2;
@end

