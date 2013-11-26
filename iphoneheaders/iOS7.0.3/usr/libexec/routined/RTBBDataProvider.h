/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, GEOQuickETARequester, BBDataProviderProxy, BBBulletinRequest, RTLOIETA, GEOPlaceResult;

@interface RTBBDataProvider : NSObject <BBRemoteDataProvider> {

	NSObject<OS_dispatch_queue>* _queue;
	GEOQuickETARequester* _etaRequester;
	BBDataProviderProxy* _dataProviderProxy;
	BBBulletinRequest* _currentBulletinRequest;
	RTLOIETA* _currentLOIETA;
	GEOPlaceResult* _lastPlaceResult;

}
-(void)setDataProviderProxy:(id)arg1 ;
-(void)_removeCurrentBulletin;
-(void)_displayBulletinForLOIETA:(id)arg1 ;
-(void)_displayBulletinFromOrigin:(id)arg1 toLoi:(id)arg2 ;
-(void)_displayBulletinForLocation:(id)arg1 ;
-(void)_coreroutine_bulletinBoardDidPresent;
-(void)dealloc;
-(id)init;
-(id)sectionIdentifier;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)defaultSectionInfo;
-(id)sortDescriptors;
-(void).cxx_destruct;
@end

