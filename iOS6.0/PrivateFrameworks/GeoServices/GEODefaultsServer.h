/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "GEOServer.h"

@interface GEODefaultsServer : GEOServer
{
}

+ (id)_acceptableKeysWithCountrySuffixes;
+ (id)_acceptableKeys;
+ (id)identifier;
- (void)countryCodeDidChangeWithMessage:(id)arg1;
- (void)countryProvidersDidChangeWithMessage:(id)arg1;
- (void)resetAllDefaultsWithMessage:(id)arg1;
- (void)registerNetworkDefaultsWithMessage:(id)arg1;
- (void)registerInitialDefaultsWithMessage:(id)arg1;
- (void)setDefaultWithMessage:(id)arg1;

@end
