/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject {

	NSNumberFormatter* _numberFormatter;

}

@property (retain) NSString * localeIdentifier; 
@property (retain) NSString * style; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(NSString *)localeIdentifier;
-(id)stringFromNumber:(id)arg1 ;
-(id)attributeKeys;
-(id)numberFromString:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
@end
