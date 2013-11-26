/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier {

	NSString* _title;
	NSString* _prompt;
	NSString* _okButton;
	NSString* _cancelButton;

}

@property (nonatomic,retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * prompt;                    //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) NSString * okButton;                  //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) NSString * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
+(id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(int)arg6 edit:(Class)arg7 ;
-(BOOL)isDestructive;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(id)cancelButton;
-(void)setCancelButton:(id)arg1 ;
-(id)okButton;
-(void)setOkButton:(id)arg1 ;
-(void)setupWithDictionary:(id)arg1 ;
@end

