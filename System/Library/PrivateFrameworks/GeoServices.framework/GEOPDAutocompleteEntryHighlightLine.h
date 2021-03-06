/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _line;
	NSMutableArray* _spans;

}

@property (nonatomic,readonly) BOOL hasLine; 
@property (nonatomic,retain) NSString * line;                                //@synthesize line=_line - In the implementation block
@property (nonatomic,retain) NSMutableArray * spans;                         //@synthesize spans=_spans - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)line;
-(void)setLine:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearSpans;
-(void)addSpan:(id)arg1 ;
-(NSMutableArray *)spans;
-(id)spanAtIndex:(unsigned long long)arg1 ;
-(void)setSpans:(NSMutableArray *)arg1 ;
-(unsigned long long)spansCount;
-(BOOL)hasLine;
-(BOOL)readFrom:(id)arg1 ;
@end

