/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SAMovieV2MovieDetailSnippet;

@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet
{
}

+ (id)theaterShowtimeListSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)theaterShowtimeListSnippet;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *theaterShowtimeListCells;
@property(copy, nonatomic) NSString *subtitle;
@property(retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
