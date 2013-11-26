/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, PFUbiquityLocation, NSPersistentStore, NSSQLiteConnection;

@interface PFUbiquityStoreMetadataMedic : NSObject {

	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	NSPersistentStore* _store;
	NSSQLiteConnection* _connection;

}

@property (nonatomic,readonly) NSString * localPeerID;                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;              //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                   //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSSQLiteConnection * connection;                        //@synthesize connection=_connection - In the implementation block
-(id)store;
-(id)localPeerID;
-(id)ubiquityRootLocation;
-(id)storeName;
-(id)initWithStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(BOOL)recoverMetadataWithError:(id*)arg1 ;
-(BOOL)recoverBaselineMetadataWithImportContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)addTransactionHistoryEntriesForObjectIDs:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)connection;
@end

