/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ViewReuseManagerDelegate;
#import <MobileSafari/MobileSafari-Structs.h>
@class NSMutableArray, NSMutableSet, , NSArray;

@interface ViewReuseManager : NSObject {

	NSMutableArray* _trackedViews;
	NSMutableSet* _reusableViews;
	NSMutableSet* _viewsPendingRecycling;
	int _firstPreviouslyVisibleRepresentedObjectIndex;
	BOOL _alwaysSendPrepareForReuse;
	Class _reusableViewClass;
	<ViewReuseManagerDelegate>* _delegate;

}

@property (nonatomic,readonly) Class reusableViewClass;                          //@synthesize reusableViewClass=_reusableViewClass - In the implementation block
@property (assign,nonatomic) <ViewReuseManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL alwaysSendPrepareForReuse;                     //@synthesize alwaysSendPrepareForReuse=_alwaysSendPrepareForReuse - In the implementation block
@property (nonatomic,readonly) NSArray * trackedViews;                           //@synthesize trackedViews=_trackedViews - In the implementation block
-(id)initWithReusableViewClass:(Class)arg1 ;
-(void)setAlwaysSendPrepareForReuse:(BOOL)arg1 ;
-(void)removeViewFromTrackedViews:(id)arg1 ;
-(void)insertView:(id)arg1 inTrackedViewsAtIndex:(int)arg2 ;
-(id)trackedViews;
-(void)updateTrackedViewsForRepresentedObjectsInRange:(NSRange)arg1 ;
-(void)_recycleViewsInCollection:(id)arg1 ;
-(void)_addTrackedViewForRepresentedObjectAtIndex:(unsigned)arg1 ;
-(void)_recycleView:(id)arg1 ;
-(void)recycleView:(id)arg1 ;
-(id)makeView;
-(Class)reusableViewClass;
-(BOOL)alwaysSendPrepareForReuse;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
@end

