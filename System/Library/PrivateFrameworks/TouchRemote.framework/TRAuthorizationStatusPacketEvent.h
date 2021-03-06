/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRAuthorizationStatusPacketEvent : TRPacketEvent {

	long long _authorizationStatus;

}

@property (nonatomic,readonly) long long authorizationStatus;              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(long long)authorizationStatus;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithAuthorizationStatus:(long long)arg1 ;
@end

