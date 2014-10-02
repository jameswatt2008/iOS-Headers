//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct GSCredential {
    int pid;
    unsigned int uid;
    unsigned int gid;
};

struct GSGenerationEnumeratorOptions {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    int _field4;
    char *_field5;
    int _field6;
    char _field7;
    long long _field8;
    long long _field9;
};

struct _ftsent {
    struct _ftsent *_field1;
    struct _ftsent *_field2;
    struct _ftsent *_field3;
    long _field4;
    void *_field5;
    char *_field6;
    char *_field7;
    int _field8;
    int _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned long long _field12;
    int _field13;
    unsigned short _field14;
    short _field15;
    unsigned short _field16;
    unsigned short _field17;
    unsigned short _field18;
    struct stat *_field19;
    char _field20[1];
};

struct fsid {
    int _field1[2];
};

struct stat;

struct statfs {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct fsid _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    char _field13[16];
    char _field14[1024];
    char _field15[1024];
    unsigned int _field16[8];
};

#if 0
// Names with conflicting types:
typedef struct {
    Class _field1;
    id _field2;
    Class _field3;
    SEL _field4;
    CDUnknownBlockType _field5;
    id _field6;
    char _field7;
    char _field8;
    id _field9;
    id _field10;
    unsigned int _field11;
    unsigned int _field12;
    id _field13;
} PQLResultSet_17d4f7b9;

typedef struct {
    Class _field1;
} PQLResultSet_67aa68bb;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    int _field1;
    char _field2;
    char _field3;
    char _field4;
    unsigned char _field5[16];
} CDStruct_ddc693bd;

typedef struct {
    struct _ftsent *_field1;
    struct _ftsent *_field2;
    struct _ftsent **_field3;
    int _field4;
    char *_field5;
    int _field6;
    int _field7;
    int _field8;
    union {
        CDUnknownFunctionPointerType _field1;
        CDUnknownBlockType _field2;
    } _field9;
    int _field10;
} CDStruct_2263269c;
