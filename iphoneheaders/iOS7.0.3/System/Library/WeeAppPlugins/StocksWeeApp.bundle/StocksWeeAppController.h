/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/WeeAppPlugins/StocksWeeApp.bundle/StocksWeeApp
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StocksWeeApp/StocksWeeApp-Structs.h>
#import <SpringBoardUIServices/_SBUIWidgetViewController.h>

@class StocksWeeAppListView, NSTimer;

@interface StocksWeeAppController : _SBUIWidgetViewController {

	StocksWeeAppListView* _weeAppView;
	BOOL _isReachable;
	BOOL _stocksLoaded;
	NSTimer* _updateStockDataTimer;

}
-(id)launchURLForTapLocation:(CGPoint)arg1 ;
-(id)_weeAppView;
-(void)_showAllChanged:(id)arg1 ;
-(void)_updateStockData;
-(void)_initStockData;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)unloadView;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_stopUpdateTimer;
-(void)_startUpdateTimer;
-(CGSize)preferredViewSize;
-(void)hostDidPresent;
-(void)hostDidDismiss;
-(void).cxx_destruct;
@end

