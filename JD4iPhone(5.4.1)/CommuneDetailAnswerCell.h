//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CommuneDetailAnswerModel, UIButton, UILabel, UIView;

@interface CommuneDetailAnswerCell : UITableViewCell
{
    CommuneDetailAnswerModel *_answerModel;
    UILabel *_nickNameLabel;
    UILabel *_timeLabel;
    UILabel *_questionContentLabel;
    UIView *_lineView;
    UIButton *_moreButton;
    CDUnknownBlockType _report;
}

@property(copy, nonatomic) CDUnknownBlockType report; // @synthesize report=_report;
- (void).cxx_destruct;
- (void)moreButtonTap:(id)arg1;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

