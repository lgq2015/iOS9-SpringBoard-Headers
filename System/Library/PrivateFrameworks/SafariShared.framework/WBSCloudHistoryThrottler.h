/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSCloudHistoryThrottlerDataStore;
@class NSMutableArray, NSArray;

@interface WBSCloudHistoryThrottler : NSObject {

	NSMutableArray* _pastOperationsWithinMonitoredPeriod;
	NSArray* _throttlingDistribution;
	double _numberOfSecondsToMonitor;
	unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
	id<WBSCloudHistoryThrottlerDataStore> _dataStore;

}

@property (nonatomic,retain) id<WBSCloudHistoryThrottlerDataStore> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
+(BOOL)policyStringRepresentsValidPolicy:(id)arg1 ;
+(id)_distributionBucketsFromConfiguration:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setDataStore:(id<WBSCloudHistoryThrottlerDataStore>)arg1 ;
-(id<WBSCloudHistoryThrottlerDataStore>)dataStore;
-(id)initWithPolicyString:(id)arg1 ;
-(id)dateOfNextPermittedOperationWithPriority:(long long)arg1 ;
-(void)operationWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2 ;
-(BOOL)permitsOperationWithPriority:(long long)arg1 ;
-(void)setPolicyString:(id)arg1 ;
-(void)reloadRecordOfPastOperations;
-(void)_loadRecordOfPastOperations;
-(void)_pruneExpiredOrInvalidOperations;
-(id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
-(void)_addOperationAtDate:(id)arg1 ;
-(void)_saveRecordOfPastOperations;
-(double)_currentMinimumTimeIntervalBetweenOperations;
-(BOOL)_loadDistributionConfiguration:(id)arg1 ;
-(double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
-(double)_minimumTimeBetweenOperationsForOperations:(id)arg1 ;
-(double)_timeIntervalUntilOperationShouldBePruned:(id)arg1 ;
-(BOOL)_throttlerIsActive;
-(double)_test_numberOfSecondsToMonitor;
-(unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
@end
