/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:20 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <SpriteKit/SKScene.h>

@class NSMutableArray, SKEffectNode, SKNode, BokehParallaxNode, SKLabelNode, WKMotionManager, NSString, SKSpriteNode, UIColor, NSArray;

@interface BokehParallaxScene : SKScene {

	double CAMERA_SPEED_X;
	double CAMERA_SPEED_Y;
	double CAMERA_DISTANCE;
	double DISTANCE_SCALE;
	double _filterCoefficient;
	NSMutableArray* _parallaxNodes;
	CGRect _cameraBounds;
	CGRect _worldBounds;
	CGRect _worldCameraBounds;
	SKEffectNode* _world;
	SKNode* _camera;
	BokehParallaxNode* _backdropNode;
	SKNode* _hudNode;
	SKLabelNode* _hudLabel;
	double _lastUpdate;
	double _dt;
	BOOL _cameraWander;
	WKMotionManager* _motionManager;
	NSString* _bgImageName;
	SKSpriteNode* _bgImageNode;
	double _timeLastGravitySample;
	unsigned long long _baseFrameInterval;
	unsigned long long _stillFrameInterval;
	UIColor* _baseColor;

}

@property (assign) CGRect cameraBox; 
@property (readonly) CGRect bgBox; 
@property (assign) CGPoint cameraLocation; 
@property (assign) double previewScale; 
@property (assign) double timeLastGravitySample;                       //@synthesize timeLastGravitySample=_timeLastGravitySample - In the implementation block
@property (readonly) NSArray * parallaxNodes; 
@property (assign) BOOL cameraShouldWander; 
@property (assign) unsigned long long baseFrameInterval;               //@synthesize baseFrameInterval=_baseFrameInterval - In the implementation block
@property (assign) unsigned long long stillFrameInterval;              //@synthesize stillFrameInterval=_stillFrameInterval - In the implementation block
@property (assign) double filterCoefficient; 
@property (retain) NSString * bgImageName; 
@property (assign) double bgImageAlpha; 
@property (assign) double bgImageZPos; 
@property (retain) UIColor * baseColor;                                //@synthesize baseColor=_baseColor - In the implementation block
-(void)setBaseColor:(UIColor *)arg1 ;
-(void)didChangeSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copy;
-(id)initWithSize:(CGSize)arg1 ;
-(void)update:(double)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)forceUpdate;
-(UIColor *)baseColor;
-(double)previewScale;
-(void)setBaseFrameInterval:(unsigned long long)arg1 ;
-(void)setup_parallaxNodes;
-(double)filterCoefficient;
-(NSString *)bgImageName;
-(CGPoint)getCameraPositionFromNormalized:(CGPoint)arg1 ;
-(void)setup_world;
-(unsigned long long)baseFrameInterval;
-(double)bgImageZPos;
-(void)setCameraLocation:(CGPoint)arg1 ;
-(void)computeCameraBox;
-(void)setBgImageZPos:(double)arg1 ;
-(void)setBgImageName:(NSString *)arg1 ;
-(double)timeLastGravitySample;
-(CGPoint)cameraLocation;
-(void)moveCameraToRandomPoint;
-(void)addParallaxNode:(id)arg1 ;
-(void)setTimeLastGravitySample:(double)arg1 ;
-(void)setPreviewScale:(double)arg1 ;
-(double)bgImageAlpha;
-(NSArray *)parallaxNodes;
-(void)addLabel:(id)arg1 toNode:(id)arg2 ;
-(CGPoint)readGyro;
-(void)setBgImageAlpha:(double)arg1 ;
-(BOOL)cameraShouldWander;
-(CGRect)cameraBox;
-(void)setCameraBox:(CGRect)arg1 ;
-(void)setStillFrameInterval:(unsigned long long)arg1 ;
-(unsigned long long)stillFrameInterval;
-(CGPoint)clampCameraPosition:(CGPoint)arg1 ;
-(void)setCameraShouldWander:(BOOL)arg1 ;
-(CGRect)bgBox;
-(void)updateParallaxNodes;
-(void)setFilterCoefficient:(double)arg1 ;
@end

