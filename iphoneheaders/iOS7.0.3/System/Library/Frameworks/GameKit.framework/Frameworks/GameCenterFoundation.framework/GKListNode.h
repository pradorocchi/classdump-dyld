/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GKListNode : NSObject {

	GKListNode* _nextNode;
	GKListNode* _prevNode;
	id _value;

}

@property (assign,nonatomic) GKListNode * nextNode;              //@synthesize nextNode=_nextNode - In the implementation block
@property (assign,nonatomic) GKListNode * prevNode;              //@synthesize prevNode=_prevNode - In the implementation block
@property (nonatomic,retain) id value;                           //@synthesize value=_value - In the implementation block
-(id)initWithValue:(id)arg1 ;
-(void)setNextNode:(id)arg1 ;
-(id)prevNode;
-(void)setPrevNode:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setValue:(id)arg1 ;
-(id)value;
-(id)nextNode;
@end

