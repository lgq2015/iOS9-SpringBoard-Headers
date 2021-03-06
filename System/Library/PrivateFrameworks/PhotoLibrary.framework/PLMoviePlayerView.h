/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class PLAVPlayerView, PLVideoOutBackgroundView, PLAirPlayBackgroundView, UIView, AVPlayer;

@interface PLMoviePlayerView : UIView {

	PLAVPlayerView* _avPlayerView;
	PLVideoOutBackgroundView* _videoOutView;
	PLAirPlayBackgroundView* _airPlayView;
	BOOL _destinationPlaceholderHidden;

}

@property (nonatomic,retain,readonly) UIView * videoView; 
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) long long destinationPlaceholderStyle; 
@property (assign,getter=isDestinationPlaceholderHidden,nonatomic) BOOL destinationPlaceholderHidden; 
-(void)setScaleMode:(unsigned long long)arg1 ;
-(long long)destinationPlaceholderStyle;
-(void)setScaleMode:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(UIView *)videoView;
-(AVPlayer *)player;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDestinationPlaceholderHidden:(BOOL)arg1 ;
-(void)reattachVideoView;
-(void)_clearVideoView;
-(void)_clearAirPlayView;
-(void)_installBackgroundView:(id)arg1 ;
-(void)setDestinationPlaceholderStyle:(long long)arg1 airPlayDeviceName:(id)arg2 ;
-(BOOL)isDestinationPlaceholderHidden;
@end

