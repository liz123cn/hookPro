//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class UIScrollView, WXGScrollViewPerformanceMonitor;

@interface WXGFrameDropMonitorDataViewer : MMUIViewController
{
    WXGScrollViewPerformanceMonitor *m_performanceMonitor;
    UIScrollView *_mainScrollView;
}

@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
- (void).cxx_destruct;
- (void)makeScrollView;
- (void)makeView;
- (void)viewDidLoad;
- (id)initWithScrollViewPerformanceMonitor:(id)arg1;

@end

