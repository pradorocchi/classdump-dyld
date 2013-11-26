/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SYDSchedulingParameters;

@interface SYDGlobalScheduling : NSObject {

	SYDSchedulingParameters* parameters;
	unsigned entriesSize;
	double* entries;

}

@property (nonatomic,retain) SYDSchedulingParameters * parameters; 
-(id)persistentState;
-(id)schedulingDescription;
-(id)initWithPersistentState:(id)arg1 ;
-(void)markSuccessfulSyncUsingNow:(double)arg1 ;
-(double)nextAllowedRefreshDateUsingNow:(double)arg1 ;
-(void)resetUpdateRequests;
-(void)_resizeEntriesWithUpdatedParametersIfNecessary;
-(void)_markEntriesAsIncorrect;
-(void)dealloc;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
@end

