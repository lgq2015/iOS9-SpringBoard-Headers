/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SKWeakReference : NSObject {

	id _object;
	unsigned long long _objectAddress;

}

@property (nonatomic,readonly) id object; 
+(id)weakReferenceWithObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
@end
