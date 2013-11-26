/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface AXBinaryMonitor : NSObject {

	NSMutableDictionary* _bundleHandlerMap;
	NSMutableDictionary* _frameworkHandlerMap;
	NSMutableDictionary* _dylibHandlerMap;

}

@property (nonatomic,retain) NSMutableDictionary * bundleHandlerMap;                 //@synthesize bundleHandlerMap=_bundleHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * frameworkHandlerMap;              //@synthesize frameworkHandlerMap=_frameworkHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dylibHandlerMap;                  //@synthesize dylibHandlerMap=_dylibHandlerMap - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)setBundleHandlerMap:(id)arg1 ;
-(void)setFrameworkHandlerMap:(id)arg1 ;
-(void)setDylibHandlerMap:(id)arg1 ;
-(BOOL)_loadImageIsFramework:(id)arg1 ;
-(id)_frameworkNameForImage:(id)arg1 ;
-(id)frameworkHandlerMap;
-(BOOL)_loadImageIsBundle:(id)arg1 ;
-(id)_bundleNameForImage:(id)arg1 ;
-(id)bundleHandlerMap;
-(BOOL)_loadImageIsDylib:(id)arg1 ;
-(id)_dylibNameForImage:(id)arg1 ;
-(id)dylibHandlerMap;
-(void)_addHandler:(id)arg1 withName:(id)arg2 toMap:(id*)arg3 ;
-(void)_handleLoadedImagePath:(id)arg1 ;
-(void)addHandler:(/*^block*/ id)arg1 forBundleID:(id)arg2 ;
-(void)addHandler:(/*^block*/ id)arg1 forBundleName:(id)arg2 ;
-(void)addHandler:(/*^block*/ id)arg1 forFramework:(id)arg2 ;
-(void)addHandler:(/*^block*/ id)arg1 forDylib:(id)arg2 ;
@end

