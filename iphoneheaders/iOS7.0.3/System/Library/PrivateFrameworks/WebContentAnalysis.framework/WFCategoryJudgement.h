/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface WFCategoryJudgement : NSObject {

	float score;
	long category;

}
+(id)categoryJudgementWithCategory:(long)arg1 score:(float)arg2 ;
-(float)score;
-(id)description;
-(void)setCategory:(long)arg1 ;
-(long)category;
-(void)setScore:(float)arg1 ;
-(int)compareByCategory:(id)arg1 ;
-(int)compareByScore:(id)arg1 ;
@end

