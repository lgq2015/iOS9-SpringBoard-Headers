/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLAgent.h>

@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent {

	PLXPCListenerOperatorComposition* _notification;

}

@property (retain) PLXPCListenerOperatorComposition * notification;              //@synthesize notification=_notification - In the implementation block
+(id)defaults;
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)stateEnumForStateString:(id)arg1 ;
-(id)init;
-(PLXPCListenerOperatorComposition *)notification;
-(void)log;
-(void)setNotification:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)initOperatorDependancies;
-(void)logEventForwardVideoWithEntry:(id)arg1 ;
@end
