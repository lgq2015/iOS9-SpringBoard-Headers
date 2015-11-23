/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying> {

	BOOL _requiresAuthentication;
	NSString* _text;
	BOOL _userAccepted;
	long long _versionID;

}

@property (assign,getter=isUserAccepted,nonatomic) BOOL userAccepted;              //@synthesize userAccepted=_userAccepted - In the implementation block
@property (assign,nonatomic) NSString * currentText;                               //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long currentVersionIdentifier;                   //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthentication;                        //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
-(BOOL)requiresAuthentication;
-(id)initWithResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isUserAccepted;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)currentText;
-(void)setCurrentText:(NSString *)arg1 ;
-(long long)currentVersionIdentifier;
-(void)setCurrentVersionIdentifier:(long long)arg1 ;
-(void)setUserAccepted:(BOOL)arg1 ;
@end
