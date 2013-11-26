/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
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

