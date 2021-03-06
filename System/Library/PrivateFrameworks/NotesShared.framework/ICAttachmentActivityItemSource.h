/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <UIKit/UIActivityItemSourceAttachment.h>
#import <UIKit/UIActivityItemSource.h>

@class ICAttachment, NSString;

@interface ICAttachmentActivityItemSource : NSObject <UIActivityItemSourceAttachment, UIActivityItemSource> {

	ICAttachment* _attachment;

}

@property (assign,nonatomic,__weak) ICAttachment * attachment;                 //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentTypeUTI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAttachment:(id)arg1 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
-(NSString *)attachmentTypeUTI;
@end

