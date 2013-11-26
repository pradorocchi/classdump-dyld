/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSURL;

@interface _UIDocumentStorage : NSObject {

	NSString* _scope;
	NSURL* _rootURL;

}

@property (readonly) NSURL * rootURL;                                  //@synthesize rootURL=_rootURL - In the implementation block
@property (getter=isUbiquitous,readonly) BOOL ubiquitous; 
-(void)dealloc;
-(id)initWithSearchScope:(id)arg1 rootURL:(id)arg2 ;
-(BOOL)isUbiquitous;
-(id)rootURL;
@end

