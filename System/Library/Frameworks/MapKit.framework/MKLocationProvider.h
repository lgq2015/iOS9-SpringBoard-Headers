/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSBundle, NSString;


@protocol MKLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@required
-(NSString *)effectiveBundleIdentifier;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
-(double)distanceFilter;
-(void)setAuthorizationRequestBlock:(/*^block*/id)arg1;
-(void)setEffectiveBundle:(id)arg1;
-(void)setMatchInfoEnabled:(BOOL)arg1;
-(BOOL)usesCLMapCorrection;
-(void)stopUpdatingVehicleSpeed;
-(double)expectedGpsUpdateInterval;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(void)startUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(int)headingOrientation;
-(double)desiredAccuracy;
-(double)timeScale;
-(BOOL)isTracePlayer;
-(BOOL)matchInfoEnabled;
-(void)stopUpdatingVehicleHeading;
-(BOOL)isSimulation;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)dismissHeadingCalibrationDisplay;
-(void)setActivityType:(long long)arg1;
-(id)authorizationRequestBlock;
-(void)requestWhenInUseAuthorization;
-(void)setDesiredAccuracy:(double)arg1;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setDelegate:(id)arg1;
-(id<MKLocationProviderDelegate>)delegate;
-(long long)activityType;
-(NSBundle *)effectiveBundle;
-(int)authorizationStatus;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1;
-(void)setHeadingOrientation:(int)arg1;

@end

