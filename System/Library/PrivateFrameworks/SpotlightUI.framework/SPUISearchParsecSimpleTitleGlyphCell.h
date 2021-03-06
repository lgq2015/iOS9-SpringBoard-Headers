/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchParsecSimpleCell.h>

@class UIImageView;

@interface SPUISearchParsecSimpleTitleGlyphCell : SPUISearchParsecSimpleCell {

	UIImageView* _titleGlyphImageView;

}

@property (nonatomic,retain) UIImageView * titleGlyphImageView;              //@synthesize titleGlyphImageView=_titleGlyphImageView - In the implementation block
+(BOOL)supportsSection:(id)arg1 result:(id)arg2 ;
-(id)constantConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(id)rightViewFrom:(id)arg1 ;
-(UIImageView *)titleGlyphImageView;
-(void)setTitleGlyphImageView:(UIImageView *)arg1 ;
@end

