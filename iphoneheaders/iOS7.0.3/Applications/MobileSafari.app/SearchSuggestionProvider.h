/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/CompletionProvider.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableData, NSString, NSObject;

@interface SearchSuggestionProvider : CompletionProvider <NSURLConnectionDelegate> {

	CFURLConnectionRef _suggestionConnection;
	NSMutableData* _suggestionData;
	NSString* _currentSearchString;
	NSString* _userAgentString;
	NSObject<OS_dispatch_queue>* _connectionQueue;

}
-(void)setStringToComplete:(id)arg1 ;
-(void)_cancelAndReleaseConnectionAndData;
-(id)suggestionQueryStringForSearchString:(id)arg1 ;
-(id)suggestionStrings;
-(unsigned)maximumCachedCompletionCount;
-(void)dealloc;
-(id)init;
-(void)stop;
@end

