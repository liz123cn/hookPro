//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseResponseModel.h"

#import "ITBOListModel-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBOCommunity;

@interface TBOMyCommunitiesResponser : TBOBaseResponseModel <ITBOListModel>
{
    NSMutableArray<TBOCommunity> *_myCommunities;	// 8 = 0x8
    NSMutableArray<TBOCommunity> *_allCommunities;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableArray<TBOCommunity> *allCommunities; // @synthesize allCommunities=_allCommunities;
@property(retain, nonatomic) NSMutableArray<TBOCommunity> *myCommunities; // @synthesize myCommunities=_myCommunities;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)items;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

