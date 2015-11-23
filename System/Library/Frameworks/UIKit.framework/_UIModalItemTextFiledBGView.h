/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextFieldRoundedRectBackgroundViewNeue.h>

@class UIColor, UIView;

@interface _UIModalItemTextFiledBGView : _UITextFieldRoundedRectBackgroundViewNeue {

	long long _textFieldsCount;
	UIColor* _backgroundColor;
	UIColor* _separatorsColor;
	UIView* _separatorView;

}

@property (assign,nonatomic) long long textFieldsCount;              //@synthesize textFieldsCount=_textFieldsCount - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorsColor;              //@synthesize separatorsColor=_separatorsColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSeparatorsColor:(UIColor *)arg1 ;
-(void)setTextFieldsCount:(long long)arg1 ;
-(UIColor *)separatorsColor;
-(long long)textFieldsCount;
@end
