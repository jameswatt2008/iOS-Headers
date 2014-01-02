/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface TKCapabilitiesManager : NSObject
{
    _Bool _isRingtoneStoreAvailable;
    _Bool _isToneStoreAvailable;
}

+ (id)sharedCapabilitiesManager;
@property(nonatomic) _Bool isToneStoreAvailable; // @synthesize isToneStoreAvailable=_isToneStoreAvailable;
@property(nonatomic) _Bool isRingtoneStoreAvailable; // @synthesize isRingtoneStoreAvailable=_isRingtoneStoreAvailable;
- (void)_checkRingtoneStoreAvailability;
- (_Bool)hasUserGeneratedVibrationsCapability;
- (_Bool)hasVibratorCapability;
- (_Bool)hasTelephonyCapability;
- (void)dealloc;
- (id)init;

@end
