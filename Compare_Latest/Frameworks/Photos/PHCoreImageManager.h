//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PHCoreImageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_requestLookupTableIsolationQueue;
    NSObject<OS_dispatch_queue> *_preheatItemIsolationQueue;
    NSMapTable *_requestLookupTable;
    NSMutableDictionary *_preheatItemSources;
    NSMutableDictionary *_preheatItemMapTables;
    NSMapTable *_perDomainPreheatItemMapTables;
    NSMapTable *_perDomainHighPriorityRequestWaitGroups;
    NSObject<OS_dispatch_queue> *_CPLDownloadUpdateIsolationQueue;
    int _CPLDownloadUpdateNotifyToken;
    NSObject<OS_dispatch_queue> *_CPLDownloadFireAndForgetRequestQueue;
}

+ (int)_pickDegradedFormatWithSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(id)arg3 aspectRatio:(double)arg4 hasAdjustmentsHandler:(CDUnknownBlockType)arg5 isTableFormat:(char *)arg6;
+ (int)_fastestDegradedFormatWithSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(id)arg3 aspectRatio:(double)arg4 hasAdjustmentsHandler:(CDUnknownBlockType)arg5 isTableFormat:(char *)arg6;
+ (int)_standardDegradedFormatWithSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(id)arg3 aspectRatio:(double)arg4 hasAdjustmentsHandler:(CDUnknownBlockType)arg5 isTableFormat:(char *)arg6;
+ (int)_bestFormatWithSize:(struct CGSize)arg1 contentMode:(int)arg2 options:(id)arg3 aspectRatio:(double)arg4 hasAdjustmentsHandler:(CDUnknownBlockType)arg5 isTableFormat:(char *)arg6 desiredImagePixelSize:(struct CGSize *)arg7;
+ (BOOL)retina;
+ (BOOL)_formatIsLessThanFullscreen:(int)arg1;
+ (int)_fallbackLargestFormatForRequestVersion:(int)arg1;
+ (struct CGSize)_sizeWithDimension:(float)arg1 aspectRatio:(double)arg2 preserveAspectRatio:(BOOL)arg3;
+ (struct CGImage *)_newResizedImageForImage:(struct CGImage *)arg1 withSize:(struct CGSize)arg2 normalizedCropRect:(struct CGRect)arg3 contentMode:(int)arg4;
+ (struct CGSize)_aspectedSizeWithSize:(struct CGSize)arg1 maxDimension:(float)arg2;
+ (id)_debugFilenameForAsset:(id)arg1;
+ (id)_descriptionForDomain:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *CPLDownloadFireAndForgetRequestQueue; // @synthesize CPLDownloadFireAndForgetRequestQueue=_CPLDownloadFireAndForgetRequestQueue;
@property(nonatomic) int CPLDownloadUpdateNotifyToken; // @synthesize CPLDownloadUpdateNotifyToken=_CPLDownloadUpdateNotifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *CPLDownloadUpdateIsolationQueue; // @synthesize CPLDownloadUpdateIsolationQueue=_CPLDownloadUpdateIsolationQueue;
@property(retain, nonatomic) NSMapTable *perDomainHighPriorityRequestWaitGroups; // @synthesize perDomainHighPriorityRequestWaitGroups=_perDomainHighPriorityRequestWaitGroups;
@property(retain, nonatomic) NSMapTable *perDomainPreheatItemMapTables; // @synthesize perDomainPreheatItemMapTables=_perDomainPreheatItemMapTables;
@property(retain, nonatomic) NSMutableDictionary *preheatItemMapTables; // @synthesize preheatItemMapTables=_preheatItemMapTables;
@property(retain, nonatomic) NSMutableDictionary *preheatItemSources; // @synthesize preheatItemSources=_preheatItemSources;
@property(retain, nonatomic) NSMapTable *requestLookupTable; // @synthesize requestLookupTable=_requestLookupTable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *preheatItemIsolationQueue; // @synthesize preheatItemIsolationQueue=_preheatItemIsolationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestLookupTableIsolationQueue; // @synthesize requestLookupTableIsolationQueue=_requestLookupTableIsolationQueue;
- (void).cxx_destruct;
- (void)_cancelAsynchronousRequestWithID:(int)arg1;
- (void)_processImageRequest:(id)arg1 sync:(BOOL)arg2;
- (void)_asyncGenerateLiveRenderedImageWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 desiredImagePixelSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)_asyncFetchCloudSharedAnySizeImageAsNon5551BytesIfNecessaryWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 optimalSourcePixelSize:(struct CGSize)arg5 sync:(BOOL)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_fetchAdjustmentDataThruAssetsdAndCPLHandlerWithRequest:(id)arg1 networkAccessAllowed:(BOOL)arg2 trackCPLDownload:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchPreheatableAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 preheatItem:(id)arg5 optimalSourcePixelSize:(struct CGSize)arg6 sync:(BOOL)arg7 fireAndForgetCPLDownload:(BOOL)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)_fetchAnySizeImageAsNon5551BytesWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 bestFormat:(int)arg4 optimalSourcePixelSize:(struct CGSize)arg5 sync:(BOOL)arg6 fireAndForgetCPLDownload:(BOOL)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_fetchAnySizeImageAs5551BytesWithRequest:(id)arg1 format:(int)arg2 bestFormat:(int)arg3 sync:(BOOL)arg4 fireAndForgetCPLDownload:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_fireAndForgetCPLDownloadWithRequest:(id)arg1 format:(int)arg2;
- (void)_fetchAnySizeImageAsNon5551BytesPossiblyThruAssetsdAndCPLWithRequest:(id)arg1 library:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize)arg4 wantsProperties:(BOOL)arg5 networkAccessAllowed:(BOOL)arg6 networkAccessForced:(BOOL)arg7 trackCPLDownload:(BOOL)arg8 sync:(BOOL)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)_resizeUIImage:(id)arg1 withRequest:(id)arg2;
- (void)_unregisterRequest:(id)arg1;
- (void)_registerRequest:(id)arg1;
- (void)_updateCPLDownloadStatesUponNotification;
- (id)_fastFetchAdjustmentDataWithRequest:(id)arg1;
- (void)_cancelAndFlushPreheatItemsForAssets:(id)arg1 domain:(id)arg2 operation:(int)arg3 passingTestHandler:(CDUnknownBlockType)arg4;
- (void)_cancelAndFlushPreheatWithAsset:(id)arg1 format:(int)arg2 domain:(id)arg3;
- (BOOL)_cancelAndFlushPreheatWithAsset:(id)arg1 preheatItem:(id)arg2 domain:(id)arg3;
- (id)_originalPreheatlItemCreateTransientWithAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3 domain:(id)arg4;
- (id)_preheatItemCreateIfNeededWithAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 options:(unsigned int)arg4 outDidExist:(char *)arg5 domain:(id)arg6;
- (id)_preheatItemWithAsset:(id)arg1 format:(int)arg2 domain:(id)arg3;
- (id)_queue_preheatItemMapTableWithFormat:(int)arg1 domain:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)_preheatItemSourceWithFormat:(int)arg1;
- (id)_highPriorityRequestWaitGroupWithDomain:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

