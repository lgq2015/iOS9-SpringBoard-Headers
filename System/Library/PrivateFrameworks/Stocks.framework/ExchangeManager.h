/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ExchangeManager : NSObject {

	NSMutableDictionary* _exchangesByName;

}
+(id)sharedManager;
-(void)saveChanges;
-(id)init;
-(id)exchangeWithName:(id)arg1 createIfNotFound:(BOOL)arg2 ;
-(void)_loadExchangesFromDefaults;
-(void)addExchange:(id)arg1 ;
-(id)exchangeWithName:(id)arg1 ;
-(void)_addExchange:(id)arg1 ;
-(id)exchangeList;
-(BOOL)containsExchange:(id)arg1 ;
-(void)removeExchange:(id)arg1 ;
-(void)reloadExchangesFromDefaults;
@end

