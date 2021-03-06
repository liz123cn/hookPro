//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSNumber, PSSpecifier;

@interface PSSpecifierUpdateOperation : NSObject <NSCopying>
{
    int _operation;
    PSSpecifier *_specifier;
    NSNumber *_index;
    NSNumber *_toIndex;
}

+ (id)moveOperationWithSpecifier:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
+ (id)reloadOperationWithSpecifier:(id)arg1 atIndex:(unsigned int)arg2;
+ (id)removeOperationWithSpecifier:(id)arg1 atIndex:(unsigned int)arg2;
+ (id)insertOperationWithSpecifier:(id)arg1 atIndex:(unsigned int)arg2;
@property(retain, nonatomic) NSNumber *toIndex; // @synthesize toIndex=_toIndex;
- (id)initWithOperation:(int)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;
- (id)initWithOperation:(int)arg1 specifier:(id)arg2 index:(id)arg3;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
- (BOOL)applyToArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int operation; // @synthesize operation=_operation;
- (id)description;
- (void)dealloc;
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;

@end

