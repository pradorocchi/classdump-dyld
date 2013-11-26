/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKCommand.h>

@class KNSlideNode, KNBuild;

@interface KNCommandSlideInsertBuild : TSKCommand {

	KNSlideNode* mSlideNode;
	KNBuild* mBuild;
	unsigned mIndex;
	BOOL mShouldCreateChunks;

}

@property (nonatomic,readonly) KNSlideNode * slideNode; 
@property (nonatomic,readonly) KNBuild * build; 
@property (nonatomic,readonly) unsigned index; 
-(void)p_do;
-(id)slideNode;
-(id)initWithSlideNode:(id)arg1 build:(id)arg2 atIndex:(unsigned)arg3 createChunks:(BOOL)arg4 ;
-(void)p_insertBuildChunks:(id)arg1 ;
-(unsigned)p_indexForInsertingChunks;
-(id)p_buildAtPriorIndex;
-(id)initWithSlideNode:(id)arg1 build:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(unsigned)index;
-(id)build;
-(BOOL)process;
@end

