//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMapTable;

@interface GEOGeocodeRequester : NSObject
{
    NSMapTable *_pendingGeocodes;
    NSMapTable *_pendingBatchGeocodes;
    NSLock *_pendingGeocodesLock;
    NSMapTable *_providers;
}

+ (void)_countryProvidersDidChange:(id)arg1;
+ (id)sharedGeocodeRequester;
- (void)registerProvider:(Class)arg1;
- (void)cancelBatchReverseGeocode:(id)arg1;
- (void)batchReverseGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)cancelGeocode:(id)arg1;
- (void)reverseGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)forwardGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

