/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSString, NSNumber;

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (nonatomic,copy) NSString * filePath; 
@property (nonatomic,copy) NSNumber * length; 
+(id)voiceMail;
+(id)voiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)length;
-(void)setLength:(id)arg1 ;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
@end

