/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface NSKeyValueContainerClass : NSObject
{
    Class _originalClass;
    void *_cachedObservationInfoImplementation;
    void *_cachedSetObservationInfoImplementation;
    _Bool _cachedSetObservationInfoTakesAnObject;
    struct {
        Class _field1;
        Class _field2;
        struct __CFSet *_field3;
        struct __CFDictionary *_field4;
    } *_notifyingInfo;
}

- (id)description;
- (id)initWithOriginalClass:(Class)arg1;

@end

