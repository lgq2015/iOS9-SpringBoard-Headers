/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UITableView.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface PSSoftwareUpdateTableView : UITableView {

	int _state;
	NSString* _currentVersion;
	UILabel* _checkingStatusLabel;
	UILabel* _subtitleLabel;
	UIActivityIndicatorView* _checkingForUpdateSpinner;

}

@property (nonatomic,retain) NSString * currentVersion;                                       //@synthesize currentVersion=_currentVersion - In the implementation block
@property (nonatomic,retain) UILabel * checkingStatusLabel;                                   //@synthesize checkingStatusLabel=_checkingStatusLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                         //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * checkingForUpdateSpinner;              //@synthesize checkingForUpdateSpinner=_checkingForUpdateSpinner - In the implementation block
@property (assign,nonatomic) int state;                                                       //@synthesize state=_state - In the implementation block
-(void)layoutSubviews;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(NSString *)currentVersion;
-(void)setCurrentVersion:(NSString *)arg1 ;
-(UILabel *)checkingStatusLabel;
-(void)setCheckingStatusLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)checkingForUpdateSpinner;
-(void)setCheckingForUpdateSpinner:(UIActivityIndicatorView *)arg1 ;
@end

