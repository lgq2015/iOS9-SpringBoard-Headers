//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBBulletinListSubsection : NSObject
{
    _Bool _showsInLockScreen;
    _Bool _showsMessagePreview;
    NSString *_subsectionID;
}

@property(nonatomic) _Bool showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(nonatomic) _Bool showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property(readonly, copy, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
- (void)dealloc;
- (id)initWithBulletinListSection:(id)arg1 subsectionID:(id)arg2;

@end

