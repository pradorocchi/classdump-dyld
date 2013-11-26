/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLGLView.h>

@class CIFilter;

@interface PLEffectsFullsizeView : PLGLView {

	CIFilter* _selectedFilter;
	unsigned _selectedFilterIndex;
	unsigned _filterIndex;

}

@property (assign) unsigned filterIndex;              //@synthesize filterIndex=_filterIndex - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)renderPixelBuffer:(CVBufferRef)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3 ;
-(void)setFixedSize:(CGSize)arg1 ;
-(unsigned)filterIndex;
-(void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3 ;
-(id)_updateSelectedFilter;
-(void)_layoutGLLayer;
-(void)setFilterIndex:(unsigned)arg1 ;
@end

