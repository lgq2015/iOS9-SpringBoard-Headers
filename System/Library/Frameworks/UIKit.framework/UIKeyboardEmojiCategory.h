/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface UIKeyboardEmojiCategory : NSObject {

	long long _categoryType;
	NSArray* _emoji;
	long long _lastVisibleFirstEmojiIndex;
	NSString* _displaySymbol;

}

@property (assign) long long categoryType;                                       //@synthesize categoryType=_categoryType - In the implementation block
@property (retain) NSArray * emoji;                                              //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) long long lastVisibleFirstEmojiIndex;               //@synthesize lastVisibleFirstEmojiIndex=_lastVisibleFirstEmojiIndex - In the implementation block
@property (getter=name,nonatomic,readonly) NSString * name; 
@property (getter=displaySymbol,readonly) NSString * displaySymbol;              //@synthesize displaySymbol=_displaySymbol - In the implementation block
+(id)localizedStringForKey:(id)arg1 ;
+(long long)numberOfCategories;
+(id)categoryForType:(long long)arg1 ;
+(id)displayName:(long long)arg1 ;
+(id)categories;
+(BOOL)emojiString:(id)arg1 inGroup:(unsigned*)arg2 withGroupCount:(int)arg3 ;
+(unsigned long long)hasVariantsForEmoji:(id)arg1 ;
+(id)flagEmojiCountryCodesCommon;
+(id)flagEmojiCountryCodesReadyToUse;
+(id)stringToRegionalIndicatorString:(id)arg1 ;
+(id)computeEmojiFlagsSortedByLanguage;
+(id)emojiRecentsFromPreferences;
+(id)loadPrecomputedEmojiFlagCategory;
-(void)dealloc;
-(NSArray *)emoji;
-(NSString *)name;
-(void)setEmoji:(NSArray *)arg1 ;
-(void)setLastVisibleFirstEmojiIndex:(long long)arg1 ;
-(long long)categoryType;
-(long long)lastVisibleFirstEmojiIndex;
-(void)setCategoryType:(long long)arg1 ;
-(void)releaseCategories;
-(NSString *)displaySymbol;
@end
