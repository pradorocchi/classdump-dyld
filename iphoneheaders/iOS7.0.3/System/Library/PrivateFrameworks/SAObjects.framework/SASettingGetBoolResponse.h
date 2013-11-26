/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SASettingGetValueResponse.h>

@class SASettingEntity;

@interface SASettingGetBoolResponse : SASettingGetValueResponse

@property (nonatomic,retain) SASettingEntity * setting; 
+(id)getBoolResponse;
+(id)getBoolResponseWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getBoolResponseWithSetting:(id)arg1 ;
-(id)groupIdentifier;
-(id)setting;
-(id)initWithSetting:(id)arg1 ;
-(id)encodedClassName;
-(void)setSetting:(id)arg1 ;
@end

