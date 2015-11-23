/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMoviePlayerViewController.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>

@class UIView, SUClientInterface, SUMediaPlayerItem, NSMutableArray, NSString;

@interface SUMediaPlayerViewController : MPMoviePlayerViewController <ISOperationDelegate> {

	UIView* _backgroundContainerView;
	SUClientInterface* _clientInterface;
	SUMediaPlayerItem* _mediaItem;
	NSMutableArray* _operations;
	long long _playerState;

}

@property (nonatomic,copy,readonly) SUMediaPlayerItem * mediaPlayerItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;                     //@synthesize clientInterface=_clientInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3 ;
+(void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1 ;
+(BOOL)_URLIsITunesU:(id)arg1 ;
+(void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(id)copyScriptViewController;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(void)_mediaTypesAvailableNotification:(id)arg1 ;
-(void)_playbackFinishedNotification:(id)arg1 ;
-(void)_bookmarkCurrentTime;
-(void)_insertBackgroundContainerView;
-(void)_prepareMediaItem;
-(void)_loadBackgroundImage;
-(void)_setIsActivePlayer:(BOOL)arg1 ;
-(void)_dequeueOperation:(id)arg1 ;
-(void)_showBackgroundImage:(id)arg1 ;
-(void)_enqueueOperation:(id)arg1 ;
-(id)_backgroundContainerView;
-(SUMediaPlayerItem *)mediaPlayerItem;
@end
