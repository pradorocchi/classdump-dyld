/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface HSControlPrompt : NSObject {

	BOOL _secureText;
	unsigned _keyboardType;
	unsigned _messageType;
	unsigned _promptID;
	NSString* _string;
	NSString* _subText;
	NSString* _title;
	unsigned _version;
	unsigned long long _sessionID;

}

@property (assign,nonatomic) unsigned keyboardType;                            //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) unsigned messageType;                             //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned promptID;                                //@synthesize promptID=_promptID - In the implementation block
@property (assign,getter=isSecureText,nonatomic) BOOL secureText;              //@synthesize secureText=_secureText - In the implementation block
@property (assign,nonatomic) unsigned long long sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * string;                                  //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSString * subText;                                 //@synthesize subText=_subText - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned version;                                 //@synthesize version=_version - In the implementation block
-(unsigned)messageType;
-(void)setMessageType:(unsigned)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)string;
-(id)title;
-(unsigned)keyboardType;
-(void)setKeyboardType:(unsigned)arg1 ;
-(void)setString:(id)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(void)setPromptID:(unsigned)arg1 ;
-(unsigned)promptID;
-(void)setSecureText:(BOOL)arg1 ;
-(void)setSubText:(id)arg1 ;
-(BOOL)isSecureText;
-(id)subText;
@end

