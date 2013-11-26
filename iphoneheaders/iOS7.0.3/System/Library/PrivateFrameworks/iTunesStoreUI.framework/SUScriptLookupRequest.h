/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSLookupRequest, NSString;

@interface SUScriptLookupRequest : SUScriptObject {

	SSLookupRequest* _request;

}

@property (retain) id authenticatesIfNeeded; 
@property (copy) NSString * keyProfile; 
@property (assign) int localizationStyle; 
@property (readonly) int localizationStyleDevice; 
@property (readonly) int localizationStyleServer; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setKeyProfile:(id)arg1 ;
-(void)setAuthenticatesIfNeeded:(id)arg1 ;
-(void)setLocalizationStyle:(int)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)valueForRequestParameter:(id)arg1 ;
-(id)authenticatesIfNeeded;
-(id)keyProfile;
-(int)localizationStyle;
-(void)startWithLookupFunction:(id)arg1 ;
-(int)localizationStyleDevice;
-(int)localizationStyleServer;
@end

