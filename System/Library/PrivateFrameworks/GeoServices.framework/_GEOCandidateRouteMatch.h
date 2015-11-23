/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface _GEOCandidateRouteMatch : NSObject {

	double _score;
	double _distanceFromRoute;
	PolylineCoordinate _routeCoordinate;
	SCD_Struct_GE16 _locationCoordinate;
	unsigned long long _stepIndex;

}

@property (assign,nonatomic) double score;                                    //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) double distanceFromRoute;                        //@synthesize distanceFromRoute=_distanceFromRoute - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE16 locationCoordinate;              //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) unsigned long long stepIndex;                    //@synthesize stepIndex=_stepIndex - In the implementation block
-(double)score;
-(void)dealloc;
-(id)description;
-(id)initWithRoute:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(PolylineCoordinate)routeCoordinate;
-(void)setDistanceFromRoute:(double)arg1 ;
-(void)setLocationCoordinate:(SCD_Struct_GE16)arg1 ;
-(void)setStepIndex:(unsigned long long)arg1 ;
-(void)setRouteCoordinate:(PolylineCoordinate)arg1 ;
-(unsigned long long)stepIndex;
-(double)distanceFromRoute;
-(SCD_Struct_GE16)locationCoordinate;
@end
