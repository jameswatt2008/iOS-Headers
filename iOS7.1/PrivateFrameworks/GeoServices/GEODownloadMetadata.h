//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEODownloadMetadata : PBCodable <NSCopying>
{
    double _timestamp;
    NSString *_etag;
}

@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasEtag;
- (void)dealloc;

@end

