/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/MobileSubstrate/DynamicLibraries/libblur.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libblur.dylib/libblur.dylib-Structs.h>
#import <GLKit/GLKViewController.h>

@class EAGLContext;

@interface LBViewController : GLKViewController {

	unsigned _program;
	unsigned _positionVBO;
	unsigned _texcoordVBO;
	unsigned _indexVBO;
	float _screenWidth;
	float _screenHeight;
	unsigned long _textureWidth;
	unsigned long _textureHeight;
	EAGLContext* _context;
	unsigned _mainTexture;

}
-(void)loadShaders;
-(void)setupBuffers;
-(void)bindWithFrame:(CGRect)arg1 ;
-(void)bind;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)setupGL;
-(void)tearDownGL;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
@end

