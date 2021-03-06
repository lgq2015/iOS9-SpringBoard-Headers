/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaEntity.h>

@class NSString, MPMediaItemArtwork, NSDate, NSURL, NSArray;

@interface MPMediaItem : MPMediaEntity

@property (nonatomic,readonly) BOOL mediaTypeCanSeedGenius; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * albumTitle; 
@property (nonatomic,readonly) unsigned long long albumPersistentID; 
@property (nonatomic,readonly) NSString * artist; 
@property (nonatomic,readonly) unsigned long long artistPersistentID; 
@property (nonatomic,readonly) NSString * albumArtist; 
@property (nonatomic,readonly) unsigned long long albumArtistPersistentID; 
@property (nonatomic,readonly) NSString * genre; 
@property (nonatomic,readonly) unsigned long long genrePersistentID; 
@property (nonatomic,readonly) NSString * composer; 
@property (nonatomic,readonly) unsigned long long composerPersistentID; 
@property (nonatomic,readonly) double playbackDuration; 
@property (nonatomic,readonly) unsigned long long albumTrackNumber; 
@property (nonatomic,readonly) unsigned long long albumTrackCount; 
@property (nonatomic,readonly) unsigned long long discNumber; 
@property (nonatomic,readonly) unsigned long long discCount; 
@property (nonatomic,readonly) MPMediaItemArtwork * artwork; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (getter=isCompilation,nonatomic,readonly) BOOL compilation; 
@property (nonatomic,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) unsigned long long beatsPerMinute; 
@property (nonatomic,readonly) NSString * comments; 
@property (nonatomic,readonly) NSURL * assetURL; 
@property (getter=isCloudItem,nonatomic,readonly) BOOL cloudItem; 
@property (nonatomic,readonly) NSString * podcastTitle; 
@property (nonatomic,readonly) unsigned long long podcastPersistentID; 
@property (nonatomic,readonly) unsigned long long playCount; 
@property (nonatomic,readonly) unsigned long long skipCount; 
@property (nonatomic,readonly) unsigned long long rating; 
@property (nonatomic,copy) NSDate * lastPlayedDate; 
@property (nonatomic,readonly) NSString * userGrouping; 
@property (nonatomic,readonly) double bookmarkTime; 
@property (nonatomic,readonly) BOOL isRental; 
@property (nonatomic,readonly) BOOL isITunesU; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double stopTime; 
@property (nonatomic,readonly) unsigned long long year; 
@property (assign,nonatomic) unsigned long long skipCountSinceSync; 
@property (assign,nonatomic) unsigned long long playCountSinceSync; 
@property (nonatomic,copy) NSDate * lastSkippedDate; 
@property (nonatomic,copy) NSDate * dateAccessed; 
@property (assign,nonatomic) BOOL hasBeenPlayed; 
@property (nonatomic,readonly) BOOL rememberBookmarkTime; 
@property (nonatomic,readonly) double effectiveStopTime; 
@property (nonatomic,readonly) NSString * effectiveAlbumArtist; 
@property (nonatomic,readonly) BOOL isUsableAsRepresentativeItem; 
@property (nonatomic,readonly) NSArray * chapters; 
+(void)registerSupportedCustomProperties;
+(id)MPSD_mediaItemPropertiesForDownloadability;
+(id)artworkCatalogCacheProperties;
+(id)screenshotArtworkCatalogCacheProperties;
+(void)_createFilterableDictionary;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(id)persistentIDPropertyForGroupingType:(long long)arg1 ;
+(BOOL)_isValidItemProperty:(id)arg1 ;
+(id)titlePropertyForGroupingType:(long long)arg1 ;
+(id)fallbackTitlePropertyForGroupingType:(long long)arg1 ;
+(id)dynamicProperties;
-(id)MPU_libraryLinkKind;
-(id)MPU_libraryLinkArtist;
-(id)MPU_libraryLinkPlaylistName;
-(id)MPU_libraryLinkURL:(BOOL)arg1 ;
-(id)MPU_containerLibraryLinkURL;
-(id)MPU_directStoreURL;
-(id)MPU_libraryLinkURL;
-(id)MPU_contentItemIdentifierCollection;
-(BOOL)MPSD_isDownloadInProgress;
-(BOOL)MPSD_isDownloadable;
-(BOOL)mediaTypeCanSeedGenius;
-(id)artworkCatalog;
-(id)screenshotArtworkCatalog;
-(id)_artworkCatalogWithArtworkType:(long long)arg1 ;
-(double)stopTime;
-(NSString *)lyrics;
-(NSString *)artist;
-(NSString *)albumArtist;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)albumTrackCount;
-(NSString *)composer;
-(unsigned long long)discNumber;
-(unsigned long long)discCount;
-(BOOL)isCloudItem;
-(NSString *)genre;
-(BOOL)isCompilation;
-(NSDate *)releaseDate;
-(double)bookmarkTime;
-(BOOL)isITunesU;
-(NSArray *)chapters;
-(id)chapterOfType:(long long)arg1 atTime:(double)arg2 ;
-(id)initWithMultiverseIdentifier:(id)arg1 ;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(void)populateLocationPropertiesWithPath:(id)arg1 assetProtectionType:(long long)arg2 ;
-(void)clearLocationProperties;
-(id)valuesForProperties:(id)arg1 ;
-(void)gaplessHeuristicInfo:(unsigned*)arg1 durationInSamples:(unsigned long long*)arg2 lastPacketsResync:(unsigned long long*)arg3 encodingDelay:(unsigned*)arg4 encodingDrain:(unsigned*)arg5 ;
-(BOOL)rememberBookmarkTime;
-(void)noteWasPlayedToTime:(double)arg1 skipped:(BOOL)arg2 ;
-(BOOL)didSkipWithPlayedToTime:(double)arg1 ;
-(void)incrementPlayCountForPlayingToEnd;
-(BOOL)incrementPlayCountForStopTime:(double)arg1 ;
-(id)chaptersOfType:(long long)arg1 ;
-(double)effectiveStopTime;
-(BOOL)existsInLibrary;
-(id)multiverseIdentifier;
-(id)predicateForProperty:(id)arg1 ;
-(id)_directStoreURL;
-(id)_libraryLinkURL;
-(id)_libraryLinkKind;
-(id)_libraryLinkArtist;
-(id)_libraryLinkPlaylistName;
-(Class)itemArrayCoderPIDDataCodingClass;
-(void)markNominalAmountHasBeenPlayed;
-(void)incrementSkipCount;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(/*^block*/id)arg1 ;
-(double)nominalHasBeenPlayedThreshold;
-(id)_bestStoreURL;
-(void)populateLocationPropertiesWithPath:(id)arg1 ;
-(NSString *)effectiveAlbumArtist;
-(unsigned long long)albumPersistentID;
-(unsigned long long)albumArtistPersistentID;
-(unsigned long long)artistPersistentID;
-(unsigned long long)beatsPerMinute;
-(unsigned long long)composerPersistentID;
-(unsigned long long)genrePersistentID;
-(NSString *)podcastTitle;
-(unsigned long long)podcastPersistentID;
-(unsigned long long)playCount;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)playCountSinceSync;
-(void)setPlayCountSinceSync:(unsigned long long)arg1 ;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(NSDate *)dateAccessed;
-(void)setDateAccessed:(NSDate *)arg1 ;
-(unsigned long long)skipCount;
-(void)setSkipCount:(unsigned long long)arg1 ;
-(unsigned long long)skipCountSinceSync;
-(void)setSkipCountSinceSync:(unsigned long long)arg1 ;
-(NSDate *)lastSkippedDate;
-(void)setLastSkippedDate:(NSDate *)arg1 ;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(NSString *)userGrouping;
-(id)chapterOfType:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)countOfChaptersOfType:(long long)arg1 ;
-(BOOL)isUsableAsRepresentativeItem;
-(unsigned long long)mediaType;
-(NSString *)albumTitle;
-(NSURL *)assetURL;
-(double)playbackDuration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)didReceiveMemoryWarning;
-(NSString *)title;
-(id)representativeItem;
-(id)valueForProperty:(id)arg1 ;
-(unsigned long long)year;
-(double)startTime;
-(MPMediaItemArtwork *)artwork;
-(void)setRating:(unsigned long long)arg1 ;
-(unsigned long long)rating;
-(NSString *)comments;
-(BOOL)isRental;
@end

