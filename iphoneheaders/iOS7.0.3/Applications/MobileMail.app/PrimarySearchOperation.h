/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/SearchOperation.h>

@class MFMessageCriterion;

@interface PrimarySearchOperation : SearchOperation {

	MFMessageCriterion* _sourcesCriterion;

}
+(id)primarySearchForManager:(id)arg1 withCriterion:(id)arg2 withSources:(id)arg3 inLibrary:(id)arg4 ;
-(id)_baseCriterionFromSources:(id)arg1 ;
-(id)initForManager:(id)arg1 withCriterion:(id)arg2 withSources:(id)arg3 inLibrary:(id)arg4 ;
-(void)performLocalSearch;
-(void)performRemoteSearchesAfterDelay:(double)arg1 ;
-(id)_remoteSearchableSourcesByAccount;
-(void)_performRemoteSearchesWithSources:(id)arg1 accountID:(id)arg2 ;
-(void)dealloc;
-(void)main;
@end

