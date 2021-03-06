/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAddResultObjects : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * objects; 
@property (nonatomic,copy) NSArray * resultObjects; 
+(id)addResultObjects;
+(id)addResultObjectsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)objects;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)resultObjects;
-(void)setResultObjects:(NSArray *)arg1 ;
-(void)setObjects:(NSArray *)arg1 ;
@end

