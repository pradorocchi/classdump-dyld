/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Books/BCPlistProducer.h>

@class NSArray;

@interface BCSidecarTrimPlistProducer : BCPlistProducer {

	NSArray* _removePaths;

}
-(id)produceData;
-(id)initWithPath:(id)arg1 removePaths:(id)arg2 ;
-(void)dealloc;
-(BOOL)shouldRetry;
@end

