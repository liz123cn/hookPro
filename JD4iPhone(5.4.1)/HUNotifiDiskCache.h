//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDDatabase.h"

@interface HUNotifiDiskCache : JDDatabase
{
}

+ (_Bool)_checkNotifiId:(id)arg1;
+ (void)saveNotifiId:(id)arg1;
+ (_Bool)isShowNotifi:(id)arg1;
- (_Bool)_deleteAll;
- (_Bool)_getDataById:(id)arg1 userPin:(id)arg2;
- (_Bool)_insertNotifiId:(id)arg1 userPin:(id)arg2;
- (void)checkTable;

@end

