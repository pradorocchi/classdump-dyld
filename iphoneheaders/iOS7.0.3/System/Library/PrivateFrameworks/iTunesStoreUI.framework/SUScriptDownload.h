/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISUDownload, NSNumber, NSString;

@interface SUScriptDownload : SUScriptObject {

	ISUDownload* _download;

}

@property (readonly) NSNumber * adamID; 
@property (readonly) NSString * phase; 
@property (readonly) float progress; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)phaseStringForDownload:(id)arg1 ;
-(id)adamID;
-(void)dealloc;
-(id)phase;
-(float)progress;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithISUDownload:(id)arg1 ;
-(id)initWithSSDownload:(id)arg1 ;
@end

