/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {

	NSString* _previousETag;

}

@property (assign,nonatomic,@dynamic) <CoreDAVMoveTaskDelegate> * delegate; 
@property (retain) NSString * previousETag;                                              //@synthesize previousETag=_previousETag - In the implementation block
-(void)dealloc;
-(id)description;
-(id)previousETag;
-(id)additionalHeaderValues;
-(void)setPreviousETag:(id)arg1 ;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
-(id)httpMethod;
@end

