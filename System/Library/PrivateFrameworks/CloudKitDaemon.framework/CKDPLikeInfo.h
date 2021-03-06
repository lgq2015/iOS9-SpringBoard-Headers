/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPLikeInfo : PBCodable <NSCopying> {

	int _likeCount;
	BOOL _likedByCurrentUser;
	SCD_Struct_CK5 _has;

}

@property (assign,nonatomic) BOOL hasLikeCount; 
@property (assign,nonatomic) int likeCount;                           //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) BOOL hasLikedByCurrentUser; 
@property (assign,nonatomic) BOOL likedByCurrentUser;                 //@synthesize likedByCurrentUser=_likedByCurrentUser - In the implementation block
-(int)likeCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLikeCount:(int)arg1 ;
-(void)setHasLikeCount:(BOOL)arg1 ;
-(BOOL)hasLikeCount;
-(void)setLikedByCurrentUser:(BOOL)arg1 ;
-(void)setHasLikedByCurrentUser:(BOOL)arg1 ;
-(BOOL)hasLikedByCurrentUser;
-(BOOL)likedByCurrentUser;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

