/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCConnection* _connection;

}
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)_clearConnection;
-(void)getCellularReadingListAllowedWithCompletion:(/*^block*/ id)arg1 ;
-(void)setCellularReadingListAllowed:(BOOL)arg1 ;
-(void)getSafariWebDataUsageWithCompletion:(/*^block*/ id)arg1 ;
-(void)deleteAllSafariSecurityOrigins;
-(void)deleteSafariSecurityOrigin:(id)arg1 ;
-(void)deleteSafariPersistentURLCacheStorage;
-(id)getSafariDataUsageSummary;
@end

