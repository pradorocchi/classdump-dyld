/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>

@class QLThumbnailOperation, UIImage;

@interface QLThumbnailView : UIView {

	QLThumbnailOperation* _thumbnailOperation;
	UIImage* _image;
	int _pageNumber;
	BOOL _alwaysVisible;
	CGRect unselectedFrame;
	CGRect _unselectedFrame;

}

@property (retain) QLThumbnailOperation * thumbnailOperation; 
@property (retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (assign) int pageNumber;                                         //@synthesize pageNumber=_pageNumber - In the implementation block
@property (assign) BOOL alwaysVisible;                                     //@synthesize alwaysVisible=_alwaysVisible - In the implementation block
@property (assign) CGRect unselectedFrame;                                 //@synthesize unselectedFrame=_unselectedFrame - In the implementation block
-(BOOL)alwaysVisible;
-(void)setAlwaysVisible:(BOOL)arg1 ;
-(void)setUnselectedFrame:(CGRect)arg1 ;
-(id)thumbnailOperation;
-(void)setThumbnailOperation:(id)arg1 ;
-(CGRect)unselectedFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)image;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)pageNumber;
-(void)setPageNumber:(int)arg1 ;
@end

