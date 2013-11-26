/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSNumber, NSString;

@interface MCUIPayloadUserInputField : NSObject {

	NSMutableDictionary* _fieldDictionary;
	id _response;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int flags; 
@property (nonatomic,readonly) NSNumber * minimumLength; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * fieldDescription; 
@property (nonatomic,readonly) NSString * retypeDescription; 
@property (nonatomic,readonly) NSString * mismatchDescription; 
@property (nonatomic,readonly) NSString * finePrint; 
@property (nonatomic,readonly) NSString * defaultValue; 
@property (nonatomic,readonly) NSString * placeholderValue; 
@property (nonatomic,readonly) int keyboardType; 
@property (nonatomic,readonly) int capitalizationType; 
@property (nonatomic,readonly) BOOL isRequired; 
@property (nonatomic,readonly) BOOL isPassword; 
@property (nonatomic,readonly) BOOL needsRetype; 
@property (nonatomic,readonly) BOOL isDevicePasscodeField; 
-(id)responseDictionary;
-(id)description;
-(int)type;
-(id)_uuid;
-(id)title;
-(int)keyboardType;
-(id)fieldDescription;
-(id)finePrint;
-(int)capitalizationType;
-(BOOL)isPassword;
-(id)placeholderValue;
-(id)minimumLength;
-(BOOL)needsRetype;
-(BOOL)isDevicePasscodeField;
-(void)setUserResponse:(id)arg1 ;
-(id)retypeDescription;
-(id)mismatchDescription;
-(id)initWithFieldDictionary:(id)arg1 ;
-(int)flags;
-(void).cxx_destruct;
-(id)defaultValue;
-(BOOL)isRequired;
@end

