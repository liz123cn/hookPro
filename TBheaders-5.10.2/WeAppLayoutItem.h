//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WeAppLayoutItem : NSObject
{
    int _heightSpec;	// 8 = 0x8
    int _widthSpec;	// 12 = 0xc
    int _mPrivateFlags;	// 16 = 0x10
    double _measuredWidth;	// 24 = 0x18
    double _measuredHeight;	// 32 = 0x20
}

@property(nonatomic) double measuredHeight; // @synthesize measuredHeight=_measuredHeight;
@property(nonatomic) double measuredWidth; // @synthesize measuredWidth=_measuredWidth;
@property(nonatomic) int mPrivateFlags; // @synthesize mPrivateFlags=_mPrivateFlags;
@property(nonatomic) int widthSpec; // @synthesize widthSpec=_widthSpec;
@property(nonatomic) int heightSpec; // @synthesize heightSpec=_heightSpec;

@end

