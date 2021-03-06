/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class TTTodo, NSUUID;

@interface TTParagraphStyle : NSObject <NSCopying, NSMutableCopying> {

	BOOL _needsParagraphCleanup;
	BOOL _needsListCleanup;
	unsigned _style;
	unsigned _hints;
	long long _alignment;
	long long _writingDirection;
	unsigned long long _indent;
	unsigned long long _startingItemNumber;
	TTTodo* _todo;

}

@property (assign,nonatomic) unsigned style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long alignment;                                //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long writingDirection;                         //@synthesize writingDirection=_writingDirection - In the implementation block
@property (nonatomic,readonly) long long layoutWritingDirection; 
@property (assign,nonatomic) unsigned long long indent;                          //@synthesize indent=_indent - In the implementation block
@property (assign,nonatomic) unsigned long long startingItemNumber;              //@synthesize startingItemNumber=_startingItemNumber - In the implementation block
@property (nonatomic,retain) TTTodo * todo;                                      //@synthesize todo=_todo - In the implementation block
@property (assign,nonatomic) unsigned hints;                                     //@synthesize hints=_hints - In the implementation block
@property (nonatomic,readonly) BOOL canIndent; 
@property (nonatomic,readonly) BOOL isList; 
@property (nonatomic,readonly) BOOL isHeader; 
@property (nonatomic,readonly) BOOL uniqueToLine; 
@property (nonatomic,readonly) BOOL preferSingleLine; 
@property (nonatomic,readonly) BOOL wantsFollowingNewLine; 
@property (assign,nonatomic) BOOL needsParagraphCleanup;                         //@synthesize needsParagraphCleanup=_needsParagraphCleanup - In the implementation block
@property (assign,nonatomic) BOOL needsListCleanup;                              //@synthesize needsListCleanup=_needsListCleanup - In the implementation block
@property (nonatomic,readonly) NSUUID * trackingUUID; 
+(unordered_map<NSTextAlignment, topotext::ParagraphStyle_Alignment, std::__1::hash<int>, std::__1::equal_to<NSTextAlignment>, std::__1::allocator<std::__1::pair<const NSTextAlignment, topotext::ParagraphStyle_Alignment> > >*)paragraphStyleAlignmentMap;
+(unordered_map<topotext::ParagraphStyle_Alignment, NSTextAlignment, std::__1::hash<int>, std::__1::equal_to<topotext::ParagraphStyle_Alignment>, std::__1::allocator<std::__1::pair<const topotext::ParagraphStyle_Alignment, NSTextAlignment> > >*)paragraphStyleAlignmentMapReverse;
+(id)paragraphStyleNamed:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)serialize;
-(void)saveToArchive:(ParagraphStyle*)arg1 ;
-(id)initWithArchive:(const ParagraphStyle*)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(long long)alignment;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)writingDirection;
-(void)setHints:(unsigned)arg1 ;
-(unsigned)hints;
-(NSUUID *)trackingUUID;
-(BOOL)canIndent;
-(TTTodo *)todo;
-(BOOL)isList;
-(BOOL)wantsFollowingNewLine;
-(void)setStartingItemNumber:(unsigned long long)arg1 ;
-(void)setTodo:(TTTodo *)arg1 ;
-(long long)layoutWritingDirection;
-(BOOL)needsParagraphCleanup;
-(void)setNeedsParagraphCleanup:(BOOL)arg1 ;
-(BOOL)needsListCleanup;
-(void)setNeedsListCleanup:(BOOL)arg1 ;
-(BOOL)preferSingleLine;
-(void)setWritingDirection:(long long)arg1 ;
-(BOOL)uniqueToLine;
-(unsigned long long)startingItemNumber;
-(BOOL)isHeader;
-(BOOL)isUnknownStyle;
-(id)listBulletInAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setIndent:(unsigned long long)arg1 ;
-(unsigned long long)indent;
@end

