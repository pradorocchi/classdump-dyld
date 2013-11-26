/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSCountedSet;

@interface NSFilePresenterRelinquishment : NSObject {

	NSCountedSet* _blockingAccessClaimIDs;
	/*^block*/ id _reacquirer;

}
-(BOOL)addBlockingAccessClaimID:(id)arg1 ;
-(void)setReacquirer:(/*^block*/ id)arg1 ;
-(void)removeBlockingAccessClaimID:(id)arg1 ;
-(void)removeAllBlockingAccessClaimIDs;
-(void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(/*^block*/ id)arg2 ;
-(void)dealloc;
@end

