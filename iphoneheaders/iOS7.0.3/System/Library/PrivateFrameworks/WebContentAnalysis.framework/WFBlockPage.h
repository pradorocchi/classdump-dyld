/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSURL, NSString;

@interface WFBlockPage : NSObject {

	NSURL* pageTemplateURL;
	NSString* userVisibleURLString;
	NSString* formActionURLString;
	NSString* preferredLanguage;

}

@property (readonly) NSURL * pageTemplateURL; 
@property (retain) NSString * userVisibleURLString; 
@property (retain) NSString * formActionURLString; 
-(void)dealloc;
-(id)page;
-(id)_initWithUsername:(id)arg1 fileName:(id)arg2 ;
-(id)_fileContentWithName:(id)arg1 extension:(id)arg2 ;
-(id)_blockpage;
-(id)_css;
-(id)initNoOveridePageWithUsername:(id)arg1 ;
-(id)initWithUsername:(id)arg1 overridesAllowded:(BOOL)arg2 ;
-(id)pageTemplateURL;
-(void)setUserVisibleURLString:(id)arg1 ;
-(id)formActionURLString;
-(void)setFormActionURLString:(id)arg1 ;
-(id)userVisibleURLString;
@end

