/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreText/CoreText-Structs.h>
@class NSMutableDictionary, NSSet;

@interface FontAssetDownloadManager : NSObject {

	TCFRef<const __CFArray *>* fDescriptors;
	TCFRef<const __CFSet *>* fMandatoryAttributes;
	/*^block*/ id fProgressCallbackBlock;
	NSMutableDictionary* fProgressParams;
	NSMutableDictionary* fDownloadOptions;
	NSSet* fPreciousFontLanguages;

}
+(Class)getASAssetQueryClass;
+(BOOL)shouldIgnoreFontAsset:(id)arg1 ;
+(BOOL)shouldTryServer;
+(BOOL)shouldRetryWithServer;
+(id)enabledKeyboardLanguages;
+(id)displayNameForCurrentUser:(id)arg1 ;
+(id)availableFontAttributesArray;
-(BOOL)callProgressCallbak:(unsigned)arg1 ;
-(id)getUnmatchedDescriptors;
-(id)mobileAssetsForUnmatched:(id)arg1 andFontFilePaths:(id)arg2 ;
-(unsigned long)calculateDownloadSize:(id)arg1 ;
-(void)setProgressParam:(id)arg1 forKey:(id)arg2 ;
-(BOOL)executeDownloadingFontAssets:(id)arg1 forDescriptors:(id)arg2 andFontFilePaths:(id)arg3 ;
-(id)doFinalMatching;
-(id)availableMobileAssets:(BOOL)arg1 error:(id*)arg2 ;
-(id)extractMatchingAssetsForDescriptor:(CTFontDescriptorRef)arg1 from:(id)arg2 withFailInfo:(BOOL*)arg3 andFontFilePaths:(id)arg4 ;
-(void)setDownloadOptionsForMobileAsset;
-(BOOL)assetStalled:(id)arg1 ;
-(void)setGarbageCollectionBehaviorForAsset:(id)arg1 ;
-(BOOL)activateFontsFromAssetURL:(id)arg1 ;
-(id)preciousFontLanguages;
-(id)initWithDescriptors:(CFArrayRef)arg1 andMandatoryAttributes:(CFSetRef)arg2 withBlock:(/*^block*/ id)arg3 ;
-(void)downloadFontAssets;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

