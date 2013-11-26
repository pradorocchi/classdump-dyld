/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {

	NSMutableSet* _accessControlEntities;

}

@property (retain) NSMutableSet * accessControlEntities;              //@synthesize accessControlEntities=_accessControlEntities - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)accessControlEntities;
-(void)addACE:(id)arg1 ;
-(void)setAccessControlEntities:(id)arg1 ;
-(id)notGrantedSubsetOfACEs:(id)arg1 ;
-(id)liveACEs;
@end

