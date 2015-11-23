/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXAccessQueueTimer.h>

@class NSThread, AXThreadTimerTask, NSString;

@interface AXThreadTimer : NSObject <AXAccessQueueTimer> {

	NSThread* _thread;
	/*^block*/id _cancelBlock;
	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	AXThreadTimerTask* _task;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (nonatomic,retain) AXThreadTimerTask * task;                                                //@synthesize task=_task - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
-(void)cancel;
-(void)dealloc;
-(BOOL)isActive;
-(BOOL)isCancelled;
-(AXThreadTimerTask *)task;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)setTask:(AXThreadTimerTask *)arg1 ;
-(void)_runAfterDelay:(id)arg1 ;
-(id)initWithThread:(id)arg1 ;
-(BOOL)isPending;
@end
