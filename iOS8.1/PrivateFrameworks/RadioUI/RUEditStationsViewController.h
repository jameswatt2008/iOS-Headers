//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPUBorderDrawingCache, NSArray, NSIndexPath, NSString, RUCreateStationViewController, RUParallelScrollView, RUProxyTableView, UIAlertView, _UIBackdropView;

@interface RUEditStationsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    _UIBackdropView *_backdropView;
    RUParallelScrollView *_containerScrollView;
    struct UIEdgeInsets _containerScrollViewContentInsetAdditions;
    RUCreateStationViewController *_createStationViewController;
    UIAlertView *_deletionAlertView;
    unsigned int _ignoreReloadDataCount;
    NSIndexPath *_indexPathToDelete;
    BOOL _isEditing;
    BOOL _needsReloadAfterEndIgnoring;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    NSArray *_stations;
    RUProxyTableView *_tableView;
    id <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> _delegate;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) __weak id <RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateViewForTraitCollectionChange;
- (void)_updateViewForHorizontalSizeClassChange;
- (void)_updateTableViewRowHeight;
- (void)_updateBarButtonItemsAnimated:(BOOL)arg1;
- (void)_endIgnoringReloadData;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)_commitDeletingStationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_beginIgnoringReloadData;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)reloadData;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)contentScrollView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
