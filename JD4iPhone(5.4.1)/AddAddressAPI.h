//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDBaseAPI.h"

@class JDShippingAddressModel;

@interface AddAddressAPI : JDBaseAPI
{
    _Bool _enabledValidRegion;
    JDShippingAddressModel *_addressModel;
}

@property(retain, nonatomic) JDShippingAddressModel *addressModel; // @synthesize addressModel=_addressModel;
@property(nonatomic) _Bool enabledValidRegion; // @synthesize enabledValidRegion=_enabledValidRegion;
- (void).cxx_destruct;
- (id)__convertMobileValue:(id)arg1;
- (id)parseWithKeyValues:(id)arg1;
- (id)requestParams;
- (id)functionId;
- (id)initWithShippingAddressModel:(id)arg1;

@end

