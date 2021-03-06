/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABChameleonCell.h>

@class ABMultiCellContentView;

@interface ABMultiCell : ABChameleonCell {

	ABMultiCellContentView* _abMultiCellContentView;
	BOOL _editingDisabled;

}

@property (assign,getter=isEditingDisabled,nonatomic) BOOL editingDisabled;              //@synthesize editingDisabled=_editingDisabled - In the implementation block
@property (nonatomic,retain) ABMultiCellContentView * multiCellContentView; 
-(void)setAbCellStyle:(int)arg1 ;
-(void)_addMultiCellContentViewIfNeeded;
-(BOOL)_shouldSwallowTouches:(id)arg1 withEvent:(id)arg2 ;
-(ABMultiCellContentView *)multiCellContentView;
-(void)setMultiCellContentView:(ABMultiCellContentView *)arg1 ;
-(BOOL)isEditingDisabled;
-(void)setEditingDisabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

