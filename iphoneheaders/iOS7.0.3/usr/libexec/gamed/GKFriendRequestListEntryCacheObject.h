/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKFriendListEntryCacheObject.h>

@class NSDate, NSString;

@interface GKFriendRequestListEntryCacheObject : GKFriendListEntryCacheObject

@property (nonatomic,@dynamic,retain) NSDate * date; 
@property (nonatomic,@dynamic,retain) NSString * message; 
@property (nonatomic,@dynamic,retain) NSString * email; 
@property (assign,nonatomic,@dynamic) BOOL wasViewed; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(id)internalRepresentation;
@end

