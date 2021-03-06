/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class NSDate, PLMonotonicTimer, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, NSMutableSet;

@interface PLProcessMonitorAgent : PLAgent {

	BOOL _firstBoot;
	NSDate* _currentCachedDate;
	NSDate* _previousCacheDate;
	double _currentCachedTotalCPUTime;
	PLMonotonicTimer* _logTimer;
	PLEntryNotificationOperatorComposition* _batteryLevelChanged;
	PLNSNotificationOperatorComposition* _asertionNotifications;
	NSMutableSet* _processes;

}

@property (retain) NSDate * currentCachedDate;                                                //@synthesize currentCachedDate=_currentCachedDate - In the implementation block
@property (retain) NSDate * previousCacheDate;                                                //@synthesize previousCacheDate=_previousCacheDate - In the implementation block
@property (assign) double currentCachedTotalCPUTime;                                          //@synthesize currentCachedTotalCPUTime=_currentCachedTotalCPUTime - In the implementation block
@property (assign) BOOL firstBoot;                                                            //@synthesize firstBoot=_firstBoot - In the implementation block
@property (retain) PLMonotonicTimer * logTimer;                                               //@synthesize logTimer=_logTimer - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;              //@synthesize batteryLevelChanged=_batteryLevelChanged - In the implementation block
@property (retain) PLNSNotificationOperatorComposition * asertionNotifications;               //@synthesize asertionNotifications=_asertionNotifications - In the implementation block
@property (retain) NSMutableSet * processes;                                                  //@synthesize processes=_processes - In the implementation block
+(id)defaults;
+(void)load;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointMemoryTracking;
+(id)entryEventForwardProcessID;
+(id)entryEventBackwardDefinitionProcessMonitor;
+(id)entryEventIntervalDefinitionProcessMonitorDiff;
+(unsigned long long)PIDToCoalitionID:(int)arg1 ;
-(id)init;
-(void)log;
-(NSMutableSet *)processes;
-(void)initOperatorDependancies;
-(void)processesOfInterest:(id)arg1 ;
-(void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)batteryLevelChanged;
-(void)setProcesses:(NSMutableSet *)arg1 ;
-(void)logEventIntervalProcessMonitorInterval;
-(void)logEventPointMemoryTracking;
-(void)setLogTimer:(PLMonotonicTimer *)arg1 ;
-(BOOL)isCachedForProcessID:(int)arg1 ;
-(id)eventForwardProcessIDForPID:(int)arg1 ;
-(void)getCpuUsageForPid:(int)arg1 withBuffer:(void*)arg2 withNewProcessArray:(id)arg3 withTotalCpu:(double*)arg4 withActiveProcesses:(id)arg5 ;
-(NSDate *)currentCachedDate;
-(void)setPreviousCacheDate:(NSDate *)arg1 ;
-(void)setCurrentCachedDate:(NSDate *)arg1 ;
-(void)setCurrentCachedTotalCPUTime:(double)arg1 ;
-(void)updateProcessMonitorCache;
-(void)logEventIntervalProcessMonitorIntervalUsingCache;
-(void)logEventBackwardProcessMonitorUsingCache;
-(id)processMonitorMultiKeyFromProcessID:(id)arg1 ;
-(NSDate *)previousCacheDate;
-(double)currentCachedTotalCPUTime;
-(BOOL)isCachedForProcessID:(int)arg1 andName:(id)arg2 ;
-(void)logEventBackwardProcessMonitor;
-(id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2 ;
-(BOOL)firstBoot;
-(void)setFirstBoot:(BOOL)arg1 ;
-(PLMonotonicTimer *)logTimer;
-(PLNSNotificationOperatorComposition *)asertionNotifications;
-(void)setAsertionNotifications:(PLNSNotificationOperatorComposition *)arg1 ;
@end

