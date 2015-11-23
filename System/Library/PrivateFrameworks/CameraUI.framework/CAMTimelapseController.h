/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CAMNebulaDaemonTimelapseClientProtocol.h>

@protocol CAMTimelapseControllerDelegate, OS_dispatch_source;
@class CAMFocusResult, CAMTimelapseState, NSObject, NSCountedSet, NSMutableSet, CAMLowDiskSpaceAlertView, CUCaptureController, CAMLocationController, CAMMotionController, CAMPersistenceController, CAMNebulaDaemonProxyManager, NSDate, NSString;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate, CAMNebulaDaemonTimelapseClientProtocol> {

	BOOL __ignoringTimerCallbacksForTearDown;
	BOOL __ignoringTimerCallbacksWaitingForCaptureResponse;
	BOOL __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
	BOOL __backendRecoveryNeeded;
	BOOL __previewStarted;
	BOOL __focusAndExposureAdjusted;
	id<CAMTimelapseControllerDelegate> _delegate;
	CAMFocusResult* _lastFocusResult;
	CAMTimelapseState* __state;
	NSObject*<OS_dispatch_source> __captureTimer;
	NSCountedSet* __inFlightTimelapseUUIDs;
	NSMutableSet* __pendingCompletedStates;
	CAMLowDiskSpaceAlertView* __diskSpaceAlert;
	CUCaptureController* __captureController;
	CAMLocationController* __locationController;
	CAMMotionController* __motionController;
	CAMPersistenceController* __persistenceController;
	CAMNebulaDaemonProxyManager* __nebulaDaemonProxyManager;

}

@property (assign,nonatomic,__weak) id<CAMTimelapseControllerDelegate> delegate;                                                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCapturing,nonatomic,readonly) BOOL capturing; 
@property (nonatomic,readonly) NSDate * captureStartTime; 
@property (assign,nonatomic) CAMFocusResult * lastFocusResult;                                                                                                                     //@synthesize lastFocusResult=_lastFocusResult - In the implementation block
@property (nonatomic,readonly) CAMTimelapseState * _state;                                                                                                                         //@synthesize _state=__state - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _captureTimer;                                                                                                        //@synthesize _captureTimer=__captureTimer - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksForTearDown;                                                                                                            //@synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse;                                                                                              //@synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inFlightTimelapseUUIDs;                                                                                                             //@synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _pendingCompletedStates;                                                                                                             //@synthesize _pendingCompletedStates=__pendingCompletedStates - In the implementation block
@property (nonatomic,readonly) CAMLowDiskSpaceAlertView * _diskSpaceAlert;                                                                                                         //@synthesize _diskSpaceAlert=__diskSpaceAlert - In the implementation block
@property (assign,setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:,nonatomic) BOOL _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;              //@synthesize _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes=__shouldUpdateFocusAndExposureWhenContrastDetectionCompletes - In the implementation block
@property (assign,setter=_setBackendRecoveryNeeded:,nonatomic) BOOL _backendRecoveryNeeded;                                                                                        //@synthesize _backendRecoveryNeeded=__backendRecoveryNeeded - In the implementation block
@property (assign,setter=_setPreviewStarted:,nonatomic) BOOL _previewStarted;                                                                                                      //@synthesize _previewStarted=__previewStarted - In the implementation block
@property (assign,setter=_setFocusAndExposureAdjusted:,getter=_isFocusAndExposureAdjusted,nonatomic) BOOL _focusAndExposureAdjusted;                                               //@synthesize _focusAndExposureAdjusted=__focusAndExposureAdjusted - In the implementation block
@property (nonatomic,readonly) CUCaptureController * _captureController;                                                                                                           //@synthesize _captureController=__captureController - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                                                                                        //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                                                                                                            //@synthesize _motionController=__motionController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * _persistenceController;                                                                                                  //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * _nebulaDaemonProxyManager;                                                                                            //@synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createPlaceholderResultForTimelapseState:(id)arg1 ;
+(IOSurfaceRef)_newVideoPreviewSurfaceForTimelapseState:(id)arg1 ;
-(void)setDelegate:(id<CAMTimelapseControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CAMTimelapseControllerDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(CAMTimelapseState *)_state;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(CUCaptureController *)_captureController;
-(CAMMotionController *)_motionController;
-(CAMLocationController *)_locationController;
-(id)_stillImageCaptureRequestWithCurrentSettings;
-(BOOL)isCapturing;
-(void)startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(void)stopCapturingWithReasons:(long long)arg1 ;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)forceStopTimelapseCaptureWithReasons:(long long)arg1 ;
-(void)_deviceStarted:(id)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(CAMNebulaDaemonProxyManager *)_nebulaDaemonProxyManager;
-(CAMPersistenceController *)_persistenceController;
-(void)_sessionStarted:(id)arg1 ;
-(void)_sessionRuntimeErrored:(id)arg1 ;
-(id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 nebulaDaemonProxyManager:(id)arg5 ;
-(void)_dismissDiskSpaceAlert;
-(void)_teardownCaptureTimer;
-(void)_restoreCaptureStateFromDisk;
-(void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)arg1 ;
-(void)_setBackendRecoveryNeeded:(BOOL)arg1 ;
-(void)_triggerBackendCrashRecoveryIfNeeded;
-(void)_setFocusAndExposureAdjusted:(BOOL)arg1 ;
-(BOOL)_backendRecoveryNeeded;
-(BOOL)_previewStarted;
-(void)_updateFocusAndExposureForStartCapturing;
-(void)_startCaptureTimer;
-(void)_startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(void)_stopCapturingWithReasons:(long long)arg1 ;
-(void)_setNewCaptureStateForCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(void)_notifyAGGDForDidStartCapturingWithState:(id)arg1 ;
-(void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_saveStateToDisk:(id)arg1 ;
-(void)_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:(BOOL)arg1 ;
-(id)_createPlaceholderAssetForTimelapseState:(id)arg1 ;
-(void)_notifyAGGDForDidStopCapturingWithState:(id)arg1 ;
-(void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2 ;
-(void)_captureTimerFired;
-(void)_updateLocationIfNecessary;
-(BOOL)_canCapturePhoto;
-(BOOL)_enqueueCaptureRequest;
-(void)_notifyInsufficientDiskSpaceForContinuingCapture;
-(BOOL)_isFocusAndExposureAdjusted;
-(BOOL)_shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
-(CAMFocusResult *)lastFocusResult;
-(void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(BOOL)arg3 ;
-(void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
-(void)_setPreviewStarted:(BOOL)arg1 ;
-(void)restoreConfiguration;
-(NSDate *)captureStartTime;
-(void)setLastFocusResult:(CAMFocusResult *)arg1 ;
-(NSObject*<OS_dispatch_source>)_captureTimer;
-(BOOL)_ignoringTimerCallbacksForTearDown;
-(BOOL)_ignoringTimerCallbacksWaitingForCaptureResponse;
-(NSCountedSet *)_inFlightTimelapseUUIDs;
-(NSMutableSet *)_pendingCompletedStates;
-(CAMLowDiskSpaceAlertView *)_diskSpaceAlert;
@end
