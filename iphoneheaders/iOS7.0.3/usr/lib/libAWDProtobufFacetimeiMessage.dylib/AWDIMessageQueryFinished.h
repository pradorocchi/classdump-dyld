/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufFacetimeiMessage.dylib/libAWDProtobufFacetimeiMessage.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDIMessageQueryFinished : PBCodable {

	unsigned long long _timestamp;
	unsigned _connectionType;
	int _genericError;
	NSString* _guid;
	unsigned _isEmail;
	unsigned _isPhoneNumber;
	int _pOSIXError;
	unsigned _queryDuration;
	int _resultCode;
	unsigned _success;
	int _uRLError;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) unsigned success;                          //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                   //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasQueryDuration; 
@property (assign,nonatomic) unsigned queryDuration;                    //@synthesize queryDuration=_queryDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsPhoneNumber; 
@property (assign,nonatomic) unsigned isPhoneNumber;                    //@synthesize isPhoneNumber=_isPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsEmail; 
@property (assign,nonatomic) unsigned isEmail;                          //@synthesize isEmail=_isEmail - In the implementation block
@property (assign,nonatomic) BOOL hasResultCode; 
@property (assign,nonatomic) int resultCode;                            //@synthesize resultCode=_resultCode - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                          //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasURLError; 
@property (assign,nonatomic) int uRLError;                              //@synthesize uRLError=_uRLError - In the implementation block
@property (assign,nonatomic) BOOL hasPOSIXError; 
@property (assign,nonatomic) int pOSIXError;                            //@synthesize pOSIXError=_pOSIXError - In the implementation block
-(unsigned)success;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(id)guid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSuccess:(unsigned)arg1 ;
-(void)setGuid:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasGenericError;
-(int)genericError;
-(void)setGenericError:(int)arg1 ;
-(void)setHasGenericError:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(BOOL)hasQueryDuration;
-(unsigned)queryDuration;
-(void)setQueryDuration:(unsigned)arg1 ;
-(BOOL)hasIsPhoneNumber;
-(unsigned)isPhoneNumber;
-(void)setIsPhoneNumber:(unsigned)arg1 ;
-(BOOL)hasIsEmail;
-(unsigned)isEmail;
-(void)setIsEmail:(unsigned)arg1 ;
-(BOOL)hasResultCode;
-(int)resultCode;
-(void)setResultCode:(int)arg1 ;
-(BOOL)hasURLError;
-(int)uRLError;
-(void)setURLError:(int)arg1 ;
-(BOOL)hasPOSIXError;
-(int)pOSIXError;
-(void)setPOSIXError:(int)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(void)setHasQueryDuration:(BOOL)arg1 ;
-(void)setHasIsPhoneNumber:(BOOL)arg1 ;
-(void)setHasIsEmail:(BOOL)arg1 ;
-(void)setHasResultCode:(BOOL)arg1 ;
-(void)setHasURLError:(BOOL)arg1 ;
-(void)setHasPOSIXError:(BOOL)arg1 ;
@end

