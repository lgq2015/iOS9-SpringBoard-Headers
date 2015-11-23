/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _ATXDataStore, NSDate, NSMutableDictionary;

@interface _ATXAppInfoManager : NSObject {

	_ATXDataStore* _dataStore;
	NSDate* _lastLaunch;
	long long _spotlightLaunchCount;
	long long _launchCount;
	NSMutableDictionary* _infoMap;

}
+(id)sharedInstance;
-(id)init;
-(id)initWithDataStore:(id)arg1 ;
-(id)lastAppLaunch;
-(void)addLaunchForBundleId:(id)arg1 withDate:(id)arg2 ;
-(void)addSpotlightLaunchForBundleId:(id)arg1 withDate:(id)arg2 ;
-(id)appInfoForBundleId:(id)arg1 ;
-(void)removeAppInfoForBundleId:(id)arg1 ;
-(long long)launchedAppCount;
-(id)lastLaunchForBundleId:(id)arg1 ;
-(id)lastSpotlightLaunchForBundleId:(id)arg1 ;
-(id)initWithInMemoryStore;
@end
