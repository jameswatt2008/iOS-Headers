//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionReplyTable : NSObject
{
    NSObject<OS_xpc_object> *_replyTable;
    struct __CFDictionary *_progressTable;
    int _replyTableLock;
    unsigned long long _sequence;
}

- (id)progressForSequence:(unsigned long long)arg1;
- (void)removeProgressSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceForProgress:(id)arg1;
- (id)copyReplyDictionaryForSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceForEvent:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

