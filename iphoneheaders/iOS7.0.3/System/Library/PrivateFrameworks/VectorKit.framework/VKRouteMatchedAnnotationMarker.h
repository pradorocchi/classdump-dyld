/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationMarker.h>
#import <VectorKit/VKRouteMatchedAnnotationPresentation.h>

@class VKAttributedRouteMatch;

@interface VKRouteMatchedAnnotationMarker : VKAnnotationMarker <VKRouteMatchedAnnotationPresentation> {

	VKAttributedRouteMatch* _routeMatch;

}

@property (nonatomic,retain) VKAttributedRouteMatch * routeMatch;                 //@synthesize routeMatch=_routeMatch - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK61 presentationCoordinate; 
@property (assign,getter=isTracking,nonatomic) BOOL tracking; 
-(void)dealloc;
-(id)routeMatch;
-(void)setRouteMatch:(id)arg1 ;
@end

