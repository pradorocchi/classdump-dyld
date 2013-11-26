/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSPersistentStoreCoordinator, NSPersistentStore, NSString;

@interface BCDatabase : NSObject {

	NSPersistentStoreCoordinator* _psc;
	NSPersistentStore* _ps;
	NSString* _path;

}
-(BOOL)shouldRetryAddingPersistentStoreAfterError:(id)arg1 ;
-(id)newManagedObjectContext;
-(void)dealloc;
-(id)model;
-(id)initWithDatabasePath:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(id)databaseURL;
@end

