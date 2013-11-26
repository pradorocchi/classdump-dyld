/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface UIKeyboardEmojiDefaultsController : NSObject {

	NSMutableDictionary* _defaults;

}
+(id)sharedController;
-(void)dealloc;
-(id)init;
-(int)emojiCategoryDefaultsIndex:(id)arg1 ;
-(id)emptyDefaultsDictionary;
-(void)handleWrite:(id)arg1 ;
-(void)handleRead:(id)arg1 ;
-(void)writeEmojiDefaults;
-(void)readEmojiDefaults;
-(void)setEmojiCategoryDefaultsIndex:(int)arg1 forCategory:(id)arg2 ;
-(void)setRecentsKey:(id)arg1 ;
-(id)recentsKey;
-(void)setUsageHistoryKey:(id)arg1 ;
-(id)usageHistoryKey;
-(void)setCurrentSequenceKey:(int)arg1 ;
-(int)currentSequenceKey;
-(void)setDefaultsValue:(id)arg1 forKey:(id)arg2 ;
-(id)defaultsValueForKey:(id)arg1 ;
@end

