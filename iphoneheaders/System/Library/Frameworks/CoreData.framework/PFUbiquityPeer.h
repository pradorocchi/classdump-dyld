/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface PFUbiquityPeer : NSManagedObject

@property (nonatomic,@dynamic,retain) NSString * peerKey; 
@property (nonatomic,@dynamic,retain) NSString * peerCode; 
@property (nonatomic,@dynamic,retain) NSSet * remoteStates; 
@property (nonatomic,@dynamic,retain) NSSet * primaryKeyRanges; 
@property (nonatomic,@dynamic,retain) NSSet * transactionEntries; 
@property (nonatomic,@dynamic,retain) NSSet * localPeerStates; 
+(id)allPeersInManagedObjectContext:(id)arg1 ;
+(id)peerForPeerID:(id)arg1 inManagedObjectContext:(id)arg2 createIfMissing:(BOOL)arg3 ;
@end
