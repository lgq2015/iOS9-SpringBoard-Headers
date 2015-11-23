/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, NSArray;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {

	CalendarEventAlarmTable* _alarmTable;
	unsigned long long _disclosedSubitem;
	NSArray* _alarms;
	int _lastSeenAllDayState;
	BOOL _userChangedAlarm;
	BOOL _hasLeaveNowAlarm;
	BOOL _canHaveLeaveNowAlarm;

}
+(id)_labelTextForIndex:(unsigned long long)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(void)_updateAlarms;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(void)updateInternalTravelTimeStateForCalendarItem:(id)arg1 ;
-(void)_updateDefaultAlarm;
-(BOOL)_calendarItemHasLeaveNowAlarm;
-(BOOL)_alarmsMatchCalendarItem;
-(id)init;
@end
