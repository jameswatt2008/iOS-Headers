/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABContactAction.h>

#import "UIActionSheetDelegate-Protocol.h"

@interface ABContactToggleBlockCallerAction : ABContactAction <UIActionSheetDelegate>
{
}

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)unblock;
- (void)block;
- (id)allNumbersAndEmails;
- (void)performActionWithSender:(id)arg1;
@property(readonly, nonatomic) BOOL isBlocked;

@end
