/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKFeatureAccessibilityElement;

@interface VKMapViewTourStatus : NSObject {

	VKFeatureAccessibilityElement* _currentLocation;
	VKFeatureAccessibilityElement* _lastCurrentLocation;
	VKFeatureAccessibilityElement* _futureLocation;
	VKFeatureAccessibilityElement* _lastFutureLocation;
	CGPoint _currentPoint;
	CGPoint _futurePoint;

}

@property (nonatomic,retain) VKFeatureAccessibilityElement * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * lastCurrentLocation;              //@synthesize lastCurrentLocation=_lastCurrentLocation - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * futureLocation;                   //@synthesize futureLocation=_futureLocation - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * lastFutureLocation;               //@synthesize lastFutureLocation=_lastFutureLocation - In the implementation block
@property (assign,nonatomic) CGPoint currentPoint;                                             //@synthesize currentPoint=_currentPoint - In the implementation block
@property (assign,nonatomic) CGPoint futurePoint;                                              //@synthesize futurePoint=_futurePoint - In the implementation block
-(void)setFuturePoint:(CGPoint)arg1 ;
-(id)futureLocation;
-(CGPoint)futurePoint;
-(void)setCurrentPoint:(CGPoint)arg1 ;
-(void)updateTourStatusWithCurrentLocation:(id)arg1 currentPoint:(CGPoint)arg2 futureLocation:(id)arg3 futurePoint:(CGPoint)arg4 ;
-(id)shortTourStatusAnnouncement;
-(id)longTourStatusAnnouncement;
-(id)lastCurrentLocation;
-(id)lastFutureLocation;
-(id)_tourStatusAnnouncementWithLength:(unsigned)arg1 ;
-(void)setLastCurrentLocation:(id)arg1 ;
-(void)setLastFutureLocation:(id)arg1 ;
-(void)setFutureLocation:(id)arg1 ;
-(id)currentLocation;
-(void)setCurrentLocation:(id)arg1 ;
-(void)dealloc;
-(CGPoint)currentPoint;
@end

