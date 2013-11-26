/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosSharingGridCell.h>

@class UIView;

@interface PUPhotosZoomingSharingGridCell : PUPhotosSharingGridCell {

	CGRect _defaultBounds;
	CGPoint _badgeViewDefaultCenter;
	unsigned _badgeViewLayoutAnchor;
	UIView* _badgeView;

}
-(void)layoutSubviews;
-(void)setZoomingImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 exampleCell:(id)arg2 badgeView:(id)arg3 layoutAnchor:(unsigned)arg4 ;
-(void)setZoomScale:(float)arg1 translation:(CGPoint)arg2 rotation:(float)arg3 animated:(BOOL)arg4 completion:(/*^block*/ id)arg5 ;
-(void).cxx_destruct;
@end

