/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PFUbiquityLocation, NSPersistentStoreCoordinator, NSPersistentStore, PFUbiquityMetadataFactoryFilePresenter;

@interface PFUbiquityMetadataFactoryEntry : NSObject {

	PFUbiquityLocation* _metadataStoreFileLocation;
	NSPersistentStoreCoordinator* _psc;
	NSPersistentStore* _store;
	PFUbiquityMetadataFactoryFilePresenter* _filePresenter;

}

@property (nonatomic,readonly) PFUbiquityLocation * metadataStoreFileLocation;                      //@synthesize metadataStoreFileLocation=_metadataStoreFileLocation - In the implementation block
@property (nonatomic,readonly) PFUbiquityMetadataFactoryFilePresenter * filePresenter;              //@synthesize filePresenter=_filePresenter - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * psc;                                  //@synthesize psc=_psc - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                                           //@synthesize store=_store - In the implementation block
-(id)store;
-(id)psc;
-(id)metadataStoreFileLocation;
-(id)filePresenter;
-(id)initWithMetadataStoreFileLocation:(id)arg1 ;
-(BOOL)initializePersistentStoreCoordinator:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

