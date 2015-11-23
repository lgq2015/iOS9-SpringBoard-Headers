/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKit/UITableViewCell.h>

@class TableViewManager, NSMutableDictionary, NSIndexPath;

@interface ManagedTableViewCell : UITableViewCell {

	TableViewManager* _parentTableManager;
	NSMutableDictionary* _cellDict;
	NSIndexPath* _currentIndexPath;
	double _cellXEdgeInset;
	double _neededContentHeight;
	double _computedRightmostEditTextInset;
	double _forcedRightmostEditTextInset;
	CGRect _modifiedContentViewFrame;

}

@property (assign,nonatomic) TableViewManager * parentTableManager;                //@synthesize parentTableManager=_parentTableManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cellDict;                       //@synthesize cellDict=_cellDict - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentIndexPath;                       //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
@property (nonatomic,readonly) double neededContentHeight;                         //@synthesize neededContentHeight=_neededContentHeight - In the implementation block
@property (nonatomic,readonly) double computedRightmostEditTextInset;              //@synthesize computedRightmostEditTextInset=_computedRightmostEditTextInset - In the implementation block
@property (assign,nonatomic) double forcedRightmostEditTextInset;                  //@synthesize forcedRightmostEditTextInset=_forcedRightmostEditTextInset - In the implementation block
-(NSIndexPath *)currentIndexPath;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(double)verticalInset;
-(id)accessibilityValue;
-(void)setParentTableManager:(TableViewManager *)arg1 ;
-(void)setForcedRightmostEditTextInset:(double)arg1 ;
-(void)setCellDict:(NSMutableDictionary *)arg1 ;
-(double)neededContentHeight;
-(double)computedRightmostEditTextInset;
-(NSMutableDictionary *)cellDict;
-(double)edgeInsetValue:(id)arg1 ;
-(double)rightInsetForView:(id)arg1 withItem:(id)arg2 ;
-(double)usableContentWidthForItem:(id)arg1 withVerticalNeighborView:(id)arg2 ;
-(double)usableContentWidth;
-(double)leftInsetForView:(id)arg1 withItem:(id)arg2 ;
-(double)horizontalSpacingForView:(id)arg1 withItem:(id)arg2 ;
-(double)verticalSpacingForView:(id)arg1 withItem:(id)arg2 ;
-(TableViewManager *)parentTableManager;
-(double)calculateFrameSizeForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned long long)arg3 withRemainingContentWidth:(double)arg4 ;
-(void)calculatePositionForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned long long)arg3 ;
-(void)repositionView:(id)arg1 ifOverlapsPreviousView:(id)arg2 ;
-(double)forcedRightmostEditTextInset;
@end
