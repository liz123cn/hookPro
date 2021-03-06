//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIButton, UIImageView, UITextField, aluLabel;
@protocol aluSMSVerifyBoxDelegate;

@interface aluSMSVerifyBox : UIView
{
    _Bool _isPerformingCountDown;	// 8 = 0x8
    double _beginTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    double _frozenTime;	// 32 = 0x20
    UIButton *_resendBtn;	// 40 = 0x28
    UITextField *_textField;	// 48 = 0x30
    id <aluSMSVerifyBoxDelegate> _delegate;	// 56 = 0x38
    NSTimer *_timer;	// 64 = 0x40
    UIImageView *_topLineImageView;	// 72 = 0x48
    UIImageView *_bottomLineImageView;	// 80 = 0x50
    UIImageView *_shuImageView;	// 88 = 0x58
    aluLabel *_leftLabel;	// 96 = 0x60
}

+ (id)smsVerifyBoxWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
@property(retain, nonatomic) aluLabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *shuImageView; // @synthesize shuImageView=_shuImageView;
@property(retain, nonatomic) UIImageView *bottomLineImageView; // @synthesize bottomLineImageView=_bottomLineImageView;
@property(retain, nonatomic) UIImageView *topLineImageView; // @synthesize topLineImageView=_topLineImageView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <aluSMSVerifyBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak UIButton *resendBtn; // @synthesize resendBtn=_resendBtn;
- (void).cxx_destruct;
- (void)textFieldEditingDidEnd:(id)arg1;
- (void)textFieldEditingDidBegin:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)onResend;
- (void)updateButtonTitleWithTimeRemain:(double)arg1;
- (void)invalidateTimer;
- (void)onTimer:(id)arg1;
- (void)stopCountDownAnimaton;
- (void)startCountDownAnimation;
- (id)getSMSCode;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

