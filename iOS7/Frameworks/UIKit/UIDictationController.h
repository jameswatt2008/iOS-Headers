/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AFDictationConnection, AFDictationOptions, AFPreferences, NSArray, NSString, NSTimer, UIAlertView, UIDictationTestOps;

// Not exported
@interface UIDictationController : NSObject
{
    AFDictationConnection *_connection;
    AFDictationOptions *_options;
    AFPreferences *_preferences;
    NSArray *_availableLanguages;
    NSTimer *_recordingLimitTimer;
    void *_callCenterFrameworkFileHandle;
    id _callCenter;
    void *_facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    _Bool _wasDisabledDueToTelephonyActivity;
    UIAlertView *_dictationAvailableSoonAlert;
    _Bool _connectionWasAlreadyAliveForStatisticsLogging;
    UIDictationTestOps *_dictationDebuggingOperations;
    NSString *_language;
    _Bool cancelledByWaitingForLocalResults;
    _Bool dictationStartedFromGesture;
    _Bool _performTestOperationForEditing;
    _Bool _discardNextHypothesis;
    _Bool _hasPreheated;
    NSString *_previousHypothesis;
    NSString *_inputModeThatInvokedDictation;
    struct _NSRange _insertionRange;
}

+ (void)poppedLastDebuggingOp;
+ (_Bool)usingTypeAndTalk;
+ (id)stringForViewMode:(int)arg1;
+ (id)stringForState:(int)arg1;
+ (void)logDictationString:(id)arg1;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (int)viewMode;
+ (_Bool)starkScreenExists;
+ (void)updateLandingView;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (id)singleLineResultForResult:(id)arg1;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(_Bool)arg2 transform:(struct __CFString *)arg3;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(_Bool)arg3 autocapitalizationType:(long long)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString *)arg2;
+ (void)applicationDidChangeStatusBarFrame;
+ (void)siriPreferencesChanged;
+ (void)applicationWillResignActive;
+ (void)applicationDidBecomeActive;
+ (_Bool)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (_Bool)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (_Bool)takesPhysicalButtonsEnded:(id)arg1 forTextView:(id)arg2;
+ (_Bool)takesPhysicalButtonsBegan:(id)arg1 forTextView:(id)arg2;
+ (_Bool)shouldHideCursorForTextView:(id)arg1;
+ (_Bool)shouldHideSelectionUIForTextView:(id)arg1;
+ (_Bool)isTextViewOnStarkScreen:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardDidSetInputMode;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
+ (_Bool)shouldEnableGestureHandler;
+ (void)enableGestureHandlerIfNecessary;
+ (void)disableGestureHandler;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1;
+ (_Bool)dictationIsFunctional;
+ (_Bool)fetchCurrentInputModeSupportsDictation;
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(_Bool)arg2 transform:(struct __CFString *)arg3;
+ (id)inputModeNameForDictation;
+ (_Bool)isRunning;
+ (id)sharedInstance;
+ (id)activeInstance;
+ (_Bool)setupForOpeningConnections;
+ (_Bool)setupForPhraseSerialization;
+ (_Bool)openAssistantFrameworkIfNecessary;
@property(retain, nonatomic) NSString *inputModeThatInvokedDictation; // @synthesize inputModeThatInvokedDictation=_inputModeThatInvokedDictation;
@property(nonatomic) _Bool hasPreheated; // @synthesize hasPreheated=_hasPreheated;
@property(nonatomic) struct _NSRange insertionRange; // @synthesize insertionRange=_insertionRange;
@property(nonatomic) _Bool discardNextHypothesis; // @synthesize discardNextHypothesis=_discardNextHypothesis;
@property(copy, nonatomic) NSString *previousHypothesis; // @synthesize previousHypothesis=_previousHypothesis;
@property(nonatomic) _Bool performTestOperationForEditing; // @synthesize performTestOperationForEditing=_performTestOperationForEditing;
@property(nonatomic) _Bool dictationStartedFromGesture; // @synthesize dictationStartedFromGesture;
- (void)setLanguage:(id)arg1;
- (id)language;
- (void)preheatIfNecessary;
- (_Bool)isInDebuggingMode;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)finishDictationRecognition:(id)arg1;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)resultWithTrailingSpace:(id)arg1;
- (struct __CFString *)resultTransformForLanguageModel:(id)arg1;
- (_Bool)needsLeadingSpaceForPhrases:(id)arg1;
- (_Bool)needsTrailingSpaceForPhrases:(id)arg1;
- (id)dictationPhraseArrayFromDictationResult:(id)arg1;
- (void)restartDictationForTypeAndTalk;
- (void)stopDictation;
- (void)cancelDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationForStark;
- (void)switchToDictationInputMode;
- (void)startDictation;
- (void)startDictationForReason:(long long)arg1;
- (void)setupForDictationStartForReason:(long long)arg1;
- (void)setupForStreamingDictationStart;
- (void)dismissDictationView:(id)arg1;
- (_Bool)wasDisabledDueToTelephonyActivity;
- (_Bool)dictationEnabled;
- (id)connectionForStatisticsLogging;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnection;
- (id)connection;
- (void)startRecordingLimitTimer;
- (void)cancelRecordingLimitTimer;
- (void)dealloc;
- (int)state;
- (void)errorAnimationDidFinish;
- (void)setState:(int)arg1;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startConnectionForReason:(long long)arg1;
- (void)setupConnectionOptions;
- (id)selectedTextForInputDelegate:(id)arg1;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (float)audioLevel;
- (_Bool)supportsInputMode:(id)arg1 error:(id *)arg2;
- (id)supportedDictationLanguages:(id)arg1;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (id)assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (_Bool)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (_Bool)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (void)_restartDictation;
- (void)enableProximity;
- (void)proximityStateChanged:(id)arg1;
- (void)disableAutorotation;
- (void)setDictationInputmode;
- (void)reenableAutorotation;
- (void)delayedTelephonyCheckingSetup;
- (_Bool)disabledDueToTelephonyActivity;
- (id)debuggingDictationOperations;
- (id)init;

@end

