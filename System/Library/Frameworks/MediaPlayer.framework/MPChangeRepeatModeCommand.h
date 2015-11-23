/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangeRepeatModeCommand : MPRemoteCommand {

	unsigned long long _currentRepeatType;

}

@property (assign,nonatomic) unsigned long long currentRepeatType;              //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCurrentRepeatType:(unsigned long long)arg1 ;
-(unsigned long long)currentRepeatType;
@end
