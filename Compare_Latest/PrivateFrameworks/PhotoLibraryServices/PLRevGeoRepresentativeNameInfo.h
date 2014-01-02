/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableOrderedSet, NSString;

@interface PLRevGeoRepresentativeNameInfo : NSObject
{
    _Bool _allEntriesAtHome;
    _Bool _allEntriesMatchHomeForOrderType;
    _Bool _addCountyIfNeeded;
    NSString *_name;
    unsigned long long _type;
    unsigned long long _matchingCount;
    NSMutableOrderedSet *_geoPlaces;
    NSMutableOrderedSet *_remainingGeoPlaces;
    NSString *_localizedName;
}

@property(nonatomic) _Bool addCountyIfNeeded; // @synthesize addCountyIfNeeded=_addCountyIfNeeded;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSMutableOrderedSet *remainingGeoPlaces; // @synthesize remainingGeoPlaces=_remainingGeoPlaces;
@property(readonly, nonatomic) NSMutableOrderedSet *geoPlaces; // @synthesize geoPlaces=_geoPlaces;
@property(nonatomic) _Bool allEntriesMatchHomeForOrderType; // @synthesize allEntriesMatchHomeForOrderType=_allEntriesMatchHomeForOrderType;
@property(nonatomic) _Bool allEntriesAtHome; // @synthesize allEntriesAtHome=_allEntriesAtHome;
@property(nonatomic) unsigned long long matchingCount; // @synthesize matchingCount=_matchingCount;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_resourceKeysForOrderType:(unsigned long long)arg1 countryCode:(id)arg2 administrativeAreaCode:(id)arg3;
- (_Bool)_administrativeAreaCode:(id)arg1 supportedForOrderType:(unsigned long long)arg2;
- (_Bool)_currentLanguageSupportsModifiersForOrderType:(unsigned long long)arg1;
- (void)_addResourceKeys:(id)arg1 toTypeMap:(id)arg2 forOrderType:(unsigned long long)arg3 countryCode:(id)arg4;
- (id)_typeKeyForOrderType:(unsigned long long)arg1 countryCode:(id)arg2;
- (void)removeGeoPlacesFromRemaining:(id)arg1;
- (void)prepareRemainingGeoPlaces;
- (void)clearGeoPlaces;
- (void)addGeoPlaces:(id)arg1;
- (void)addGeoPlace:(id)arg1;
- (void)updateWithAddedNameInfo:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;

@end
