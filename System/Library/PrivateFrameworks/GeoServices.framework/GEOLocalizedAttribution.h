/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOLocalizedAttribution : PBCodable <NSCopying> {

	NSString* _displayName;
	NSString* _language;
	NSMutableArray* _logoURLs;
	NSMutableArray* _snippetLogoURLs;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                           //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSMutableArray * logoURLs;                     //@synthesize logoURLs=_logoURLs - In the implementation block
@property (nonatomic,retain) NSMutableArray * snippetLogoURLs;              //@synthesize snippetLogoURLs=_snippetLogoURLs - In the implementation block
-(id)bestURLForLogos:(id)arg1 scale:(double)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDisplayName;
-(NSMutableArray *)snippetLogoURLs;
-(void)setLogoURLs:(NSMutableArray *)arg1 ;
-(void)setSnippetLogoURLs:(NSMutableArray *)arg1 ;
-(unsigned long long)logoURLsCount;
-(unsigned long long)snippetLogoURLsCount;
-(id)logoURLsAtIndex:(unsigned long long)arg1 ;
-(id)snippetLogoURLsAtIndex:(unsigned long long)arg1 ;
-(void)addSnippetLogoURLs:(id)arg1 ;
-(void)addLogoURLs:(id)arg1 ;
-(void)clearLogoURLs;
-(void)clearSnippetLogoURLs;
-(NSMutableArray *)logoURLs;
-(BOOL)hasLanguage;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end
