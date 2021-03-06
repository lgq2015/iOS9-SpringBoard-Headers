/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCEVASSelectEvent, NSString;

@interface NFAWDVASSelect : NSObject <NFAWDEventProtocol> {

	unsigned version;
	unsigned mobileCapabilities;
	unsigned swStatus;
	AWDNFCHCEVASSelectEvent* _metric;

}

@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) unsigned mobileCapabilities; 
@property (assign,nonatomic) unsigned swStatus; 
@property (nonatomic,retain) AWDNFCHCEVASSelectEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setMetric:(AWDNFCHCEVASSelectEvent *)arg1 ;
-(AWDNFCHCEVASSelectEvent *)metric;
-(void)setSwStatus:(unsigned)arg1 ;
-(unsigned)swStatus;
-(void)setMobileCapabilities:(unsigned)arg1 ;
-(unsigned)mobileCapabilities;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

