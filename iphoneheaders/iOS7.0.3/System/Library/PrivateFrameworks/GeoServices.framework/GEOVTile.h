/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, GEOVConnectivity, NSData;

@interface GEOVTile : PBCodable {

	NSMutableArray* _coastlines;
	GEOVConnectivity* _connectivity;
	NSMutableArray* _labelLanguages;
	NSData* _labels;
	NSMutableArray* _lines;
	int _minZ;
	NSMutableArray* _points;
	NSMutableArray* _polygons;
	unsigned _sectionDeltaLengthBits;
	unsigned _vertexBits;
	NSData* _vertices;
	int _zBits;
	SCD_Struct_GE47 _has;

}

@property (nonatomic,retain) NSMutableArray * lines;                       //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * polygons;                    //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,retain) NSMutableArray * points;                      //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) BOOL hasLabels; 
@property (nonatomic,retain) NSData * labels;                              //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) BOOL hasVertices; 
@property (nonatomic,retain) NSData * vertices;                            //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectivity; 
@property (nonatomic,retain) GEOVConnectivity * connectivity;              //@synthesize connectivity=_connectivity - In the implementation block
@property (assign,nonatomic) BOOL hasMinZ; 
@property (assign,nonatomic) int minZ;                                     //@synthesize minZ=_minZ - In the implementation block
@property (assign,nonatomic) BOOL hasZBits; 
@property (assign,nonatomic) int zBits;                                    //@synthesize zBits=_zBits - In the implementation block
@property (nonatomic,retain) NSMutableArray * coastlines;                  //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,retain) NSMutableArray * labelLanguages;              //@synthesize labelLanguages=_labelLanguages - In the implementation block
@property (assign,nonatomic) BOOL hasVertexBits; 
@property (assign,nonatomic) unsigned vertexBits;                          //@synthesize vertexBits=_vertexBits - In the implementation block
@property (assign,nonatomic) BOOL hasSectionDeltaLengthBits; 
@property (assign,nonatomic) unsigned sectionDeltaLengthBits;              //@synthesize sectionDeltaLengthBits=_sectionDeltaLengthBits - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addPoint:(id)arg1 ;
-(void)setVertices:(id)arg1 ;
-(BOOL)hasVertices;
-(void)setLines:(id)arg1 ;
-(void)setPolygons:(id)arg1 ;
-(void)setPoints:(id)arg1 ;
-(void)setLabels:(id)arg1 ;
-(void)setConnectivity:(id)arg1 ;
-(void)setCoastlines:(id)arg1 ;
-(void)setLabelLanguages:(id)arg1 ;
-(void)addPolygon:(id)arg1 ;
-(void)addCoastlines:(id)arg1 ;
-(void)addLabelLanguage:(id)arg1 ;
-(void)clearLines;
-(id)lineAtIndex:(unsigned)arg1 ;
-(void)clearPolygons;
-(id)polygonAtIndex:(unsigned)arg1 ;
-(unsigned)pointsCount;
-(void)clearPoints;
-(id)pointAtIndex:(unsigned)arg1 ;
-(BOOL)hasLabels;
-(BOOL)hasConnectivity;
-(id)connectivity;
-(BOOL)hasMinZ;
-(BOOL)hasZBits;
-(int)zBits;
-(void)setZBits:(int)arg1 ;
-(void)clearCoastlines;
-(id)coastlinesAtIndex:(unsigned)arg1 ;
-(unsigned)labelLanguagesCount;
-(void)clearLabelLanguages;
-(id)labelLanguageAtIndex:(unsigned)arg1 ;
-(BOOL)hasVertexBits;
-(unsigned)vertexBits;
-(void)setVertexBits:(unsigned)arg1 ;
-(BOOL)hasSectionDeltaLengthBits;
-(unsigned)sectionDeltaLengthBits;
-(void)setSectionDeltaLengthBits:(unsigned)arg1 ;
-(void)setHasMinZ:(BOOL)arg1 ;
-(void)setHasZBits:(BOOL)arg1 ;
-(void)setHasVertexBits:(BOOL)arg1 ;
-(void)setHasSectionDeltaLengthBits:(BOOL)arg1 ;
-(id)labelLanguages;
-(id)points;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)minZ;
-(void)setMinZ:(int)arg1 ;
-(id)lines;
-(unsigned)linesCount;
-(unsigned)coastlinesCount;
-(id)coastlines;
-(unsigned)polygonsCount;
-(id)polygons;
-(id)vertices;
-(void)addLine:(id)arg1 ;
-(id)labels;
@end

