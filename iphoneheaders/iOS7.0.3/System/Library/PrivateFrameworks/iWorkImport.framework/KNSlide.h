/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAbstractSlide.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSSThemedObject.h>
#import <iWorkImport/TSKTransformableObject.h>

@class KNMasterSlide, NSArray, KNNoteInfo, TSDDrawableInfo, TSUPointerKeyDictionary, TSUMutablePointerSet;

@interface KNSlide : KNAbstractSlide <TSKModel, TSSThemedObject, TSKTransformableObject> {

	KNMasterSlide* mMaster;
	NSArray* mBuilds;
	NSArray* mBuildChunks;
	NSArray* mDeliveryGroups;
	KNNoteInfo* mNote;
	TSDDrawableInfo* mInfoUsingObjectPlaceholderGeometry;
	BOOL mInfoUsingObjectPlaceholderGeometryMatchesObjectPlaceholderGeometry;
	TSUPointerKeyDictionary* mDrawableToGhostInfosMap;
	TSUMutablePointerSet* mDrawablesWithInvalidGhosts;
	TSUPointerKeyDictionary* _i_drawableToGhostInfosMap;
	TSUMutablePointerSet* _i_drawablesWithInvalidatedGhosts;

}

@property (nonatomic,retain) KNMasterSlide * master; 
@property (nonatomic,copy) NSArray * builds; 
@property (nonatomic,readonly) NSArray * buildsOrderedByFirstChunk; 
@property (nonatomic,copy) NSArray * buildChunks; 
@property (nonatomic,readonly) NSArray * activeBuildChunks; 
@property (nonatomic,readonly) NSArray * deliveryGroups; 
@property (nonatomic,retain) KNNoteInfo * note; 
@property (nonatomic,retain) TSDDrawableInfo * infoUsingObjectPlaceholderGeometry; 
@property (assign,nonatomic) BOOL infoUsingObjectPlaceholderGeometryMatchesObjectPlaceholderGeometry; 
@property (nonatomic,readonly) TSUPointerKeyDictionary * i_drawableToGhostInfosMap;                                //@synthesize i_drawableToGhostInfosMap=_i_drawableToGhostInfosMap - In the implementation block
@property (nonatomic,readonly) TSUMutablePointerSet * i_drawablesWithInvalidatedGhosts;                            //@synthesize i_drawablesWithInvalidatedGhosts=_i_drawablesWithInvalidatedGhosts - In the implementation block
+(id)blankSlideWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(BOOL)isComponentRoot;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(SlideArchive*)arg1 archiver:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
-(void)loadFromArchive:(const SlideArchive*)arg1 unarchiver:(id)arg2 ;
-(id)childCommandForApplyThemeCommand:(id)arg1 ;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)infosToDisplay;
-(void)updateSlideSpecificLinkCountsWithOldHyperlink:(id)arg1 newHyperlink:(id)arg2 ;
-(void)insertDrawables:(id)arg1 atIndex:(unsigned)arg2 dolcContext:(id)arg3 ;
-(id)defaultTitlePlaceholderWithContext:(id)arg1 ;
-(id)defaultBodyPlaceholderWithContext:(id)arg1 ;
-(id)defaultSlideNumberPlaceholderWithContext:(id)arg1 ;
-(void)removeDrawable:(id)arg1 ;
-(id)builds;
-(id)buildChunks;
-(void)invalidateDeliveryGroupCache;
-(unsigned)deliveryGroupIndexForBuildChunk:(id)arg1 ;
-(id)activeBuildChunks;
-(void)removeInvalidBuildsOnDrawable:(id)arg1 usingParentCommand:(id)arg2 ;
-(id)infoCorrespondingToMasterInfo:(id)arg1 ;
-(id)initWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3 ;
-(void)setToMaster:(id)arg1 ;
-(id)buildsForDrawable:(id)arg1 type:(int)arg2 orderedByFirstChunk:(BOOL)arg3 ;
-(void)p_buildOrderingDidChangeWithBuild:(id)arg1 ;
-(void)p_buildChunkOrderingDidChangeWithChunk:(id)arg1 ;
-(void)p_assertChunksInSequenceForBuild:(id)arg1 ;
-(id)chunksForBuild:(id)arg1 ;
-(id)chunksForDrawable:(id)arg1 animationType:(int)arg2 ;
-(id)p_complementForBuild:(id)arg1 ;
-(NSRange)p_rangeForChunksInBuild:(id)arg1 ;
-(BOOL)p_isValidToMoveChunk:(id)arg1 toIndex:(unsigned)arg2 ;
-(BOOL)hasComplementForBuildChunk:(id)arg1 inBuildChunks:(id)arg2 ;
-(void)p_splitBuildChunksIntoDeliveryGroups;
-(id)deliveryGroups;
-(BOOL)p_canMoveBuildChunks:(id)arg1 toIndex:(unsigned)arg2 ;
-(BOOL)p_canMoveDeliveryGroupBuildChunksFromIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(int)canMoveBuildChunk:(id)arg1 toIndex:(unsigned)arg2 ;
-(BOOL)p_urlIsSlideSpecific:(id)arg1 ;
-(id)infoUsingObjectPlaceholderGeometry;
-(void)setInfoUsingObjectPlaceholderGeometry:(id)arg1 ;
-(BOOL)infoUsingObjectPlaceholderGeometryMatchesObjectPlaceholderGeometry;
-(void)setInfoUsingObjectPlaceholderGeometryMatchesObjectPlaceholderGeometry:(BOOL)arg1 ;
-(void)setToMasterUsingBlob:(id)arg1 ;
-(void)setBuilds:(id)arg1 ;
-(id)buildsOrderedByFirstChunk;
-(id)buildsForDrawable:(id)arg1 orderedByFirstChunk:(BOOL)arg2 ;
-(id)inBuildForDrawable:(id)arg1 ;
-(id)outBuildForDrawable:(id)arg1 ;
-(void)insertBuild:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeBuild:(id)arg1 ;
-(id)p_invalidBuildsOnDrawable:(id)arg1 ;
-(void)setBuildChunks:(id)arg1 ;
-(void)insertBuildChunk:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeBuildChunk:(id)arg1 ;
-(id)chunksForDrawable:(id)arg1 ;
-(BOOL)hasComplementForBuildChunk:(id)arg1 ;
-(id)deliveryGroupIndexesForBuilds:(id)arg1 ;
-(int)p_indexOfChunk:(id)arg1 inDeliveryGroup:(unsigned)arg2 ;
-(BOOL)canMoveDeliveryGroupFromIndex:(unsigned)arg1 toIndex:(unsigned)arg2 ;
-(BOOL)canMoveBuildChunk:(id)arg1 toIndex:(unsigned)arg2 inDeliveryGroup:(unsigned)arg3 ;
-(BOOL)isNoteSelectionModel:(id)arg1 ;
-(id)i_drawableToGhostInfosMap;
-(id)i_drawablesWithInvalidatedGhosts;
-(void)p_updateNumberOfBuildChunksImmediatelyWithoutUndoHistory;
-(void)p_updateOverlappingBuildEventTriggers;
-(void)p_updateBuildEffects;
-(id)note;
-(void)setNote:(id)arg1 ;
-(void)dealloc;
-(void)setMaster:(id)arg1 ;
-(id)master;
@end

