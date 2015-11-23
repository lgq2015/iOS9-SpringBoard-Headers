/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CoreIRLearningSessionDelegate, CoreIRLearningSessionBridgeDelegate;
@class CoreIRDevice;

@interface CoreIRLearningSession : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _reason;
	id<CoreIRLearningSessionDelegate> _delegate;
	CoreIRDevice* _owningDevice;
	id<CoreIRLearningSessionBridgeDelegate> _bridgeDelegate;

}

@property (nonatomic,readonly) unsigned long long reason;                                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) id<CoreIRLearningSessionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CoreIRDevice * owningDevice;                                         //@synthesize owningDevice=_owningDevice - In the implementation block
@property (assign,nonatomic) id<CoreIRLearningSessionBridgeDelegate> bridgeDelegate;              //@synthesize bridgeDelegate=_bridgeDelegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CoreIRLearningSessionDelegate>)arg1 ;
-(id)init;
-(id<CoreIRLearningSessionDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)reason;
-(CoreIRDevice *)owningDevice;
-(void)setBridgeDelegate:(id<CoreIRLearningSessionBridgeDelegate>)arg1 ;
-(BOOL)startLearningCommand:(unsigned long long)arg1 ;
-(void)endLearning;
-(void)enumerateMappingWithBlock:(/*^block*/id)arg1 ;
-(void)setOwningDevice:(CoreIRDevice *)arg1 ;
-(id<CoreIRLearningSessionBridgeDelegate>)bridgeDelegate;
-(id)initWithReason:(unsigned long long)arg1 ;
@end
