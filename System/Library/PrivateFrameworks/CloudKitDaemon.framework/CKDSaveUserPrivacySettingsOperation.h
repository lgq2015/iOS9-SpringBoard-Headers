/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsOperation : CKDOperation {

	long long _discoverable;
	NSString* _applicationBundleID;

}

@property (assign,nonatomic) long long discoverable;                    //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;              //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
-(void)main;
-(NSString *)applicationBundleID;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(unsigned long long)activityStart;
-(BOOL)shouldCheckAppVersion;
-(void)setApplicationBundleID:(NSString *)arg1 ;
@end

