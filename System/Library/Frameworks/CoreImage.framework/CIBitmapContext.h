/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIContext.h>

@interface CIBitmapContext : CIContext {

	CIBitmapContextPrivate* _bcpriv;

}
+(id)contextWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
+(id)contextWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 options:(id)arg5 ;
+(id)contextWithOptions:(id)arg1 ;
+(id)context;
-(id)initWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
-(id)initWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 options:(id)arg5 ;
-(BOOL)setBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
-(id)initWithOptions:(id)arg1 ;
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
@end

