/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RadioUI/_RUGenreListTableViewCell.h>

@class NSString, RUAudioPreviewView, SKUICircleProgressIndicator, UIButton, UILabel, _RUAddGenreButton;

@interface _RUGenreChildListTableViewCell : _RUGenreListTableViewCell
{
    SKUICircleProgressIndicator *_activityIndicator;
    _RUAddGenreButton *_addGenreButton;
    UILabel *_nowPlayingDescriptionLabel;
    _Bool _showActivityIndicator;
    _Bool _showGenreButton;
    RUAudioPreviewView *_audioPreviewView;
}

@property(retain, nonatomic) RUAudioPreviewView *audioPreviewView; // @synthesize audioPreviewView=_audioPreviewView;
@property(nonatomic) _Bool showGenreButton; // @synthesize showGenreButton=_showGenreButton;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
- (void).cxx_destruct;
- (struct CGRect)_audioPreviewViewFrame;
- (id)_audioPreviewAnimationForShowing:(_Bool)arg1;
@property(copy, nonatomic) NSString *nowPlayingDescription;
- (void)setShowGenreButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAudioPreviewView:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIButton *addGenreButton;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
