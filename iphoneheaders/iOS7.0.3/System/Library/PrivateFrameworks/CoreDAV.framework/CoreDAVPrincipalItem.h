/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPrincipalItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _all;
	CoreDAVItemWithNoChildren* _authenticated;
	CoreDAVItemWithNoChildren* _unauthenticated;
	CoreDAVItem* _property;
	CoreDAVItemWithNoChildren* _selfItem;

}

@property (retain) CoreDAVHrefItem * href;                                   //@synthesize href=_href - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * all;                          //@synthesize all=_all - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * authenticated;                //@synthesize authenticated=_authenticated - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
@property (retain) CoreDAVItem * property;                                   //@synthesize property=_property - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * selfItem;                     //@synthesize selfItem=_selfItem - In the implementation block
+(id)copyParseRules;
-(id)property;
-(void)setProperty:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)hashString;
-(id)unauthenticated;
-(void)setAll:(id)arg1 ;
-(void)setUnauthenticated:(id)arg1 ;
-(void)setSelfItem:(id)arg1 ;
-(id)all;
-(id)authenticated;
-(id)selfItem;
-(id)initTypeIsAll;
-(id)initTypeIsHREFWithURL:(id)arg1 ;
-(id)initTypeIsProperty:(id)arg1 ;
-(id)initTypeIsAuthenticated;
-(id)initTypeIsUnauthenticated;
-(id)initTypeIsSelf;
-(void)setAuthenticated:(id)arg1 ;
-(id)href;
-(void)setHref:(id)arg1 ;
-(void)write:(id)arg1 ;
@end

