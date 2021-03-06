/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EKCalendar, EKGroupInfo, NSString, UIColor;

@interface EKCalendarInfo : NSObject
{
    EKCalendar *_calendar;
    UIColor *_color;
    BOOL _selected;
    int _customGroupType;
    EKGroupInfo *_group;
}

@property(nonatomic) int customGroupType; // @synthesize customGroupType=_customGroupType;
@property(nonatomic) EKGroupInfo *group; // @synthesize group=_group;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)description;
@property(readonly, nonatomic) BOOL isEditable;
@property(readonly, nonatomic) BOOL isPublished;
@property(readonly, nonatomic) BOOL isShared;
@property(readonly, nonatomic) BOOL isSubscribed;
@property(readonly, nonatomic) int displayOrder;
@property(readonly, nonatomic) NSString *title;
@property(retain, nonatomic) EKCalendar *calendar;
- (void)dealloc;
- (id)initWithCalendar:(id)arg1;
- (void)_updateCustomGroupType;

@end

