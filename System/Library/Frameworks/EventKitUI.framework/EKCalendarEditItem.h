/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKCalendarEditItemDelegate, EKStyleProvider;
@class EKEventStore, EKCalendar;

@interface EKCalendarEditItem : NSObject {

	EKEventStore* _store;
	EKCalendar* _calendar;
	id<EKCalendarEditItemDelegate> _delegate;
	id<EKStyleProvider> _styleProvider;

}

@property (assign,nonatomic,__weak) id<EKCalendarEditItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<EKStyleProvider> styleProvider;                           //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,readonly) EKCalendar * calendar;                                     //@synthesize calendar=_calendar - In the implementation block
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id<EKStyleProvider>)styleProvider;
-(void)setCalendar:(id)arg1 store:(id)arg2 ;
-(void)layoutForWidth:(double)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(void)applyStyleProviderToCell:(id)arg1 ;
-(void)setDelegate:(id<EKCalendarEditItemDelegate>)arg1 ;
-(id<EKCalendarEditItemDelegate>)delegate;
-(void)reset;
-(BOOL)becomeFirstResponder;
-(EKCalendar *)calendar;
-(id)headerTitle;
@end
