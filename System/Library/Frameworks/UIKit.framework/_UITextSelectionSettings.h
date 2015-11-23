/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class NSNumber;

@interface _UITextSelectionSettings : _UISettings {

	double _minPinkWidth;
	double _maxPinkWidth;
	double _pinkWidthFactor;
	double _linear;
	double _parabolic;
	double _gain;
	double _allowableSeparation;
	double _allowableForceMovement;
	NSNumber* _shouldUseAcceleration;
	NSNumber* _shouldPreferEndOfWord;
	NSNumber* _allowExtendingSelections;
	NSNumber* _enableDeepPress;

}

@property (assign,nonatomic) double minPinkWidth;                              //@synthesize minPinkWidth=_minPinkWidth - In the implementation block
@property (assign,nonatomic) double maxPinkWidth;                              //@synthesize maxPinkWidth=_maxPinkWidth - In the implementation block
@property (assign,nonatomic) double pinkWidthFactor;                           //@synthesize pinkWidthFactor=_pinkWidthFactor - In the implementation block
@property (assign,nonatomic) double linear;                                    //@synthesize linear=_linear - In the implementation block
@property (assign,nonatomic) double parabolic;                                 //@synthesize parabolic=_parabolic - In the implementation block
@property (assign,nonatomic) double gain;                                      //@synthesize gain=_gain - In the implementation block
@property (assign,nonatomic) double allowableSeparation;                       //@synthesize allowableSeparation=_allowableSeparation - In the implementation block
@property (assign,nonatomic) double allowableForceMovement;                    //@synthesize allowableForceMovement=_allowableForceMovement - In the implementation block
@property (nonatomic,retain) NSNumber * shouldUseAcceleration;                 //@synthesize shouldUseAcceleration=_shouldUseAcceleration - In the implementation block
@property (nonatomic,retain) NSNumber * shouldPreferEndOfWord;                 //@synthesize shouldPreferEndOfWord=_shouldPreferEndOfWord - In the implementation block
@property (nonatomic,retain) NSNumber * allowExtendingSelections;              //@synthesize allowExtendingSelections=_allowExtendingSelections - In the implementation block
@property (nonatomic,retain) NSNumber * enableDeepPress;                       //@synthesize enableDeepPress=_enableDeepPress - In the implementation block
+(id)sharedInstance;
-(void)setDefaultValues;
-(NSNumber *)shouldUseAcceleration;
-(NSNumber *)allowExtendingSelections;
-(double)allowableSeparation;
-(NSNumber *)enableDeepPress;
-(double)allowableForceMovement;
-(double)linear;
-(double)parabolic;
-(double)gain;
-(void)setAllowableSeparation:(double)arg1 ;
-(void)setMinPinkWidth:(double)arg1 ;
-(void)setMaxPinkWidth:(double)arg1 ;
-(void)setPinkWidthFactor:(double)arg1 ;
-(void)setLinear:(double)arg1 ;
-(void)setParabolic:(double)arg1 ;
-(void)setGain:(double)arg1 ;
-(void)setAllowableForceMovement:(double)arg1 ;
-(void)setAllowExtendingSelections:(NSNumber *)arg1 ;
-(void)setShouldUseAcceleration:(NSNumber *)arg1 ;
-(void)setShouldPreferEndOfWord:(NSNumber *)arg1 ;
-(void)setEnableDeepPress:(NSNumber *)arg1 ;
-(double)minPinkWidth;
-(double)maxPinkWidth;
-(double)pinkWidthFactor;
-(NSNumber *)shouldPreferEndOfWord;
@end
