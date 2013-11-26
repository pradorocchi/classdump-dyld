/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIConfirmationView : SAAceView

@property (nonatomic,copy) NSArray * allConfirmationOptions; 
@property (nonatomic,copy) NSString * cancelTrigger; 
@property (nonatomic,copy) NSArray * confirmCommands; 
@property (nonatomic,copy) NSString * confirmText; 
@property (nonatomic,copy) NSArray * denyCommands; 
@property (nonatomic,copy) NSString * denyText; 
+(id)confirmationView;
+(id)confirmationViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)allConfirmationOptions;
-(void)setAllConfirmationOptions:(id)arg1 ;
-(id)cancelTrigger;
-(void)setCancelTrigger:(id)arg1 ;
-(id)confirmCommands;
-(void)setConfirmCommands:(id)arg1 ;
-(id)confirmText;
-(void)setConfirmText:(id)arg1 ;
-(id)denyCommands;
-(void)setDenyCommands:(id)arg1 ;
-(id)denyText;
-(void)setDenyText:(id)arg1 ;
@end

