/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASyncVerificationResult : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long fail; 
@property (nonatomic,copy) NSArray * failedObjectIds; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long total; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)verificationResult;
+(id)verificationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)total;
-(void)setTotal:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)fail;
-(void)setFail:(long long)arg1 ;
-(NSArray *)failedObjectIds;
-(void)setFailedObjectIds:(NSArray *)arg1 ;
@end

