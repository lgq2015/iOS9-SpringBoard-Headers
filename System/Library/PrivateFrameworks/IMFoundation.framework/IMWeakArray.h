/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray;

@interface IMWeakArray : NSObject {

	NSMutableArray* _weakArray;

}
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IM8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(id)description;
-(id)copyMutableArray;
-(void)addObjectIfNotIdenticalObjectExists:(id)arg1 ;
-(id)copyMutableSet;
@end
