/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableCellBodyProperties : NSObject
+(void)mapWordProperties:(WrdTableProperties*)arg1 toProperties:(id)arg2 index:(unsigned long long)arg3 ;
+(void)mapProperties:(id)arg1 toWordProperties:(WrdTableProperties*)arg2 index:(unsigned long long)arg3 ;
+(id)formattingChangeDate:(const WrdDateTimeRef)arg1 ;
+(void)readFrom:(WrdTableProperties*)arg1 tracked:(WrdTableProperties*)arg2 properties:(id)arg3 index:(unsigned long long)arg4 ;
+(void)write:(id)arg1 wrdProperties:(WrdTableProperties*)arg2 tracked:(WrdTableProperties*)arg3 index:(unsigned long long)arg4 ;
@end

