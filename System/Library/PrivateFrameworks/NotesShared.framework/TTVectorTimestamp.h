/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject <NSCopying> {

	NSMutableDictionary* _clock;

}
-(id)initWithData:(id)arg1 ;
-(id)serialize;
-(void)saveToArchive:(VectorTimestamp*)arg1 ;
-(id)initWithArchive:(const VectorTimestamp*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)compareTo:(id)arg1 ;
-(void)mergeWithTimestamp:(id)arg1 ;
-(id)sortedUUIDs;
-(unsigned long long)clockForUUID:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(id)allUUIDs;
-(id)clockElementForUUID:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(unsigned long long)subclockForUUID:(id)arg1 ;
-(void)incrementClockForUUID:(id)arg1 ;
@end

