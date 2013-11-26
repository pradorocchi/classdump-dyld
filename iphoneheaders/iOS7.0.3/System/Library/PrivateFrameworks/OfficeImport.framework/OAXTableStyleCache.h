/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSMutableDictionary;

@interface OAXTableStyleCache : NSObject {

	NSString* mDefaultStyleId;
	NSMutableDictionary* mCache;

}
-(void)dealloc;
-(id)init;
-(xmlNode*)styleNodeForId:(id)arg1 ;
-(id)defaultStyleId;
-(void)setDefaultStyleId:(id)arg1 ;
-(void)setStyleNode:(xmlNode*)arg1 forId:(id)arg2 ;
-(xmlNode*)defaultStyleNode;
@end

