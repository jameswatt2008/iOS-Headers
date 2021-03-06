//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying>
{
    CKDPIdentifier *_ownerIdentifier;
    CKDPIdentifier *_value;
}

@property(retain, nonatomic) CKDPIdentifier *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(retain, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasOwnerIdentifier;
@property(readonly, nonatomic) BOOL hasValue;

@end

