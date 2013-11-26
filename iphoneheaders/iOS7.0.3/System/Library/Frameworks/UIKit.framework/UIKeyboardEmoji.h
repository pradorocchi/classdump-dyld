/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface UIKeyboardEmoji : NSObject {

	NSString* _emojiString;
	BOOL _hasDingbat;

}

@property (nonatomic,retain) NSString * emojiString;              //@synthesize emojiString=_emojiString - In the implementation block
@property (assign) BOOL hasDingbat;                               //@synthesize hasDingbat=_hasDingbat - In the implementation block
+(id)emojiWithString:(id)arg1 hasDingbat:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)key;
-(void)setEmojiString:(id)arg1 ;
-(void)setHasDingbat:(BOOL)arg1 ;
-(id)initWithString:(id)arg1 hasDingbat:(BOOL)arg2 ;
-(id)emojiString;
-(BOOL)hasDingbat;
@end

