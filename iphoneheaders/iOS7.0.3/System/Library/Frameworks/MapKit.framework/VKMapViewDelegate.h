/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VKMapViewDelegate <NSObject>
@optional
-(void)mapView:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
-(void)mapViewDidStartLoadingTiles:(id)arg1;
-(void)mapViewDidFinishLoadingTiles:(id)arg1;
-(void)mapViewDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(void)mapViewDidChangeVisibleRegion:(id)arg1;
-(void)mapViewDidDraw:(id)arg1;
-(void)mapViewWillStartRegionAnimation:(id)arg1;
-(void)mapViewDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
-(id)mapView:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)mapView:(id)arg1 didAddAnnotationMarkers:(id)arg2;
-(void)mapView:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
-(void)mapView:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
-(void)mapView:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2;
-(id)mapView:(id)arg1 painterForOverlay:(id)arg2;
-(void)mapViewDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
-(void)mapViewDidBecomePartiallyDrawn:(id)arg1;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)mapView:(id)arg1 didFinishChangingMapDisplayStyle:(int)arg2;
-(void)mapView:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)mapView:(id)arg1 willTransitionFrom:(int)arg2 to:(int)arg3 duration:(double)arg4;
@end

