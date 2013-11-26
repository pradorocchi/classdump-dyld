/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString;

@interface AASetupAssistantCreateResponse : AAResponse

@property (nonatomic,readonly) NSNumber * status; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSString * HSAAction; 
@property (nonatomic,readonly) NSString * HSAData; 
-(id)appleID;
-(id)status;
-(id)HSAAction;
-(id)HSAData;
-(id)statusMessage;
-(id)personID;
@end

