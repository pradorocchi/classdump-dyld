/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSManagedObjectModel, NSManagedObjectContext, NSURL, NSString;

@interface TDPersistentDocument : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	id _store;
	NSURL* _fileURL;
	NSString* _fileType;
	NSURL* _temporaryFileURL;

}

@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * fileType;                   //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,copy) NSURL * temporaryFileURL;              //@synthesize temporaryFileURL=_temporaryFileURL - In the implementation block
+(id)_fileModificationDateForURL:(id)arg1 ;
-(id)_persistentStoreCoordinator;
-(void)dealloc;
-(id)undoManager;
-(void)close;
-(id)displayName;
-(id)fileURL;
-(void)setFileType:(id)arg1 ;
-(id)fileType;
-(id)managedObjectModel;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(id)managedObjectContext;
-(id)initWithType:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)saveDocument:(id)arg1 ;
-(void)setTemporaryFileURL:(id)arg1 ;
-(id)temporaryFileURL;
-(void)setManagedObjectContext:(id)arg1 ;
-(void)setFileURL:(id)arg1 ;
@end

