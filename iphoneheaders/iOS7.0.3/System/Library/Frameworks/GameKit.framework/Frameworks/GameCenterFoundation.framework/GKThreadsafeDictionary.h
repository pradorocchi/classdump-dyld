/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GKThreadsafeDictionary : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(void)writeToDictionary:(/*^block*/ id)arg1 ;
-(id)objectForKey:(id)arg1 objectProducerBlock:(/*^block*/ id)arg2 ;
-(void)readFromDictionary:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(id)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)allObjects;
-(id)initWithName:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
@end

