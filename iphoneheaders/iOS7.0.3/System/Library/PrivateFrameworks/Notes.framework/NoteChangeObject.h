/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSManagedObject.h>

@class NoteStoreObject, NSNumber, NSMutableSet;

@interface NoteChangeObject : NSManagedObject

@property (nonatomic,@dynamic,retain) NoteStoreObject * store; 
@property (nonatomic,@dynamic,retain) NSNumber * changeType; 
@property (nonatomic,@dynamic,retain) NSMutableSet * noteIntegerIds; 
@property (nonatomic,@dynamic,retain) NSMutableSet * noteServerIds; 
@property (nonatomic,@dynamic,retain) NSMutableSet * noteServerIntIds; 
@end

