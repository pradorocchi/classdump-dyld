/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDFill.h>

@class TSCH3DLightingModel, TSCH3DFillSetIdentifier, NSNumber, TSDFill;

@interface TSCH3DFill : TSDFill {

	TSCH3DLightingModel* mLightingModel;
	TSCH3DFillSetIdentifier* mIdentifier;
	NSNumber* mPercentage;
	TSDFill* mImageFill;
	CGSize mImageFillSize;

}

@property (readonly) TSCH3DLightingModel * lightingModel; 
@property (nonatomic,retain) TSCH3DFillSetIdentifier * identifier; 
@property (nonatomic,retain) NSNumber * percentage; 
@property (nonatomic,readonly) float percentageValue; 
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)fillWithSageFillData:(id)arg1 ;
+(id)lightingModelWithSageFillData:(id)arg1 ;
+(id)fillWithLightingModel:(id)arg1 identifier:(id)arg2 ;
+(id)fillWithIdentifier:(id)arg1 ;
+(id)fill;
-(void)setPercentage:(id)arg1 ;
-(id)percentage;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)lightingModel;
-(id)initWithLightingModel:(id)arg1 identifier:(id)arg2 ;
-(float)percentageValue;
-(void)nonatomicallySetLightingModel:(id)arg1 ;
-(void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1 ;
-(id)p_lazyLightingModel;
-(id)p_convertToTSDFillWithSize:(unsigned)arg1 technique:(int)arg2 context:(id)arg3 ;
-(id)p_convertToTSDFillWithSize:(unsigned)arg1 technique:(int)arg2 ;
-(id)p_imageFillForSize:(CGSize)arg1 ;
-(id)p_imageFillForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(id)p_iconFill;
-(id)lightenByPercent:(float)arg1 ;
-(BOOL)identifierReferencesUnavailableLocalBundle;
-(id)renderingLightingModelWithLightings:(id)arg1 ;
-(id)convertToSimpleTSDFillWithSize:(unsigned)arg1 ;
-(id)convertToSimpleTSDFillWithSize:(unsigned)arg1 context:(id)arg2 ;
-(id)sageFillData;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isOpaque;
-(id)identifier;
-(id).cxx_construct;
-(void)setIdentifier:(id)arg1 ;
-(int)fillType;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)referenceColor;
@end

