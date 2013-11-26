/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString, EAGLSharegroup;

@interface EAGLContext : NSObject {

	EAGLContextPrivate* _private;
	NSString* debugLabel;

}

@property (readonly) unsigned API; 
@property (readonly) EAGLSharegroup * sharegroup; 
@property (nonatomic,copy) NSString * debugLabel; 
+(BOOL)setCurrentContext:(id)arg1 ;
+(id)currentContext;
-(unsigned)API;
-(EAGLMacroContextRef)getMacroContextPrivate;
-(id)sharegroup;
-(BOOL)attachImage:(unsigned)arg1 toCoreSurface:(IOSurfaceRef)arg2 invertedRender:(BOOL)arg3 ;
-(EAGLMacroContextRef)GetMacroContextPrivate;
-(void)setDebugLabel:(id)arg1 ;
-(BOOL)texImageIOSurface:(IOSurfaceRef)arg1 target:(unsigned)arg2 internalFormat:(unsigned)arg3 width:(unsigned)arg4 height:(unsigned)arg5 format:(unsigned)arg6 type:(unsigned)arg7 plane:(unsigned)arg8 invert:(BOOL)arg9 ;
-(unsigned)setParameter:(unsigned)arg1 to:(int*)arg2 ;
-(id)initWithAPI:(unsigned)arg1 properties:(id)arg2 ;
-(BOOL)setBlockFence:(/*^block*/ id)arg1 onQueue:(id)arg2 ;
-(id)initWithAPI:(unsigned)arg1 sharedWithCompute:(BOOL)arg2 ;
-(unsigned)getParameter:(unsigned)arg1 to:(int*)arg2 ;
-(id)debugLabel;
-(void)swapNotification:(IOMobileFramebufferRef)arg1 forTransaction:(unsigned)arg2 onLayer:(unsigned)arg3 ;
-(void)sendNotification:(unsigned)arg1 forTransaction:(unsigned)arg2 onLayer:(unsigned)arg3 ;
-(void)dealloc;
-(id)initWithAPI:(unsigned)arg1 ;
-(BOOL)renderbufferStorage:(unsigned)arg1 fromDrawable:(id)arg2 ;
-(BOOL)presentRenderbuffer:(unsigned)arg1 ;
-(id)initWithAPI:(unsigned)arg1 sharegroup:(id)arg2 ;
@end

