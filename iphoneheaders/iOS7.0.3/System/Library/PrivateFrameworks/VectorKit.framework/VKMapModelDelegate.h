/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VKMapModelDelegate <NSObject>
@required
-(BOOL)mapModelInNav:(id)arg1;
-(void)mapModel:(id)arg1 needsPanByOffset:(CGPoint)arg2 relativeToScreenPoint:(CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(/*^block*/ id)arg6;
-(void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
-(void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
-(void)mapModel:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
-(id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
-(void)mapModelDidBecomePartiallyDrawn:(id)arg1;
-(void)mapModelWillBecomFullyDrawn:(id)arg1;
-(void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
-(void)mapModelDidStartLoadingTiles:(id)arg1;
-(void)mapModelDidFinishLoadingTiles:(id)arg1;
-(void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
-(double)mapModelZoomScale:(id)arg1;
-(void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)mapModel:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
@end

