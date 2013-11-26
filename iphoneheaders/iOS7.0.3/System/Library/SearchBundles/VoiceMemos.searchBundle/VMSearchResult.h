/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SearchBundles/VoiceMemos.searchBundle/VoiceMemos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Search/SPSearchResult.h>

@class NSString, NSDate, NSURL;

@interface VMSearchResult : NSObject <SPSearchResult> {

	NSString* _title;
	NSDate* _modDate;
	double _duration;
	NSURL* _url;

}
-(void)dealloc;
-(int)domain;
-(unsigned long long)identifier;
-(const char*)titleUTF8String;
-(const char*)auxiliaryTitleUTF8String;
-(const char*)summaryUTF8String;
-(const char*)URLUTF8String;
-(id)initWithVoiceMemo:(id)arg1 ;
@end

