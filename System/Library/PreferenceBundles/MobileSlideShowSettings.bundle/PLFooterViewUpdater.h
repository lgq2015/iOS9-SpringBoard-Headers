/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLCloudProgressFooterView;

@interface PLFooterViewUpdater : NSObject {

	PLCloudProgressFooterView* _footerView;

}

@property (assign,nonatomic) PLCloudProgressFooterView * footerView;              //@synthesize footerView=_footerView - In the implementation block
-(id)init;
-(void)timerFired:(id)arg1 ;
-(void)startTimer;
-(PLCloudProgressFooterView *)footerView;
-(void)setFooterView:(PLCloudProgressFooterView *)arg1 ;
@end
