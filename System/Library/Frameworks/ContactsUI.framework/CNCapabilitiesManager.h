/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSIDQueryControllerDelegate.h>

@class NSMutableDictionary, NSString;

@interface CNCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate> {

	BOOL _isListeningToIDSServiceAvailability;
	BOOL _isListeningToIDSQueryController;
	NSMutableDictionary* _destinationStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCapabilitiesManager;
+(void)_setDefaultCapabilitiesManager:(id)arg1 ;
-(BOOL)hasCellularTelephonyCapability;
-(BOOL)isConferencingAvailable;
-(id)conferenceURLForPhoneNumber:(id)arg1 ;
-(id)conferenceURLForDestinationID:(id)arg1 ;
-(BOOL)hasSMSCapability;
-(BOOL)isMadridConfigured;
-(BOOL)isMMSConfigured;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasCameraCapability;
-(BOOL)hasPreviouslyConferencedWithID:(id)arg1 ;
-(BOOL)isEmailConfigured;
-(BOOL)isTwitterServiceAvailable;
-(BOOL)isWeiboServiceAvailable;
-(BOOL)hasVibratorCapability;
-(BOOL)isConferencingEverGonnaBeAvailable;
-(void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2 ;
-(void)removeIDSServiceAvailabilityListener:(id)arg1 ;
-(void)_startListeningToIDSServiceAvailabilityIfNecessary;
-(void)_startListeningToIDSIDQueryControllerIfNecessary;
-(BOOL)_isAppAvailable:(id)arg1 ;
-(BOOL)isSensitiveUIAllowed;
-(BOOL)hasCellularTelephonyHardwareCapability;
-(BOOL)hasCellularDataCapability;
-(BOOL)hasSiriCapability;
-(BOOL)hasAdditionalTextTones;
-(BOOL)isFaceTimeAudioAvailable;
-(BOOL)isPhoneAppAvailable;
-(BOOL)isMailAppAvailable;
-(BOOL)isMessagesAppAvailable;
-(BOOL)isFaceTimeAppAvailable;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(void)dealloc;
@end
