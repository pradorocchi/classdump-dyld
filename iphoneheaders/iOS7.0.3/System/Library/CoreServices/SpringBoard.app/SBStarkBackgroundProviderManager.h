/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, NSMutableDictionary, NSHashTable;

@interface SBStarkBackgroundProviderManager : NSObject {

	NSMutableArray* _providersByPriority;
	NSMutableDictionary* _providersByServiceName;
	NSHashTable* _observers;

}
-(void)addBackgroundProvider:(id)arg1 ;
-(void)removeBackgroundProviderWithServiceName:(id)arg1 ;
-(id)activeProvider;
-(void)_notifyAdd:(id)arg1 ;
-(void)_notifyRemove:(id)arg1 ;
-(void)removeBackgroundProvider:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

