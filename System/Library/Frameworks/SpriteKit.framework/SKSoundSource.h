/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpriteKit/SpriteKit-Structs.h>
@class NSMutableArray;

@interface SKSoundSource : NSObject {

	unsigned _sourceId;
	NSMutableArray* _buffers;

}

@property (assign,nonatomic) BOOL shouldLoop; 
@property (assign,nonatomic) double gain; 
@property (assign,nonatomic) CGPoint position; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) int completedBufferCount; 
@property (nonatomic,readonly) int queuedBufferCount; 
+(id)sourceWithBuffer:(id)arg1 ;
+(id)source;
-(void)play;
-(BOOL)isPlaying;
-(void)queueBuffer:(id)arg1 ;
-(int)completedBufferCount;
-(int)queuedBufferCount;
-(void)purgeCompletedBuffers;
-(BOOL)shouldLoop;
-(void)setShouldLoop:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)stop;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(double)gain;
-(void)setGain:(double)arg1 ;
-(void)pause;
@end

