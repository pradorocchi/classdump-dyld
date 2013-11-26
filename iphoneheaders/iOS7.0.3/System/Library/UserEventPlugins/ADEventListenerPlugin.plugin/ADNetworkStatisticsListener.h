/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSArray, AnalyticsWorkspace, UsageFeed;

@interface ADNetworkStatisticsListener : NSObject {

	NSMutableDictionary* srcDict;
	NSArray* symptom_keys;
	AnalyticsWorkspace* workspace;
	UsageFeed* feed;

}
-(void)applicationStateChanged:(id)arg1 ;
-(void)queried_results:(id)arg1 andRemove:(BOOL)arg2 ;
-(void)query_all;
-(void)dealloc;
-(id)init;
@end

