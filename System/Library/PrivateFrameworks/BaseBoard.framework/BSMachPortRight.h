/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding> {

	unsigned _queue_port;
	unsigned _rawPort;
	int _owner;
	NSString* _trace;

}

@property (nonatomic,copy,readonly) NSString * trace;               //@synthesize trace=_trace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)_serialize:(/*^block*/id)arg1 ;
+(id)_rightDescription;
+(void)_queue_invalidatePortPointer:(unsigned*)arg1 owner:(int)arg2 ;
+(void)_queue_destroyPort:(unsigned)arg1 ;
+(id)_descriptionForPort:(unsigned)arg1 owner:(int)arg2 tag:(id)arg3 trace:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(unsigned)port;
-(BOOL)isUsable;
-(id)_initWithPort:(unsigned)arg1 owner:(int)arg2 trace:(id)arg3 ;
-(BOOL)_queue_isUsable;
-(void)_queue_invalidateForOwner:(int)arg1 ;
-(unsigned)rawPort;
-(unsigned)_queue_port;
-(NSString *)trace;
-(void)_queue_invalidate;
@end
