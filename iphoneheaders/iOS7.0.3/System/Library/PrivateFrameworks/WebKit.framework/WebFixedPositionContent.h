/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebKit/WebKit-Structs.h>
@interface WebFixedPositionContent : NSObject {

	WebFixedPositionContentData* _private;

}
-(void)dealloc;
-(BOOL)hasFixedOrStickyPositionLayers;
-(void)scrollOrZoomChanged:(CGRect)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(void)didFinishScrollingOrZooming;
-(void)overflowScrollPositionForLayer:(id)arg1 changedTo:(CGPoint)arg2 ;
-(void)setViewportConstrainedLayers:(HashMap<CALayer *, WTF::OwnPtr<WebCore::ViewportConstraints>, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<WTF::OwnPtr<WebCore::ViewportConstraints> > >*)arg1 stickyContainerMap:(HashMap<CALayer *, CALayer *, WTF::PtrHash<CALayer *>, WTF::HashTraits<CALayer *>, WTF::HashTraits<CALayer *> >*)arg2 ;
-(float)minimumOffsetFromFixedPositionLayersToAnchorEdge:(int)arg1 ofRect:(CGRect)arg2 inLayer:(id)arg3 ;
@end

