/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSString;

@interface YTProtectedDefaults : NSObject {

	NSMutableDictionary* _internalDictionary;
	BOOL _shouldSynchronize;
	NSString* _plistPath;

}
+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(void)_protectedDataAvailable;
-(void)_protectedDataUnvailable;
@end

