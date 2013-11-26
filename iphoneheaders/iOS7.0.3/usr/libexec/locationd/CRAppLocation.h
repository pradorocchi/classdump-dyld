/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, CRLocation;

@interface CRAppLocation : PBCodable {

	double _age;
	NSString* _appBundleId;
	int _appState;
	CRLocation* _location;
	int _serverHash;
	SCD_Struct_CR3 _has;

}

@property (nonatomic,retain) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) int appState;                        //@synthesize appState=_appState - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) double age;                          //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) CRLocation * location;               //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                      //@synthesize serverHash=_serverHash - In the implementation block
-(void)setAppState:(int)arg1 ;
-(int)appState;
-(BOOL)hasAge;
-(BOOL)hasServerHash;
-(int)serverHash;
-(void)setServerHash:(int)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)location;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(double)age;
-(void)setAge:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(void)setAppBundleId:(id)arg1 ;
-(id)appBundleId;
@end

