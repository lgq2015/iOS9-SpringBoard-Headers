/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSFormsMetadataProvider.h>

@class NSArray, NSString;

@interface WBUFormsMetadataProviderWK1 : NSObject <WBSFormsMetadataProvider> {

	NSArray* _framesForAllForms;
	NSArray* _metadataForAllForms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long formCount; 
+(id)metadataProviderWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
-(void)enumerateFormsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)formCount;
-(id)initWithFrames:(id)arg1 metadataForAllForms:(id)arg2 ;
@end

