/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CALayerHost : CALayer

@property (assign) unsigned contextId; 
@property (assign) BOOL inheritsSecurity; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(unsigned)contextId;
-(void)setContextId:(unsigned)arg1 ;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(BOOL)inheritsSecurity;
@end
