/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet
{
}

+ (id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)standingsSnippet;
@property(nonatomic) _Bool showCardinalPositions;
@property(copy, nonatomic) NSArray *selectedEntities;
@property(copy, nonatomic) NSArray *entities;
@property(copy, nonatomic) NSArray *columns;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

