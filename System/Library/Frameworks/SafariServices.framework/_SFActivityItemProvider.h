/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class NSURL, NSString;

@interface _SFActivityItemProvider : UIActivityItemProvider {

	NSURL* _url;
	NSString* _pageTitle;

}

@property (nonatomic,retain) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * pageTitle;              //@synthesize pageTitle=_pageTitle - In the implementation block
-(id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 ;
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 ;
-(void)setPageTitle:(NSString *)arg1 ;
-(id)item;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(NSString *)pageTitle;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
@end

