/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MSASComment;

@interface MSASCommentChange : NSObject {

	MSASComment* _comment;
	int _deletionIndex;
	int _type;

}

@property (nonatomic,retain) MSASComment * comment;              //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) int deletionIndex;                  //@synthesize deletionIndex=_deletionIndex - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
-(void)setComment:(id)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)deletionIndex;
-(void)setDeletionIndex:(int)arg1 ;
-(id)comment;
-(void).cxx_destruct;
@end

