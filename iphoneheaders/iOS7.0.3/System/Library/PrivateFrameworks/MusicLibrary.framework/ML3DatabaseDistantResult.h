/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/ML3DatabaseResult.h>

@class NSArray, ML3DatabaseDistantConnection, NSString;

@interface ML3DatabaseDistantResult : ML3DatabaseResult {

	NSArray* _cachedRows;
	ML3DatabaseDistantConnection* _distantConnection;
	NSString* _sql;
	NSArray* _parameters;

}

@property (nonatomic,readonly) ML3DatabaseDistantConnection * distantConnection;              //@synthesize distantConnection=_distantConnection - In the implementation block
@property (nonatomic,readonly) NSString * sql;                                                //@synthesize sql=_sql - In the implementation block
@property (nonatomic,readonly) NSArray * parameters;                                          //@synthesize parameters=_parameters - In the implementation block
-(id)init;
-(id)description;
-(void)enumerateRowsWithBlock:(/*^block*/ id)arg1 ;
-(id)sql;
-(id)parameters;
-(unsigned)indexForColumnName:(id)arg1 ;
-(id)columnNameIndexMap;
-(id)initWithStatement:(id)arg1 ;
-(id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3 ;
-(void)_remoteEnumerateRowsWithBlock:(/*^block*/ id)arg1 ;
-(void)_localEnumerateRowsWithBlock:(/*^block*/ id)arg1 ;
-(BOOL)_fetchRowsIfEmpty;
-(id)distantConnection;
-(void).cxx_destruct;
@end

