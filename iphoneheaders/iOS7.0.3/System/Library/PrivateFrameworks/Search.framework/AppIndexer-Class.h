/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:34:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/AppIndexer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSBundle;

@interface AppIndexer : NSObject {

	NSString* _displayID;
	NSString* _category;
	NSString* _appSpotlightPath;
	NSString* _searchBundleName;
	NSBundle* _bundle;

}
-(id)_loadBundle;
-(id)_getUpdateIDsFromDatastore:(id)arg1 ;
-(id)initWithDisplayID:(id)arg1 andCategory:(id)arg2 ;
-(void)beginIndexing;
-(void)dealloc;
@end

