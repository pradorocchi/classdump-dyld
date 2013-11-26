/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/tzd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <tzd/tzd-Structs.h>
@class TZFileSystemInterface, TZAsset, TZAssetExpander;

@interface TZAssetClient : NSObject {

	TZFileSystemInterface* _fileSystemInterface;
	TZAsset* _currentAsset;
	TZAssetExpander* _assetExpander;

}

@property (retain) TZFileSystemInterface * fileSystemInterface;              //@synthesize fileSystemInterface=_fileSystemInterface - In the implementation block
@property (retain) TZAsset * currentAsset;                                   //@synthesize currentAsset=_currentAsset - In the implementation block
@property (retain) TZAssetExpander * assetExpander;                          //@synthesize assetExpander=_assetExpander - In the implementation block
-(id)fileSystemInterface;
-(BOOL)performAssetQueryWithLocalOnlySetting:(BOOL)arg1 withError:(id*)arg2 ;
-(void)setFileSystemInterface:(id)arg1 ;
-(BOOL)_downloadAssetIfNecessary:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_shouldUpdateGivenBaselineTZDataVersion:(id)arg1 assetTZDataVersion:(id)arg2 ;
-(void)setAssetExpander:(id)arg1 ;
-(id)assetExpander;
-(id)_queryForTZDAssetsWithQueryType:(unsigned)arg1 withError:(id*)arg2 ;
-(BOOL)handleAvailableAssetResults:(id)arg1 withError:(id*)arg2 ;
-(id)_mobileGestaltInfoForKey:(CFStringRef)arg1 ;
-(BOOL)_downloadAsset:(id)arg1 withError:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)currentAsset;
-(void)setCurrentAsset:(id)arg1 ;
-(void).cxx_destruct;
@end

