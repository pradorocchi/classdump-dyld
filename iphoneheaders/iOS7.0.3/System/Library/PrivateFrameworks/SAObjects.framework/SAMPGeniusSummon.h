/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainCommand.h>

@class SAMPMediaItem;

@interface SAMPGeniusSummon : SADomainCommand

@property (nonatomic,retain) SAMPMediaItem * mediaItem; 
+(id)geniusSummon;
+(id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)mediaItem;
-(void)setMediaItem:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

