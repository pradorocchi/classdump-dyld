/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, TSDBezierPath, TSDBezierNode;

@interface TSDBezierSubpath : NSObject {

	NSMutableArray* mNodes;
	BOOL mClosed;

}

@property (nonatomic,retain) NSMutableArray * nodes; 
@property (assign,getter=isClosed,nonatomic) BOOL closed; 
@property (nonatomic,readonly) BOOL isRectangular; 
@property (nonatomic,readonly) TSDBezierPath * bezierPath; 
@property (nonatomic,readonly) TSDBezierNode * firstNode; 
@property (nonatomic,readonly) TSDBezierNode * lastNode; 
@property (nonatomic,readonly) BOOL allNodesSelected; 
@property (nonatomic,readonly) BOOL hasSelectedNode; 
@property (nonatomic,readonly) BOOL canDeleteSelectedNodes; 
@property (nonatomic,readonly) CGRect nodeBounds; 
@property (nonatomic,readonly) BOOL closeIfEndpointsAreEqual; 
-(float)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned*)arg2 tValue:(float*)arg3 threshold:(float)arg4 ;
-(void)updateReflectedState;
-(void)appendToBezierPath:(id)arg1 selectedNodesOnly:(BOOL)arg2 fromIndex:(unsigned)arg3 ;
-(id)nodePriorToNode:(id)arg1 ;
-(id)nodeAfterNode:(id)arg1 ;
-(id)lastNode;
-(void)removeLastNode;
-(id)splitEdgeAtIndex:(unsigned)arg1 ;
-(void)appendToBezierPath:(id)arg1 ;
-(void)reverseDirection;
-(void)offsetSelectedNodesByDelta:(CGPoint)arg1 ;
-(void)offsetSelectedEdgesByDelta:(CGPoint)arg1 ;
-(BOOL)allNodesSelected;
-(BOOL)hasSelectedNode;
-(BOOL)canDeleteSelectedNodes;
-(void)deleteSelectedNodes;
-(void)selectAllNodes;
-(void)deselectAllNodes;
-(id)bezierNodeUnderPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(float)arg3 returningType:(int*)arg4 ;
-(id)insertNodeAtPoint:(CGPoint)arg1 tolerance:(float)arg2 ;
-(CGRect)nodeBounds;
-(void)sharpenAllNodes;
-(void)smoothNode:(id)arg1 ;
-(BOOL)closeIfEndpointsAreEqual;
-(void)addNodesToArray:(id)arg1 ;
-(void)convertToHobby;
-(void)smoothAllNodes;
-(void)updateSmoothNodes;
-(void)morphWithMorphInfo:(id)arg1 ;
-(CGPoint)calculateNewControlFromOriginalDelta:(CGPoint)arg1 currentDelta:(CGPoint)arg2 originalSmoothDelta:(CGPoint)arg3 node:(CGPoint)arg4 ;
-(int)updateSmoothNodes:(id)arg1 from:(int)arg2 to:(int)arg3 closed:(BOOL)arg4 addTemporaryNodes:(BOOL)arg5 ;
-(void)updateSmoothNodes:(id)arg1 addTemporaryNodes:(BOOL)arg2 ;
-(void)removeTemporaryNodes;
-(void)addTemporarySmoothNodes;
-(void)setNodes:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)bezierPath;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)firstNode;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)isClosed;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
-(id)nodes;
-(void)addNode:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
@end

