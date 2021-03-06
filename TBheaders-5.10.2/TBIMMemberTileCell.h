//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, TBIMShadowLine, UILabel;
@protocol TBIMMemberTileCellDelegate;

@interface TBIMMemberTileCell : UITableViewCell
{
    UILabel *_topLeftContentLabel;	// 8 = 0x8
    UILabel *_topRightContentLabel;	// 16 = 0x10
    UILabel *_topRightArrowLabel;	// 24 = 0x18
    NSMutableArray *_memberViews;	// 32 = 0x20
    UILabel *_addLabel;	// 40 = 0x28
    UILabel *_deletedLabel;	// 48 = 0x30
    TBIMShadowLine *_shadowLine;	// 56 = 0x38
    id <TBIMMemberTileCellDelegate> _memberTileViewDelegate;	// 64 = 0x40
}

+ (double)heightForModel:(id)arg1;
@property(nonatomic) __weak id <TBIMMemberTileCellDelegate> memberTileViewDelegate; // @synthesize memberTileViewDelegate=_memberTileViewDelegate;
@property(retain, nonatomic) TBIMShadowLine *shadowLine; // @synthesize shadowLine=_shadowLine;
@property(retain, nonatomic) UILabel *deletedLabel; // @synthesize deletedLabel=_deletedLabel;
@property(retain, nonatomic) UILabel *addLabel; // @synthesize addLabel=_addLabel;
@property(retain, nonatomic) NSMutableArray *memberViews; // @synthesize memberViews=_memberViews;
@property(retain, nonatomic) UILabel *topRightArrowLabel; // @synthesize topRightArrowLabel=_topRightArrowLabel;
@property(retain, nonatomic) UILabel *topRightContentLabel; // @synthesize topRightContentLabel=_topRightContentLabel;
@property(retain, nonatomic) UILabel *topLeftContentLabel; // @synthesize topLeftContentLabel=_topLeftContentLabel;
- (void).cxx_destruct;
- (void)tapMemberViewGesture:(id)arg1;
- (void)tapMoveGesture:(id)arg1;
- (void)tapAddGesture:(id)arg1;
- (void)refreshViewWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 model:(id)arg3 delegate:(id)arg4;

@end

