/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class MKMapSnapshotOptions, NSObject, VKMapSnapshotCreator;

@interface MKMapSnapshotter : NSObject {

	MKMapSnapshotOptions* _options;
	int _loadingFlag;
	NSObject<OS_dispatch_queue>* _callbackQueue;
	/*^block*/ id _completionHandler;
	VKMapSnapshotCreator* _snapshotCreator;
	BOOL _needsResume;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(void)_enterBackground:(id)arg1 ;
-(void)_exitBackground:(id)arg1 ;
-(void)_performSnapshot;
-(void)_cleanupSnapshotCreator;
-(void)_succeedWithSnapshot:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(BOOL)isLoading;
-(void)_cancel;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)initWithOptions:(id)arg1 ;
-(void)_failWithError:(id)arg1 ;
@end

