//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer
{
    struct DataBuffer3DDimension mDimension;
    vector_a3426c4e mContainer;
}

+ (id)bufferWithCapacity3DDimension:(const struct DataBuffer3DDimension *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)fillCapacity;
- (const void *)data;
@property(readonly, nonatomic) vector_a3426c4e *container;
- (unsigned int)componentByteSize;
- (int)componentType;
- (unsigned int)components;
- (unsigned int)count;
- (tvec3_c2818ced)size;
- (id)initWithCapacity3DDimension:(const struct DataBuffer3DDimension *)arg1;

@end
