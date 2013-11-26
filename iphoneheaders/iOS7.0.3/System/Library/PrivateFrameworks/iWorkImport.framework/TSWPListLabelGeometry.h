/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPListLabelGeometry : NSObject {

	float mScale;
	float mBaselineOffset;
	BOOL mScaleWithText;

}

@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) float baselineOffset; 
@property (assign,nonatomic) BOOL scaleWithText; 
+(id)listLabelGeometry;
-(BOOL)scaleWithText;
-(id)initWithScale:(float)arg1 scaleWithText:(BOOL)arg2 baselineOffset:(float)arg3 ;
-(void)setScaleWithText:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(float)scale;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setScale:(float)arg1 ;
-(float)baselineOffset;
-(void)setBaselineOffset:(float)arg1 ;
@end

