//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSPage, NSArray, NSColorSpace;

@interface MSTileRefresh : NSObject
{
    MSPage *_page;
    NSColorSpace *_colorSpace;
    NSArray *_artboardFrames;
    struct CGRect _contentRect;
}


@property(retain, nonatomic) NSArray *artboardFrames; // @synthesize artboardFrames=_artboardFrames;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;

@end

