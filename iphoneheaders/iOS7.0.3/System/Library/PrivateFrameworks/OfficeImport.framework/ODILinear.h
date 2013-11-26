/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODIState;

@interface ODILinear : NSObject {

	BOOL mIsHorizontal;
	BOOL mWithConnectors;
	BOOL mStretch;
	float mPointHeight;
	float mConnectorWidth;
	float mPadding;
	BOOL mIsTextCenteredHorizontally;
	BOOL mIsTextCenteredVertically;
	unsigned mMaxPointCount;
	ODIState* mState;

}
+(BOOL)mapIdentifier:(id)arg1 state:(id)arg2 ;
+(void)mapUnknownWithState:(id)arg1 ;
-(void)setPadding:(float)arg1 ;
-(void)setIsHorizontal:(BOOL)arg1 ;
-(void)map;
-(id)initWithState:(id)arg1 ;
-(void)setMaxPointCount:(unsigned)arg1 ;
-(void)setWithConnectors:(BOOL)arg1 ;
-(void)setPointHeight:(float)arg1 ;
-(void)setStretch:(BOOL)arg1 ;
-(void)setConnectorWidth:(float)arg1 ;
-(void)setIsTextCentered:(BOOL)arg1 ;
-(void)setIsTextCenteredHorizontally:(BOOL)arg1 ;
-(void)setIsTextCenteredVertically:(BOOL)arg1 ;
-(void)setLogicalBounds;
-(void)mapPoint:(id)arg1 bounds:(CGRect)arg2 ;
-(void)mapTransition:(id)arg1 pointBounds:(CGRect)arg2 ;
-(void)nextPointBounds:(CGRect*)arg1 ;
-(void)mapStyleFromPoint:(id)arg1 shape:(id)arg2 ;
-(void)mapStyleFromTransition:(id)arg1 shape:(id)arg2 ;
@end

