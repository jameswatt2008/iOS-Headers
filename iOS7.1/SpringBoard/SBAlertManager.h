//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAlertDelegate.h"
#import "SBWindowContextHostManagerDelegate.h"
#import "SBWindowContextManagerDelegate.h"

@class NSMapTable, NSMutableArray, NSMutableSet, SBAlertWindow, SBWindowContextHostManager, SBWindowContextManager, UIScreen;

@interface SBAlertManager : NSObject <SBAlertDelegate, SBWindowContextManagerDelegate, SBWindowContextHostManagerDelegate>
{
    UIScreen *_screen;
    SBAlertWindow *_alertWindow;
    SBAlertWindow *_deferredAlertWindow;
    SBAlertWindow *_lockAlertWindow;
    NSMutableArray *_alerts;
    NSMapTable *_observers;
    NSMutableSet *_removalPendingAlerts;
    _Bool _deactivatingAllAlerts;
    id <SBAlertManagerDelegate> _delegate;
    SBWindowContextManager *_contextManager;
    SBWindowContextHostManager *_contextHostManager;
    struct {
        unsigned int deactivateDismissed:1;
        unsigned int newWindow:1;
    } _delegateFlags;
}

- (void)windowContextManager:(id)arg1 didStopTrackingContextsForScreen:(id)arg2;
- (void)windowContextManager:(id)arg1 willStartTrackingContextsForScreen:(id)arg2;
- (_Bool)windowContextManager:(id)arg1 shouldAddContext:(id)arg2;
- (void)alertIsReadyToBeRemovedFromView:(id)arg1;
- (void)alertIsReadyToBeDeactivated:(id)arg1;
- (void)alert:(id)arg1 requestsBackgroundStyleChangeWithAnimationFactory:(id)arg2;
- (void)_makeAlertWindowOpaque:(_Bool)arg1;
- (void)_resetAlertWindowOpacity;
- (void)_removeFromView:(id)arg1;
- (void)_deactivate:(id)arg1;
- (void)_activate:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)debugDescription;
- (id)description;
- (void)applicationFinishedAnimatingBeneathAlert;
- (void)applicationWillAnimateActivation;
- (void)deactivateAlertsAfterLaunch;
- (void)setAlertsShouldDeactivateAfterLaunch;
- (void)deactivateAll;
- (void)deactivate:(id)arg1;
- (void)activate:(id)arg1;
- (id)allAlerts;
- (_Bool)containsAlert:(id)arg1;
- (id)stackedAlertsIncludingActiveAlert:(_Bool)arg1;
- (_Bool)hasStackedAlerts;
- (id)activeAlert;
- (id)windows;
- (id)contextHostManager;
- (id)windowForAlert:(id)arg1;
- (id)activeAlertWindow;
- (id)topMostWindow;
- (id)screen;
@property(nonatomic) id <SBAlertManagerDelegate> delegate;
- (void)dealloc;
- (id)init;
- (id)initWithScreen:(id)arg1;

@end
