/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/MLLibraryOperation.h>

@class NSUUID, NSDictionary, MLActiveTransaction;

@interface MLTemplatedDatabaseOperation : MLLibraryOperation {

	unsigned _type;
	NSUUID* _uuid;
	NSDictionary* _attributes;
	MLActiveTransaction* _transaction;

}

@property (nonatomic,readonly) unsigned type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                      //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) MLActiveTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)databaseOperationForType:(unsigned)arg1 withTransaction:(id)arg2 library:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)type;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(void)setTransaction:(id)arg1 ;
-(id)transaction;
-(id)initWithLibrary:(id)arg1 transaction:(id)arg2 ;
-(id)_operationTypeDescription;
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(id)uuid;
-(void).cxx_destruct;
@end

