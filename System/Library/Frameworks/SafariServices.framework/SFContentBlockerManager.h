/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WKUserContentController, NSArray;

@interface SFContentBlockerManager : NSObject {

	id _extensionMatchingContext;
	WKUserContentController* _userContentController;
	NSArray* _extensions;

}

@property (nonatomic,readonly) NSArray * extensions; 
@property (nonatomic,readonly) WKUserContentController * userContentController; 
+(id)sharedManager;
+(id)contentBlockerStore;
+(id)_contentBlockerLoaderConnection;
+(void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reloadUserContentController;
-(void)beginContentBlockerDiscovery;
-(BOOL)extensionIsEnabled:(id)arg1 ;
-(void)setExtension:(id)arg1 isEnabled:(BOOL)arg2 ;
-(WKUserContentController *)userContentController;
-(NSArray *)extensions;
-(id)displayNameForExtension:(id)arg1 ;
-(void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
