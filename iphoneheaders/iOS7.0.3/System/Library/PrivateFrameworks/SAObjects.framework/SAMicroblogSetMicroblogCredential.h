/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAMicroblogSocialCredential, NSString;

@interface SAMicroblogSetMicroblogCredential : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAMicroblogSocialCredential * socialCredential; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)setMicroblogCredential;
+(id)setMicroblogCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)socialCredential;
-(void)setSocialCredential:(id)arg1 ;
@end

