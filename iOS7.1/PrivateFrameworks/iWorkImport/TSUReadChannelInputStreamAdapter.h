//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFUInputStream.h"

@class NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream>
{
    id <TSUReadChannel> _readChannel;
    id <TSUStreamReadChannel> _streamReadChannel;
    NSObject<OS_dispatch_data> *_leftoverData;
    NSObject<OS_dispatch_queue> *_readQueue;
    long long _offset;
}

- (void).cxx_destruct;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (void)close;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (long long)offset;
- (void)dealloc;
- (id)_initWithReadChannel:(id)arg1 streamReadChannel:(id)arg2;
- (id)initWithStreamReadChannel:(id)arg1;
- (id)initWithReadChannel:(id)arg1;

@end
