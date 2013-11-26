/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {

	SSXPCConnection* _connection;
	int _manifestType;

}

@property (readonly) int manifestType; 
-(void)dealloc;
-(id)init;
-(id)initWithManifestType:(int)arg1 ;
-(void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)getPathsForFilesWithClass:(int)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(int)manifestType;
-(void)rebuildManifestWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)removeItemWithAssetPath:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
@end

