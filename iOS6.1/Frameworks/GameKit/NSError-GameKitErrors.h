/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSError.h"

@interface NSError (GameKitErrors)
+ (id)_gkUnauthenticatedError;
+ (id)serverErrorForCode:(int)arg1 withReason:(id)arg2;
+ (id)serverErrorForCode:(int)arg1 withUserInfo:(id)arg2;
+ (id)userErrorForServerCode:(int)arg1 reason:(id)arg2;
+ (id)userErrorForServerError:(id)arg1;
+ (id)userErrorForCode:(int)arg1 underlyingError:(id)arg2;
+ (id)userErrorForCode:(int)arg1 userInfo:(id)arg2;
- (BOOL)_gkIsUnauthenticatedError;
@end
