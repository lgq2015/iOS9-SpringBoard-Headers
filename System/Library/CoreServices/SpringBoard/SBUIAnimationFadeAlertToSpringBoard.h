//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBLockToAppStatusBarAnimator;

@interface SBUIAnimationFadeAlertToSpringBoard : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
}

- (void)_startAnimation;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

