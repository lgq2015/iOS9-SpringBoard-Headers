/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface __NSSetM : NSMutableSet {

	unsigned _used : 58;
	unsigned long long _size;
	unsigned long long _mutations;
	id* _objs;

}
+(id)__new:(const id*)arg1 :(unsigned long long)arg2 :(BOOL)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)_mutate;
-(double)clumpingFactor;
-(double)clumpingInterestingThreshold;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(void)finalize;
@end
