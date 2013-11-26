/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/ASTask.h>

@class NSString, ASFolder;

@interface ASFolderLocalUpdateTask : ASTask {

	NSString* _previousSyncKey;
	ASFolder* _folder;
	int _commandCode;
	int _requestType;
	/*^block*/ id _completionBlock;
	int _dataclasses;

}

@property (assign,nonatomic) int dataclasses;              //@synthesize dataclasses=_dataclasses - In the implementation block
+(id)taskWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1 ;
-(int)dataclasses;
-(void)setDataclasses:(int)arg1 ;
@end

