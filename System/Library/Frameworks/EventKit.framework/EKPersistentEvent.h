/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@class NSString, NSDate, NSNumber, NSURL, EKPersistentSuggestedEventInfo, NSArray;

@interface EKPersistentEvent : EKPersistentCalendarItem {

	SCD_Struct_EK7 _cachedDurationUnits;

}

@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,readonly) SCD_Struct_EK7 durationUnits; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy) NSNumber * travelTime; 
@property (nonatomic,readonly) int birthdayID; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSString * responseComment; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (nonatomic,readonly) unsigned invitationChangedProperties; 
@property (assign,nonatomic) long long status; 
@property (assign,nonatomic) long long availability; 
@property (assign,nonatomic) long long privacyLevel; 
@property (getter=isFloating,nonatomic,readonly) BOOL floating; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isMeeting,nonatomic,readonly) BOOL meeting; 
@property (getter=isInvitation,nonatomic,readonly) BOOL invitation; 
@property (assign,nonatomic) long long travelAdvisoryBehavior; 
@property (assign,nonatomic) unsigned modifiedProperties; 
@property (assign,nonatomic) BOOL needsOccurrenceCacheUpdate; 
@property (assign,nonatomic) long long participationStatus; 
@property (nonatomic,readonly) long long pendingParticipationStatus; 
@property (nonatomic,copy) NSDate * originalStartDate; 
@property (nonatomic,retain) EKPersistentSuggestedEventInfo * suggestedEventInfo; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,readonly) BOOL allowsParticipationStatusModifications; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3 ;
-(void)removeAction:(id)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setSuggestedEventInfo:(EKPersistentSuggestedEventInfo *)arg1 ;
-(void)_invalidateCachedDurationUnits;
-(void)primitiveValueChangedForKey:(id)arg1 ;
-(BOOL)_areDurationUnitsCached;
-(BOOL)hasValidEventAction;
-(BOOL)isInvitation;
-(BOOL)_hasExternalIDOrDeliverySource;
-(long long)pendingParticipationStatus;
-(void)_adjustForNewCalendar;
-(void)setOriginalStartDate:(NSDate *)arg1 ;
-(long long)travelAdvisoryBehavior;
-(id)committedStartDate;
-(void)deleteFromOccurrenceDateOnward:(id)arg1 ;
-(int)birthdayID;
-(SCD_Struct_EK7)durationUnits;
-(BOOL)isMeeting;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(BOOL)needsOccurrenceCacheUpdate;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(long long)birthdayId;
-(unsigned)invitationChangedProperties;
-(BOOL)allowsParticipationStatusModifications;
-(id)detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3 ;
-(void)filterExceptionDates;
-(void)clearExceptionDatesAndUpdateDetachedOriginalDates;
-(EKPersistentSuggestedEventInfo *)suggestedEventInfo;
-(id)organizer;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(NSString *)eventIdentifier;
-(NSString *)responseComment;
-(long long)privacyLevel;
-(void)setPrivacyLevel:(long long)arg1 ;
-(id)exportToICS;
-(void)setResponseComment:(NSString *)arg1 ;
-(NSDate *)originalStartDate;
-(void)setParticipationStatus:(long long)arg1 ;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(BOOL)responseMustApplyToAll;
-(long long)participationStatus;
-(NSDate *)endDate;
-(void)setActions:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(NSArray *)actions;
-(BOOL)isEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)addAction:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)initCommon;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(void)setTravelTime:(NSNumber *)arg1 ;
-(NSNumber *)travelTime;
-(int)entityType;
-(BOOL)isFloating;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
-(BOOL)refresh;
-(void)setEndDate:(NSDate *)arg1 ;
@end
