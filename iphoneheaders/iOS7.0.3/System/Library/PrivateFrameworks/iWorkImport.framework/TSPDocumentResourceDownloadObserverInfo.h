/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class TSPData;

@interface TSPDocumentResourceDownloadObserverInfo : NSObject {

	id _downloadObserver;
	TSPData* _data;
	/*^block*/ id _completionHandler;
	BOOL _isInternalObserver;

}

@property (nonatomic,readonly) BOOL isInternalObserver;              //@synthesize isInternalObserver=_isInternalObserver - In the implementation block
-(id)initWithDownloadObserver:(id)arg1 data:(id)arg2 isInternalObserver:(BOOL)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(BOOL)isInternalObserver;
-(id)init;
-(void)postNotification:(int)arg1 ;
-(void).cxx_destruct;
@end

