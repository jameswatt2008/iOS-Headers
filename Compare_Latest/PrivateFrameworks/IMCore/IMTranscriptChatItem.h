//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMChatItem.h>

@class NSString;

@interface IMTranscriptChatItem : IMChatItem
{
    NSString *_guid;
    unsigned char _contiguousType;
    unsigned char _attachmentContiguousType;
    unsigned int _contiguousLoaded:1;
}

@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)_setGUID:(id)arg1;
- (void)_setAttachmentContiguousType:(unsigned char)arg1;
- (void)_setContiguousType:(unsigned char)arg1;
- (void)_setContiguousLoaded:(BOOL)arg1;
- (BOOL)_isContiguousLoaded;
@property(readonly, nonatomic, getter=isContiguous) BOOL contiguous;
@property(readonly, nonatomic) unsigned char attachmentContiguousType;
@property(readonly, nonatomic) unsigned char contiguousType;
- (BOOL)isAttachmentContiguousWithChatItem:(id)arg1;
- (BOOL)isContiguousWithChatItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;

@end

