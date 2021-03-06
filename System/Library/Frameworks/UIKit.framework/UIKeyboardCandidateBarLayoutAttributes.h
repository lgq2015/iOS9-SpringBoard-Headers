/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIKeyboardCandidateBarLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	BOOL _beginsFirstPage;
	BOOL _endsLastPage;

}

@property (assign,nonatomic) BOOL beginsFirstPage;              //@synthesize beginsFirstPage=_beginsFirstPage - In the implementation block
@property (assign,nonatomic) BOOL endsLastPage;                 //@synthesize endsLastPage=_endsLastPage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBeginsFirstPage:(BOOL)arg1 ;
-(void)setEndsLastPage:(BOOL)arg1 ;
-(BOOL)beginsFirstPage;
-(BOOL)endsLastPage;
@end

