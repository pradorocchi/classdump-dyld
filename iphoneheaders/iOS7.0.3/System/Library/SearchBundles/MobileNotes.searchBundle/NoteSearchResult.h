/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SearchBundles/MobileNotes.searchBundle/MobileNotes
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Search/SPSearchResult.h>

@class NSString, NSDate;

@interface NoteSearchResult : NSObject <SPSearchResult> {

	NSString* _title;
	NSString* _summary;
	NSDate* _modDate;
	unsigned long long _identifier;

}
-(int)domain;
-(unsigned long long)identifier;
-(const char*)titleUTF8String;
-(const char*)auxiliaryTitleUTF8String;
-(const char*)summaryUTF8String;
-(void).cxx_destruct;
-(id)initWithNote:(id)arg1 ;
@end

