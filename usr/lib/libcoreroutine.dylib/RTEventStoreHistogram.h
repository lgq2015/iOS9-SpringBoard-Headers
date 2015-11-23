/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEventStore.h>
#import <libobjc.A.dylib/RTEventStore.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, RTEventDateBasedDecayHistogram, RTEntropyFilter, RTPrimingFilter, NSString;

@interface RTEventStoreHistogram : RTEventStore <RTEventStore, NSSecureCoding> {

	double _confidence;
	NSMutableArray* _events;
	RTEventDateBasedDecayHistogram* _processedEventModel;
	RTEntropyFilter* _entropyFilter;
	RTPrimingFilter* _primingFilter;
	double _globalLaunchThreshold;

}

@property (assign,nonatomic) double confidence;                                                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                                           //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) RTEventDateBasedDecayHistogram * processedEventModel;              //@synthesize processedEventModel=_processedEventModel - In the implementation block
@property (nonatomic,retain) RTEntropyFilter * entropyFilter;                                   //@synthesize entropyFilter=_entropyFilter - In the implementation block
@property (nonatomic,retain) RTPrimingFilter * primingFilter;                                   //@synthesize primingFilter=_primingFilter - In the implementation block
@property (assign,nonatomic) double globalLaunchThreshold;                                      //@synthesize globalLaunchThreshold=_globalLaunchThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(double)calculateModelConfidenceWithCorrectPredictions:(double)arg1 incorrectPredictions:(double)arg2 iterations:(unsigned long long)arg3 minimumConfidence:(double)arg4 ;
-(void)fetchRecommendedAppsHistogramMetric:(/*^block*/id)arg1 ;
-(void)logRecommendedAppsHistogramMetric:(/*^block*/id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvents:(id)arg1 ;
-(NSMutableArray *)events;
-(id)initWithApplicableEventClasses:(id)arg1 ;
-(void)clearAllEvents;
-(unsigned long long)countOfEvents;
-(void)removeEvent:(id)arg1 ;
-(void)addAppLaunchEvent:(id)arg1 ;
-(void)processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(/*^block*/id)arg2 ;
-(double)getConfidence;
-(void)fetchPredictionForEvent:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeEvents:(id)arg1 ;
-(id)initWithApplicableEventClasses:(id)arg1 withDecayRate:(double)arg2 withDate:(id)arg3 ;
-(void)setupThreshold;
-(RTEntropyFilter *)entropyFilter;
-(void)_processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTPrimingFilter *)primingFilter;
-(RTEventDateBasedDecayHistogram *)processedEventModel;
-(double)calculateModelConfidenceWithBundleId:(id)arg1 ;
-(double)globalLaunchThreshold;
-(void)setProcessedEventModel:(RTEventDateBasedDecayHistogram *)arg1 ;
-(void)setEntropyFilter:(RTEntropyFilter *)arg1 ;
-(void)setPrimingFilter:(RTPrimingFilter *)arg1 ;
-(void)setGlobalLaunchThreshold:(double)arg1 ;
@end
