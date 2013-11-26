/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, CRMeta;

@interface CRCellWifiCollectionRequest : PBRequest {

	NSMutableArray* _cdmaCellTowerLocations;
	NSMutableArray* _cellTowerLocations;
	NSMutableArray* _lteCellTowerLocations;
	CRMeta* _meta;
	NSMutableArray* _scdmaCellTowerLocations;
	NSMutableArray* _wifiAPLocations;

}

@property (nonatomic,retain) CRMeta * meta;                                         //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * cellTowerLocations;                   //@synthesize cellTowerLocations=_cellTowerLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * cdmaCellTowerLocations;               //@synthesize cdmaCellTowerLocations=_cdmaCellTowerLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * lteCellTowerLocations;                //@synthesize lteCellTowerLocations=_lteCellTowerLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * wifiAPLocations;                      //@synthesize wifiAPLocations=_wifiAPLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * scdmaCellTowerLocations;              //@synthesize scdmaCellTowerLocations=_scdmaCellTowerLocations - In the implementation block
-(void)setMeta:(id)arg1 ;
-(void)setCellTowerLocations:(id)arg1 ;
-(void)setCdmaCellTowerLocations:(id)arg1 ;
-(void)setLteCellTowerLocations:(id)arg1 ;
-(void)setWifiAPLocations:(id)arg1 ;
-(void)setScdmaCellTowerLocations:(id)arg1 ;
-(void)addCellTowerLocation:(id)arg1 ;
-(void)addWifiAPLocation:(id)arg1 ;
-(void)addCdmaCellTowerLocation:(id)arg1 ;
-(void)addLteCellTowerLocation:(id)arg1 ;
-(void)addScdmaCellTowerLocation:(id)arg1 ;
-(id)meta;
-(unsigned)cellTowerLocationsCount;
-(void)clearCellTowerLocations;
-(id)cellTowerLocationAtIndex:(unsigned)arg1 ;
-(unsigned)wifiAPLocationsCount;
-(void)clearWifiAPLocations;
-(id)wifiAPLocationAtIndex:(unsigned)arg1 ;
-(unsigned)cdmaCellTowerLocationsCount;
-(void)clearCdmaCellTowerLocations;
-(id)cdmaCellTowerLocationAtIndex:(unsigned)arg1 ;
-(unsigned)lteCellTowerLocationsCount;
-(void)clearLteCellTowerLocations;
-(id)lteCellTowerLocationAtIndex:(unsigned)arg1 ;
-(unsigned)scdmaCellTowerLocationsCount;
-(void)clearScdmaCellTowerLocations;
-(id)scdmaCellTowerLocationAtIndex:(unsigned)arg1 ;
-(id)cellTowerLocations;
-(id)cdmaCellTowerLocations;
-(id)lteCellTowerLocations;
-(id)wifiAPLocations;
-(id)scdmaCellTowerLocations;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

