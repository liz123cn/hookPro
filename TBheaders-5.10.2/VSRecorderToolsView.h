//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIPinchGestureRecognizer, UITapGestureRecognizer, VSRecorder, VSRecorderFocusTargetView;
@protocol VSRecorderToolsViewDelegate;

@interface VSRecorderToolsView : UIView
{
    UITapGestureRecognizer *_tapToFocusGesture;	// 8 = 0x8
    UITapGestureRecognizer *_doubleTapToResetFocusGesture;	// 16 = 0x10
    UIPinchGestureRecognizer *_pinchZoomGesture;	// 24 = 0x18
    double _zoomAtStart;	// 32 = 0x20
    _Bool _showsFocusAnimationAutomatically;	// 40 = 0x28
    id <VSRecorderToolsViewDelegate> _delegate;	// 48 = 0x30
    VSRecorder *_recorder;	// 56 = 0x38
    double _minZoomFactor;	// 64 = 0x40
    double _maxZoomFactor;	// 72 = 0x48
    VSRecorderFocusTargetView *_cameraFocusTargetView;	// 80 = 0x50
}

@property(retain, nonatomic) VSRecorderFocusTargetView *cameraFocusTargetView; // @synthesize cameraFocusTargetView=_cameraFocusTargetView;
@property(nonatomic) _Bool showsFocusAnimationAutomatically; // @synthesize showsFocusAnimationAutomatically=_showsFocusAnimationAutomatically;
@property(nonatomic) double maxZoomFactor; // @synthesize maxZoomFactor=_maxZoomFactor;
@property(nonatomic) double minZoomFactor; // @synthesize minZoomFactor=_minZoomFactor;
@property(retain, nonatomic) VSRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) __weak id <VSRecorderToolsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool pinchToZoomEnabled;
@property(nonatomic) _Bool doubleTapToResetFocusEnabled;
@property(nonatomic) _Bool tapToFocusEnabled;
@property(retain, nonatomic) UIImage *insideFocusTargetImage;
@property(retain, nonatomic) UIImage *outsideFocusTargetImage;
@property(nonatomic) struct CGSize focusTargetSize;
- (void)pinchToZoom:(id)arg1;
- (void)tapToContinouslyAutoFocus:(id)arg1;
- (void)tapToAutoFocus:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)adjustFocusView;
- (void)layoutSubviews;
- (void)hideFocusAnimation;
- (void)showFocusAnimation;
- (void)commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

