/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject {

	WebNavigationDataPrivate* _private;

}
-(id)originalRequest;
-(void)dealloc;
-(id)title;
-(id)response;
-(id)url;
-(id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(BOOL)arg5 clientRedirectSource:(id)arg6 ;
-(BOOL)hasSubstituteData;
-(id)clientRedirectSource;
@end

