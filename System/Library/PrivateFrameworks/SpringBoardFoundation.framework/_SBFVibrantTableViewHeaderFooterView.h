/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class _UIBackdropView, UIView, NSString;

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView {

	_UIBackdropView* _backdrop;
	UIView* _plusDView;
	BOOL _wantsPlusDLayer;
	long long _graphicsQuality;
	NSString* _backdropGroupName;

}

@property (assign,nonatomic) long long graphicsQuality;               //@synthesize graphicsQuality=_graphicsQuality - In the implementation block
@property (nonatomic,copy) NSString * backdropGroupName;              //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) BOOL wantsPlusDLayer;                    //@synthesize wantsPlusDLayer=_wantsPlusDLayer - In the implementation block
+(id)defaultBackgroundColorForGraphicsQuality:(long long)arg1 ;
-(void)setWantsPlusDLayer:(BOOL)arg1 ;
-(BOOL)wantsPlusDLayer;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)graphicsQuality;
-(void)setFloating:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setGraphicsQuality:(long long)arg1 ;
-(long long)initialGraphicsQuality;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSString *)backdropGroupName;
@end

