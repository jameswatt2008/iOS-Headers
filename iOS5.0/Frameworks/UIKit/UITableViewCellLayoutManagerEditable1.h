/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewCellLayoutManager.h>

#import "UITextFieldDelegate-Protocol.h"

@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>
{
}

- (void)_textValueChanged:(id)arg1;
- (void)_textFieldEndEditingOnReturn:(id)arg1;
- (void)_textFieldEndEditing:(id)arg1;
- (void)_textFieldStartEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)editableTextFieldForCell:(id)arg1;
- (id)detailTextLabelForCell:(id)arg1;
- (id)textLabelForCell:(id)arg1;
- (void)layoutSubviewsOfCell:(id)arg1;
- (float)defaultTextFieldFontSizeForCell:(id)arg1;

@end
