/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface StocksPreferences : NSObject {

	BOOL _changeColorSwapped;
	unsigned _textDirection;
	BOOL _textAttachmentDirectionIsRightToLeft;

}

@property (getter=isChangeColorSwapped,nonatomic,readonly) BOOL changeColorSwapped;              //@synthesize changeColorSwapped=_changeColorSwapped - In the implementation block
@property (nonatomic,readonly) unsigned textDirection;                                           //@synthesize textDirection=_textDirection - In the implementation block
@property (nonatomic,readonly) BOOL textAttachmentDirectionIsRightToLeft;                        //@synthesize textAttachmentDirectionIsRightToLeft=_textAttachmentDirectionIsRightToLeft - In the implementation block
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(void)dealloc;
-(id)init;
-(BOOL)boolForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(unsigned)textDirection;
-(BOOL)textAttachmentDirectionIsRightToLeft;
-(BOOL)isChangeColorSwapped;
-(void)resetLocale;
@end

