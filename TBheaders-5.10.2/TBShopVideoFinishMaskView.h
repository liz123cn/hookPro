//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBIconFontButton, UIButton, UILabel;

@interface TBShopVideoFinishMaskView : UIView
{
    TBIconFontButton *_replayButton;	// 8 = 0x8
    UILabel *_replayLabel;	// 16 = 0x10
    TBIconFontButton *_shareButton;	// 24 = 0x18
    UIButton *_backButton;	// 32 = 0x20
    UILabel *_shareLabel;	// 40 = 0x28
}

@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) TBIconFontButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *replayLabel; // @synthesize replayLabel=_replayLabel;
@property(retain, nonatomic) TBIconFontButton *replayButton; // @synthesize replayButton=_replayButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

