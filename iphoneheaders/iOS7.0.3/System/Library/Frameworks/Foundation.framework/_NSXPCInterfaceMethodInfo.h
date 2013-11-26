/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface _NSXPCInterfaceMethodInfo : NSObject {

	char* _replySignature;
	int _replyPosition;
	NSMutableArray* _replyArguments;
	NSMutableArray* _arguments;

}

@property (assign) int replyPosition;                            //@synthesize replyPosition=_replyPosition - In the implementation block
@property (retain) NSMutableArray * replyArguments;              //@synthesize replyArguments=_replyArguments - In the implementation block
@property (retain) NSMutableArray * arguments;                   //@synthesize arguments=_arguments - In the implementation block
-(void)setArguments:(id)arg1 ;
-(void)setReplySignature:(id)arg1 ;
-(const char*)replySignature;
-(id)replyArguments;
-(void)setReplyArguments:(id)arg1 ;
-(int)replyPosition;
-(void)setReplyPosition:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)arguments;
-(void)finalize;
@end

