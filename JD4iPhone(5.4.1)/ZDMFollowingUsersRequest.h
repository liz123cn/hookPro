//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZDMRequest.h"

#import "ZDMUsersRequest.h"

@class NSArray, NSString;

@interface ZDMFollowingUsersRequest : ZDMRequest <ZDMUsersRequest>
{
    _Bool _lastPage;
    long long _pageNumber;
    long long _pageSize;
    NSArray *_users;
    NSString *_endingImagePath;
}

@property(retain, nonatomic) NSString *endingImagePath; // @synthesize endingImagePath=_endingImagePath;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(nonatomic, getter=isLastPage) _Bool lastPage; // @synthesize lastPage=_lastPage;
@property(readonly, nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(readonly, nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
- (void).cxx_destruct;
- (void)responseUsers:(CDUnknownBlockType)arg1;
- (id)initWithPageNumber:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

