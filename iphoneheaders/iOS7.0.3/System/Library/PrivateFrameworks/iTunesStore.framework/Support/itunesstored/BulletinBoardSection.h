/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <SpringBoard/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, BBDataProviderProxy, NSString, NSArray;

@interface BulletinBoardSection : NSObject <BBRemoteDataProvider> {

	NSMutableArray* _bulletins;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	BBDataProviderProxy* _proxy;
	NSString* _sectionID;

}

@property (readonly) NSArray * existingBulletins; 
-(void)removeAllBulletins;
-(void)postBulletin:(id)arg1 ;
-(id)existingBulletins;
-(void)updateBulletin:(id)arg1 ;
-(id)initWithSectionIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)setDataProviderProxy:(id)arg1 ;
-(id)_bulletins;
-(void)_saveUserDefaults;
-(CFStringRef)_userDefaultsKey;
-(void)dealloc;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sortDescriptors;
@end

