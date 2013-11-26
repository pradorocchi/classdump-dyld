/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface VKPTrafficStyle : PBCodable {

	float _fadingOffset;
	float _fadingSlope;
	unsigned _fillColor;
	float _patternLength;
	float _patternSlotLength;
	float _patternWidth;
	unsigned _secondaryColor;
	int _uNUSEDPattern;
	float _widthFraction;
	SCD_Struct_VK180 _has;

}

@property (assign,nonatomic) BOOL hasWidthFraction; 
@property (assign,nonatomic) float widthFraction;                    //@synthesize widthFraction=_widthFraction - In the implementation block
@property (assign,nonatomic) BOOL hasFillColor; 
@property (assign,nonatomic) unsigned fillColor;                     //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) BOOL hasUNUSEDPattern; 
@property (assign,nonatomic) int uNUSEDPattern;                      //@synthesize uNUSEDPattern=_uNUSEDPattern - In the implementation block
@property (assign,nonatomic) BOOL hasPatternSlotLength; 
@property (assign,nonatomic) float patternSlotLength;                //@synthesize patternSlotLength=_patternSlotLength - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryColor; 
@property (assign,nonatomic) unsigned secondaryColor;                //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (assign,nonatomic) BOOL hasPatternLength; 
@property (assign,nonatomic) float patternLength;                    //@synthesize patternLength=_patternLength - In the implementation block
@property (assign,nonatomic) BOOL hasPatternWidth; 
@property (assign,nonatomic) float patternWidth;                     //@synthesize patternWidth=_patternWidth - In the implementation block
@property (assign,nonatomic) BOOL hasFadingOffset; 
@property (assign,nonatomic) float fadingOffset;                     //@synthesize fadingOffset=_fadingOffset - In the implementation block
@property (assign,nonatomic) BOOL hasFadingSlope; 
@property (assign,nonatomic) float fadingSlope;                      //@synthesize fadingSlope=_fadingSlope - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setFillColor:(unsigned)arg1 ;
-(unsigned)fillColor;
-(id)dictionaryRepresentation;
-(void)setSecondaryColor:(unsigned)arg1 ;
-(unsigned)secondaryColor;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasFillColor;
-(void)setHasFillColor:(BOOL)arg1 ;
-(BOOL)hasWidthFraction;
-(float)widthFraction;
-(void)setWidthFraction:(float)arg1 ;
-(BOOL)hasUNUSEDPattern;
-(int)uNUSEDPattern;
-(void)setUNUSEDPattern:(int)arg1 ;
-(BOOL)hasPatternSlotLength;
-(float)patternSlotLength;
-(void)setPatternSlotLength:(float)arg1 ;
-(BOOL)hasSecondaryColor;
-(BOOL)hasPatternLength;
-(float)patternLength;
-(void)setPatternLength:(float)arg1 ;
-(BOOL)hasPatternWidth;
-(float)patternWidth;
-(void)setPatternWidth:(float)arg1 ;
-(BOOL)hasFadingOffset;
-(float)fadingOffset;
-(void)setFadingOffset:(float)arg1 ;
-(BOOL)hasFadingSlope;
-(float)fadingSlope;
-(void)setFadingSlope:(float)arg1 ;
-(void)setHasWidthFraction:(BOOL)arg1 ;
-(void)setHasUNUSEDPattern:(BOOL)arg1 ;
-(void)setHasPatternSlotLength:(BOOL)arg1 ;
-(void)setHasSecondaryColor:(BOOL)arg1 ;
-(void)setHasPatternLength:(BOOL)arg1 ;
-(void)setHasPatternWidth:(BOOL)arg1 ;
-(void)setHasFadingOffset:(BOOL)arg1 ;
-(void)setHasFadingSlope:(BOOL)arg1 ;
@end

