/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CMOutlineState : NSObject {

	int counter[10];
	int listId;

}
-(id)init;
-(void)reset;
-(int)counterAtLevel:(int)arg1 ;
-(id)initWithListId:(int)arg1 ;
-(void)setCounterTo:(int)arg1 atLevel:(int)arg2 ;
-(void)increaseCounterAtLevel:(int)arg1 ;
-(int)listId;
@end

