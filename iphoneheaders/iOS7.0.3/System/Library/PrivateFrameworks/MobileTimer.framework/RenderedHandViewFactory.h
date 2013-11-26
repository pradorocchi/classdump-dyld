/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MobileTimer/MobileTimer-Structs.h>
@class NSBundle, NSString, NSMutableDictionary;

@interface RenderedHandViewFactory : NSObject {

	NSBundle* _resourcesBundle;
	NSString* _imagePath;
	CGPoint _offset;
	CGSize _scale;
	CGPDFPageRef _page;
	CGSize _viewSize;
	BOOL _allowCaching;
	NSMutableDictionary* _angleCache;
	unsigned _registeredClientsCount;

}

@property (nonatomic,readonly) BOOL allowCaching;                          //@synthesize allowCaching=_allowCaching - In the implementation block
@property (nonatomic,readonly) NSString * key; 
@property (assign,nonatomic) unsigned registeredClientsCount;              //@synthesize registeredClientsCount=_registeredClientsCount - In the implementation block
+(void)flushAllCaches;
+(id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 ;
+(id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 allowCaching:(BOOL)arg5 ;
+(void)unregisterForFactory:(id)arg1 ;
-(void)dealloc;
-(id)key;
-(void)flushCache;
-(id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 allowCaching:(BOOL)arg5 ;
-(unsigned)registeredClientsCount;
-(void)setRegisteredClientsCount:(unsigned)arg1 ;
-(id)renderImageForAngle:(float)arg1 viewSize:(CGSize)arg2 ;
-(id)imageForAngle:(float)arg1 viewSize:(CGSize)arg2 ;
-(BOOL)allowCaching;
@end

