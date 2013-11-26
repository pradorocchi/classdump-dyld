/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@class NSArray;

@interface SCRCPhotoEvaluatorResultPeople : SCRCPhotoEvaluatorResult {

	CGSize _imageSize;
	NSArray* _people;

}

@property (nonatomic,readonly) NSArray * people;              //@synthesize people=_people - In the implementation block
-(id)people;
-(void)dealloc;
-(id)humanReadableResult;
-(id)initWithPeople:(id)arg1 inImageOfSize:(CGSize)arg2 ;
@end

