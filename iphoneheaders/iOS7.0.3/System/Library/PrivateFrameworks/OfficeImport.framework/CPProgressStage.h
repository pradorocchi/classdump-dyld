/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, CPProgressContext;

@interface CPProgressStage : NSObject {

	double m_currentPosition;
	double m_totalSteps;
	double m_stepsInParent;
	NSString* m_name;
	CPProgressStage* m_parentStage;
	CPProgressContext* m_context;

}
-(void)dealloc;
-(void)setProgress:(double)arg1 ;
-(void)end;
-(id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4 ;
-(id)parentStage;
-(id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4 ;
-(void)advanceProgress:(double)arg1 ;
-(double)currentPosition;
-(id)initRootStageInContext:(id)arg1 ;
@end

