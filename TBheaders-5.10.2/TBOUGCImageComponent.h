//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCoverUGComponent.h"

@class TBCameraSetting;

@interface TBOUGCImageComponent : TBOBaseCoverUGComponent
{
    TBCameraSetting *_cameraSetting;	// 8 = 0x8
}

+ (id)componentName;
@property(retain, nonatomic) TBCameraSetting *cameraSetting; // @synthesize cameraSetting=_cameraSetting;
- (void).cxx_destruct;
- (void)publish:(CDUnknownBlockType)arg1;
- (_Bool)isModify;
- (void)preReview:(id)arg1;
- (void)addPthotos:(id)arg1;
- (void)doActionWithCompleted:(CDUnknownBlockType)arg1;
- (_Bool)isValid;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end

