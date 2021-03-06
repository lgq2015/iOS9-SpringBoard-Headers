/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;
@class NSObject, BSTimer, NSDate;

@interface BSWatchdog : NSObject {

	id<BSWatchdogDelegate> _delegate;
	id<BSWatchdogProviding> _provider;
	NSObject*<OS_dispatch_queue> _queue;
	double _timeout;
	BSTimer* _timer;
	/*^block*/id _completion;
	NSDate* _startDate;
	BOOL _invalidated;
	BOOL _completed;
	BOOL _hasFired;

}

@property (nonatomic,retain) id<BSWatchdogDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) id<BSWatchdogProviding> provider;                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) double timeout;                                         //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain,readonly) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (getter=hasFired,nonatomic,readonly) BOOL fired;                             //@synthesize hasFired=_hasFired - In the implementation block
-(void)_invalidateTimer;
-(NSDate *)startDate;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)timeout;
-(void)setDelegate:(id<BSWatchdogDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<BSWatchdogDelegate>)delegate;
-(void)invalidate;
-(void)start;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startWatchdogTimer;
-(void)_completeWatchdogAfterFiring:(BOOL)arg1 ;
-(void)_watchdogInvalidated;
-(void)_stageOneTimerFired;
-(void)_setupTimerWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stageTwoTimerFired;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 ;
-(BOOL)hasFired;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_watchdogTimerFired;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 ;
-(id<BSWatchdogProviding>)provider;
@end

