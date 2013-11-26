/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKImporter.h>

@class NSURL, TSUProgressContext;

@interface TPTextImporter : NSObject <TSKImporter> {

	NSURL* mURL;
	TSUProgressContext* mProgressContext;

}

@property (retain) TSUProgressContext * progressContext; 
-(BOOL)importToDocumentRoot:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)initialTemplateName;
-(BOOL)stylesheetUpdatesRequired;
-(BOOL)importStartsWithThemeOnly;
-(void)dealloc;
-(void)cancel;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)quit;
-(id)progressContext;
-(void)setProgressContext:(id)arg1 ;
@end

