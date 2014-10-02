//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/PLCameraViewController.h>

#import "PLAssetContainerListChangeObserver.h"
#import "PLAssetContainerObserver.h"
#import "PLCameraPreviewWellImageChangeObserver.h"
#import "PLPhotoBrowserControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<PLAlbumProtocol>, PLKeepDaemonAliveAssertion, UIToolbar, UIViewController;

@interface PLApplicationCameraViewController : PLCameraViewController <PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLCameraPreviewWellImageChangeObserver, UINavigationControllerDelegate, PLPhotoBrowserControllerDelegate>
{
    CDUnknownBlockType _previewButtonAction;
    CDUnknownBlockType _doneButtonAction;
    NSDictionary *_configuration;
    id <PLApplicationCameraViewControllerDelegate> _delegate;
    BOOL _usesSessionAlbum;
    double _sessionStartTime;
    NSObject<OS_dispatch_queue> *_photoStreamDispatchQueue;
    PLKeepDaemonAliveAssertion *_keepDaemonAliveAssertion;
    BOOL _isReadyToTest;
    int _testPictureCounter;
    int _testPicturesReceivedCounter;
    double _testPictureRepeatDelay;
    BOOL __shouldShowCameraRoll;
    BOOL __dismissingCameraRoll;
    BOOL __dismissingCameraRollForSuspension;
    BOOL __shouldRetryDismissal;
    BOOL __handlesVolumeButtons;
    BOOL __ignoringVolumeButtons;
    struct NSObject *_cameraAlbum;
    UIToolbar *_bottomButtonBar;
    UIViewController *__cameraRollViewController;
}

@property(nonatomic, setter=_setIgnoringVolumeButtons:) BOOL _ignoringVolumeButtons; // @synthesize _ignoringVolumeButtons=__ignoringVolumeButtons;
@property(nonatomic, setter=_setHandlesVolumeButtons:) BOOL _handlesVolumeButtons; // @synthesize _handlesVolumeButtons=__handlesVolumeButtons;
@property(readonly, nonatomic) UIViewController *_cameraRollViewController; // @synthesize _cameraRollViewController=__cameraRollViewController;
@property(readonly, nonatomic) BOOL _shouldRetryDismissal; // @synthesize _shouldRetryDismissal=__shouldRetryDismissal;
@property(nonatomic, getter=_isDismissingCameraRollForSuspension, setter=_setDismissingCameraRollForSuspension:) BOOL _dismissingCameraRollForSuspension; // @synthesize _dismissingCameraRollForSuspension=__dismissingCameraRollForSuspension;
@property(nonatomic, getter=_isDismissingCameraRoll, setter=_setDismissingCameraRoll:) BOOL _dismissingCameraRoll; // @synthesize _dismissingCameraRoll=__dismissingCameraRoll;
@property(nonatomic, setter=_setShouldShowCameraRoll:) BOOL _shouldShowCameraRoll; // @synthesize _shouldShowCameraRoll=__shouldShowCameraRoll;
@property(readonly, nonatomic) UIToolbar *bottomButtonBar; // @synthesize bottomButtonBar=_bottomButtonBar;
@property(nonatomic) id <PLApplicationCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType previewButtonAction; // @synthesize previewButtonAction=_previewButtonAction;
- (void)_setCameraAlbum:(struct NSObject *)arg1;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *cameraAlbum; // @synthesize cameraAlbum=_cameraAlbum;
@property(nonatomic) double testPictureRepeatDelay; // @synthesize testPictureRepeatDelay=_testPictureRepeatDelay;
@property(nonatomic) int testPictureCounter; // @synthesize testPictureCounter=_testPictureCounter;
- (void)setUsesSessionAlbum:(BOOL)arg1;
- (void)preferencesDidChange;
- (void)resumePhotoStreams;
- (void)pausePhotoStreams;
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_setWantsVolumeButtonEvents:(BOOL)arg1;
- (void)_updateVolumeButtonEventsAbility;
- (void)dismissCameraRollAnimated:(BOOL)arg1 forSuspension:(BOOL)arg2;
- (void)dismissCameraRoll:(id)arg1;
- (id)_currentPhotoBrowser;
- (struct NSObject *)_cameraAlbum;
- (void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2;
- (void)_refreshCameraUIForAlbumChange;
- (void)assetContainerDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_libraryDidChange:(id)arg1;
- (void)_handleVolumeButtonUp;
- (void)_handleVolumeButtonDown;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (BOOL)_shouldResumeTorch;
- (id)_dictionaryFromPackedArray:(id)arg1;
- (id)_packedArrayFromDictionary:(id)arg1;
- (void)_saveConfiguration;
- (id)_stringForHDRMode:(int)arg1;
- (void)_applyConfiguration;
- (void)_defaultCameraDevice:(id *)arg1 cameraMode:(id *)arg2;
- (BOOL)_shouldResetMode:(id)arg1;
- (void)prepareForDefaultImageSnapshot;
- (void)animateBlurForSuspension;
- (BOOL)shouldAnimateBlurForSuspension;
- (void)stopCameraPreviewAnimated:(BOOL)arg1;
- (void)_startCameraPreviewWithPreviewStartedBlock:(CDUnknownBlockType)arg1;
- (BOOL)showingCameraPreview;
- (id)cameraButtonBar;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withAlbum:(struct NSObject *)arg2;
- (id)newAlbumNavigationControllerForAlbum:(struct NSObject *)arg1;
- (BOOL)_cameraIsRunning;
- (void)cleanupForCameraEnd;
- (void)setupForCameraStart;
- (void)_kickoffCameraControllerPreview;
- (void)cameraViewFinishedTakingPicture:(id)arg1;
- (void)takePicture;
- (void)startPictureTest;
- (void)_startPictureTestAfterSeconds:(double)arg1;
- (void)testSetAutofocusDisabled:(BOOL)arg1;
- (void)testSetHDROn:(BOOL)arg1;
- (void)cameraViewDidFinishUnblurringForPreview:(id)arg1;
- (void)cameraViewFinishedSuspensionBlur:(id)arg1;
- (BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)presentCameraRollAboveCameraView:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_applyAutorotationCorrectingTransformForOrientation:(int)arg1;
- (struct CGAffineTransform)_autorotationCorrectingTransformFromOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)prepareForSuspension;
- (void)viewWillShowForLaunch;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)initWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3;
- (id)initWithSessionID:(id)arg1 startPreviewImmediately:(BOOL)arg2;
- (void)stopCameraPreview;
- (void)setSessionID:(id)arg1;
- (void)saveCameraConfiguration;
- (void)startCameraPreviewWithSavedConfiguration;
- (void)startCameraPreview;
- (void)dismissCameraRollForSuspension;
- (void)prepareForDismissal;

@end
