/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface GEOVLabelLanguage : PBCodable {

	unsigned _endOffset;
	NSString* _languageLocale;
	unsigned _startOffset;

}

@property (assign,nonatomic) unsigned startOffset;                   //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) unsigned endOffset;                     //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,retain) NSString * languageLocale;              //@synthesize languageLocale=_languageLocale - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)endOffset;
-(unsigned)startOffset;
-(id)dictionaryRepresentation;
-(void)setStartOffset:(unsigned)arg1 ;
-(void)setEndOffset:(unsigned)arg1 ;
-(void)setLanguageLocale:(id)arg1 ;
-(id)languageLocale;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

