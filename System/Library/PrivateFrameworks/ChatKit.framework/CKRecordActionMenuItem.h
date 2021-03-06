/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKActionMenuItem.h>

@class NSDate;

@interface CKRecordActionMenuItem : CKActionMenuItem {

	BOOL _wasSelected;
	NSDate* _dateSelected;

}

@property (assign,nonatomic) BOOL wasSelected;                   //@synthesize wasSelected=_wasSelected - In the implementation block
@property (nonatomic,retain) NSDate * dateSelected;              //@synthesize dateSelected=_dateSelected - In the implementation block
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setWasSelected:(BOOL)arg1 ;
-(void)setDateSelected:(NSDate *)arg1 ;
-(BOOL)wasSelected;
-(NSDate *)dateSelected;
-(void)updateForState:(long long)arg1 touchInside:(BOOL)arg2 ;
@end

