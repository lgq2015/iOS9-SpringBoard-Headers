/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RadioStationMatchMetadata;

@interface RadioStationMatchContext : NSObject {

	BOOL _shouldMatchArtist;
	RadioStationMatchMetadata* _matchMetadata;

}

@property (nonatomic,retain) RadioStationMatchMetadata * matchMetadata;              //@synthesize matchMetadata=_matchMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchArtist;                                 //@synthesize shouldMatchArtist=_shouldMatchArtist - In the implementation block
-(void)setMatchMetadata:(RadioStationMatchMetadata *)arg1 ;
-(void)setShouldMatchArtist:(BOOL)arg1 ;
-(id)copyMatchDictionary;
-(BOOL)shouldMatchArtist;
-(RadioStationMatchMetadata *)matchMetadata;
@end
