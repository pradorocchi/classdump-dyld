/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface GEOVPointOnRoad : PBCodable {

	int _featureIndex;
	int _vertexIndex;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) int featureIndex;                 //@synthesize featureIndex=_featureIndex - In the implementation block
@property (assign,nonatomic) BOOL hasVertexIndex; 
@property (assign,nonatomic) int vertexIndex;                  //@synthesize vertexIndex=_vertexIndex - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasVertexIndex;
-(int)vertexIndex;
-(void)setVertexIndex:(int)arg1 ;
-(void)setHasVertexIndex:(BOOL)arg1 ;
-(void)setFeatureIndex:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)featureIndex;
@end

