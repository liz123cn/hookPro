//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PageKitTemplateManager;

@interface TBChannelPageKitManager : NSObject
{
    PageKitTemplateManager *_pageKitTemplateManager;	// 8 = 0x8
}

+ (id)sharedInstance;
@property(retain, nonatomic) PageKitTemplateManager *pageKitTemplateManager; // @synthesize pageKitTemplateManager=_pageKitTemplateManager;
- (void).cxx_destruct;
- (void)modifyAttributes:(id)arg1;
- (id)dynamicPageKit5Albums:(id)arg1;
- (void)handle2Dynamic:(id)arg1 viewItems:(id)arg2;
- (void)handle3Dynamic:(id)arg1 viewItems:(id)arg2 Banner:(id)arg3;
- (id)dynamicLayout:(id)arg1 Data:(id)arg2;
- (id)createView:(id)arg1 withData:(id)arg2 isChannelMan:(_Bool)arg3;
- (id)init;

@end

