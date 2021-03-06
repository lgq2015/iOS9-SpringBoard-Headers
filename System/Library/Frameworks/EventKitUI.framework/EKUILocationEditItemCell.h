/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, UIActivityIndicatorView, UIButton;

@interface EKUILocationEditItemCell : UITableViewCell {

	UILabel* _title;
	UIImageView* _image;
	UIActivityIndicatorView* _spinner;
	UIButton* _clearButton;
	/*^block*/id _clearButtonTapped;

}

@property (nonatomic,copy) id clearButtonTapped;              //@synthesize clearButtonTapped=_clearButtonTapped - In the implementation block
-(void)setClearButtonTapped:(id)arg1 ;
-(void)updateWithName:(id)arg1 sourceSupportsAvailability:(BOOL)arg2 availabilityRequestInProgress:(BOOL)arg3 availabilityType:(long long)arg4 ;
-(id)clearButtonTapped;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)description;
-(void)_clearButtonTapped:(id)arg1 ;
@end

