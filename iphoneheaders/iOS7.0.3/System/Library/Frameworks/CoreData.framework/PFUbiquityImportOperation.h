/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSPersistentStore, PFUbiquityLocation, NSLock, NSObject;

@interface PFUbiquityImportOperation : NSOperation {

	NSString* _localPeerID;
	NSString* _storeName;
	NSPersistentStore* _store;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSLock* _delegateLock;
	BOOL _lockedDelegateLock;
	NSObject* _delegate;

}

@property (nonatomic,readonly) NSString * localPeerID;                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                   //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;              //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                              //@synthesize store=_store - In the implementation block
@property (assign) NSObject * delegate; 
-(id)store;
-(id)localPeerID;
-(id)ubiquityRootLocation;
-(id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(id)retainedDelegate;
-(id)storeName;
-(void)storeWillBeRemoved:(id)arg1 ;
-(void)lockDelegateLock;
-(void)unlockDelegateLock;
-(id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)cancel;
@end

