/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {

	int _state;
	BOOL _fetchPrincipalDetails;

}

@property (assign) BOOL fetchPrincipalDetails;              //@synthesize fetchPrincipalDetails=_fetchPrincipalDetails - In the implementation block
@property (assign) int state;                               //@synthesize state=_state - In the implementation block
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)_getChildProperties;
-(void)setFetchPrincipalDetails:(BOOL)arg1 ;
-(id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg1 ;
-(BOOL)fetchPrincipalDetails;
-(void)_expandPropertiesWithAllowWrite:(BOOL)arg1 ;
-(void)_fetchOnlyHrefs;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
@end

