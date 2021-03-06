/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class PKPhysicsBody;

@interface SKUICircleRepellor : NSObject {

	double _bufferSize;
	CGPoint _center;
	PKPhysicsBody* _physicsBody;
	double _radius;

}

@property (assign,nonatomic) double bufferSize;                        //@synthesize bufferSize=_bufferSize - In the implementation block
@property (assign,nonatomic) CGPoint center;                           //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) PKPhysicsBody * physicsBody;              //@synthesize physicsBody=_physicsBody - In the implementation block
@property (assign,nonatomic) double radius;                            //@synthesize radius=_radius - In the implementation block
-(id)description;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(double)bufferSize;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(void)setBufferSize:(double)arg1 ;
-(void)setPhysicsBody:(PKPhysicsBody *)arg1 ;
-(PKPhysicsBody *)physicsBody;
@end

