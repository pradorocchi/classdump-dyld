/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class CalendarModel, UINavigationController;

@interface SearchViewController : UIViewController {

	/*^block*/ id _doneTapped;
	CalendarModel* _model;
	UINavigationController* _embeddedNavigationController;

}

@property (nonatomic,copy) id doneTapped;                                                        //@synthesize doneTapped=_doneTapped - In the implementation block
@property (nonatomic,retain) CalendarModel * model;                                              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UINavigationController * embeddedNavigationController;              //@synthesize embeddedNavigationController=_embeddedNavigationController - In the implementation block
-(void)setEmbeddedNavigationController:(id)arg1 ;
-(id)embeddedNavigationController;
-(void)setDoneTapped:(/*^block*/ id)arg1 ;
-(/*^block*/ id)doneTapped;
-(id)initWithModel:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)model;
-(void)setModel:(id)arg1 ;
-(void).cxx_destruct;
@end

