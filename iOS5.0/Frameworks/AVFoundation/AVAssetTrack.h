/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVAsynchronousKeyValueLoading-Protocol.h"
#import "NSCopying-Protocol.h"

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetTrackInternal *_track;
}

+ (id)mediaCharacteristicsForMediaTypes;
+ (id)mediaTypesForMediaCharacteristics;
+ (id)keyPathsForValuesAffectingTimeRange;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (id)init;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackIndex:(long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (id)description;
@property(readonly, nonatomic) AVAsset *asset;
- (id)_assetTrackInspector;
@property(readonly, nonatomic) int trackID;
- (int)statusOfValueForKey:(id)arg1;
- (int)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)mediaType;
- (id)formatDescriptions;
- (BOOL)isPlayable;
- (BOOL)isEnabled;
- (BOOL)isSelfContained;
- (long long)totalSampleDataLength;
- (id)_taggedCharacteristics;
- (BOOL)_isAuxiliaryContent;
- (BOOL)_isMainProgramContent;
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg1 flagsMask:(unsigned int)arg2;
- (BOOL)_containsOnlyForcedSubtitles;
- (BOOL)_containsMixedSubtitles;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)mediaCharacteristics;
- (CDStruct_e83c9415)timeRange;
- (int)naturalTimeScale;
- (float)estimatedDataRate;
- (id)languageCode;
- (id)extendedLanguageTag;
- (id)locale;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (int)layer;
- (float)preferredVolume;
- (float)nominalFrameRate;
- (id)segments;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)commonMetadata;
- (id)availableMetadataFormats;
- (id)metadataForFormat:(id)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (id)_firstReferencedTrackWithReferenceType:(id)arg1;
- (id)_allReferencedTracksWithReferenceType:(id)arg1;
- (id)_fallbackTrack;
- (id)_associatedSubtitleTrack;
- (id)_pairedForcedOnlySubtitlesTrack;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;

@end
