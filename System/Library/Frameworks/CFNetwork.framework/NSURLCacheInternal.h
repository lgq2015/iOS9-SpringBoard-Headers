/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString;

@interface NSURLCacheInternal : NSObject {

	unsigned long long memoryCapacity;
	unsigned long long diskCapacity;
	NSString* diskPath;
	unsigned long long currentMemoryUsage;
	unsigned long long currentDiskUsage;
	CFURLCache* _cacheRef;

}
-(void)dealloc;
-(void)finalize;
@end

