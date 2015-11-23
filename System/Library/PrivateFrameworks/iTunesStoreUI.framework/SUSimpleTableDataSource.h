/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray;

@interface SUSimpleTableDataSource : SUTableDataSource {

	Class _cellConfigurationClass;
	NSArray* _objects;

}

@property (nonatomic,retain) Class cellConfigurationClass;              //@synthesize cellConfigurationClass=_cellConfigurationClass - In the implementation block
@property (nonatomic,retain) NSArray * objects;                         //@synthesize objects=_objects - In the implementation block
-(NSArray *)objects;
-(void)dealloc;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(void)reloadCellContexts;
-(id)objectForIndexPath:(id)arg1 ;
-(Class)cellConfigurationClass;
-(void)setCellConfigurationClass:(Class)arg1 ;
-(void)setObjects:(NSArray *)arg1 ;
@end
