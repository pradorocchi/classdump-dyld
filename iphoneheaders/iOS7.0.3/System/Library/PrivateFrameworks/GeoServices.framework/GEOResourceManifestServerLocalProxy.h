/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>
#import <GeoServices/GEOResourceManifestServerProxy.h>

@protocol GEOResourceManifestServerProxyDelegate;
@class , NSURLConnection, NSMutableData, NSString, NSTimer, GEOResourceManifestDownload, GEOActiveTileGroup, GEOResourceLoader, NSMutableDictionary, NSLock, NSError, NSMutableArray;

@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLConnectionDelegate, GEOResourceManifestServerProxy> {

	<GEOResourceManifestServerProxyDelegate>* _delegate;
	NSURLConnection* _connection;
	NSMutableData* _responseData;
	NSString* _responseETag;
	BOOL _isObservingManifestReachability;
	NSTimer* _manifestUpdateTimer;
	BOOL _isObservingTileGroupReachability;
	NSTimer* _tileGroupUpdateTimer;
	GEOResourceManifestDownload* _resourceManifest;
	GEOActiveTileGroup* _activeTileGroup;
	GEOResourceLoader* _resourceLoader;
	NSMutableDictionary* _resourceRetainCounts;
	BOOL _started;
	BOOL _hiDPI;
	unsigned _manifestRetryCount;
	unsigned _tileGroupRetryCount;
	NSString* _authToken;
	NSLock* _authTokenLock;
	NSError* _lastResourceManifestLoadError;
	NSMutableArray* _manifestUpdateCompletionHandlers;

}

@property (assign,nonatomic) <GEOResourceManifestServerProxyDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)authToken;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(oneway void)forceUpdate;
-(void)_cleanupConnection;
-(oneway void)startServer:(id)arg1 ;
-(void)openConnection;
-(void)closeConnection;
-(id)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)getResourceManifestWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1 ;
-(oneway void)resetActiveTileGroup;
-(void)_cancelConnection;
-(void)_activeTileGroupOverridesChanged:(id)arg1 ;
-(void)_loadFromDisk;
-(void)_considerChangingActiveTileGroup;
-(BOOL)_updateManifestIfNecessary;
-(void)_scheduleUpdateTimerWithTimeInterval:(double)arg1 ;
-(oneway void)retainResources:(id)arg1 ;
-(oneway void)releaseResources:(id)arg1 ;
-(void)_purgeOldRegionalResources;
-(void)_writeActiveTileGroupToDisk:(id)arg1 ;
-(void)_notifyManifestUpdateCompletionHandlers:(id)arg1 ;
-(id)_idealTileGroupToUse;
-(void)_registerReachabilityObserver:(unsigned)arg1 ;
-(void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ignoreIdentifier:(BOOL)arg3 ;
-(void)_tileGroupTimerFired:(id)arg1 ;
-(id)_resourceInfosForTileGroup:(id)arg1 ;
-(void)_retainResource:(id)arg1 ;
-(BOOL)_changeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ;
-(void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1 ;
-(void)_updateManifest;
-(id)_manifestURL;
-(void)_updateManifest:(/*^block*/ id)arg1 ;
-(void)_updateTimerFired:(id)arg1 ;
-(void)_writeManifestToDisk:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

