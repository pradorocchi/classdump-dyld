/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSWPLayoutTarget;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPColumn, TSDLayout, NSMutableArray, TSDWrapPolygon, TSUPointerKeyDictionary, NSArray;

@interface TPTextWrapCookie : NSObject {

	TSWPColumn* _column;
	TSDLayout<TSWPLayoutTarget>* _target;
	NSMutableArray* _floatingWrappables;
	TSDWrapPolygon* _interiorWrapPolygon;
	CGAffineTransform _targetInverseTransformInRoot;
	TSUPointerKeyDictionary* _wrapPathInverseTransformInRootDictionary;

}

@property (nonatomic,retain) TSWPColumn * column;                                           //@synthesize column=_column - In the implementation block
@property (assign,nonatomic,@dynamic) TSDLayout<TSWPLayoutTarget> * target; 
@property (nonatomic,readonly) NSArray * floatingWrappables;                                //@synthesize floatingWrappables=_floatingWrappables - In the implementation block
@property (nonatomic,retain) TSDWrapPolygon * interiorWrapPolygon;                          //@synthesize interiorWrapPolygon=_interiorWrapPolygon - In the implementation block
@property (nonatomic,readonly) CGAffineTransform targetInverseTransformInRoot;              //@synthesize targetInverseTransformInRoot=_targetInverseTransformInRoot - In the implementation block
+(id)textWrapCookieForColumn:(id)arg1 targetLayout:(id)arg2 ;
-(id)interiorWrapPolygon;
-(id)initWithColumn:(id)arg1 targetLayout:(id)arg2 ;
-(void)addFloatingWrappable:(id)arg1 ;
-(id)floatingWrappables;
-(CGAffineTransform)targetInverseTransformInRoot;
-(id)transformedWrapPolygonForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(CGAffineTransform)arg2 ;
-(void)setInteriorWrapPolygon:(id)arg1 ;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)column;
-(void)setColumn:(id)arg1 ;
@end

