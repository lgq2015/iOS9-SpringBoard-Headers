/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OAVReadClient.h>

@interface WXVmlReadClient : NSObject <OAVReadClient>
+(void)readTextWrappingFromParent:(xmlNode*)arg1 toAnchor:(id)arg2 ;
+(void)initialize;
+(void)readClientDataFromShape:(xmlNode*)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(xmlNode*)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(int)vmlSupportLevel;
+(int)horizontalPosition:(id)arg1 ;
+(int)relativeHorizontalPosition:(id)arg1 ;
+(int)verticalPosition:(id)arg1 ;
+(int)relativeVerticalPosition:(id)arg1 ;
+(double)wrapDistanceLeft:(id)arg1 ;
+(double)wrapDistanceTop:(id)arg1 ;
+(double)wrapDistanceRight:(id)arg1 ;
+(double)wrapDistanceBottom:(id)arg1 ;
+(BOOL)floating:(id)arg1 ;
+(int)zIndex:(id)arg1 ;
+(void)readFromDrawable:(xmlNode*)arg1 toContent:(id)arg2 ;
+(void)copyFromDrawable:(id)arg1 toContent:(id)arg2 ;
@end
