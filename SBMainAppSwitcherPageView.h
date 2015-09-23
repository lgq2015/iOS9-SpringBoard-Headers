//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAppSwitcherPageView.h"

@class UIView<SBMainAppSwitcherPageContentView>;

@interface SBMainAppSwitcherPageView : SBAppSwitcherPageView
{
    long long _orientation;
}

+ (double)_horizontalEdgeBorderForOrientation:(long long)arg1;
+ (struct CGSize)sizeForOrientation:(long long)arg1;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (struct CGRect)_viewFrame;
- (struct CGPoint)_centerForSubviewLayout;
- (struct CGAffineTransform)_overlayRotationTransform;
- (struct CGAffineTransform)_scaleTransform;
- (void)setView:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;

// Remaining properties
@property(retain, nonatomic) UIView<SBMainAppSwitcherPageContentView> *view; // @dynamic view;

@end
