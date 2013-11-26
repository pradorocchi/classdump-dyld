/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString, UIViewController, SetupChoiceController, UIAlertView;

@interface SetupChoice : NSObject <UIAlertViewDelegate> {

	NSString* _localizedTitle;
	UIViewController* _nextController;
	id _identifier;
	SetupChoiceController* _owner;
	Class _nextControllerClass;
	/*^block*/ id _condition;
	UIAlertView* _alertView;
	/*^block*/ id _alertAction;

}

@property (nonatomic,retain) NSString * localizedTitle;                  //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) Class nextControllerClass;                  //@synthesize nextControllerClass=_nextControllerClass - In the implementation block
@property (nonatomic,retain) id identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id condition;                                 //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                    //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,copy) id alertAction;                               //@synthesize alertAction=_alertAction - In the implementation block
@property (nonatomic,retain) SetupChoiceController * owner;              //@synthesize owner=_owner - In the implementation block
-(id)initWithChoiceID:(id)arg1 title:(id)arg2 nextControllerClass:(Class)arg3 ;
-(void)setNextControllerClass:(Class)arg1 ;
-(void)setAlert:(id)arg1 condition:(/*^block*/ id)arg2 action:(/*^block*/ id)arg3 ;
-(void)testConditionWithController:(id)arg1 ;
-(Class)nextControllerClass;
-(void)setAlertView:(id)arg1 ;
-(id)alertView;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setAlertAction:(/*^block*/ id)arg1 ;
-(/*^block*/ id)alertAction;
-(/*^block*/ id)condition;
-(void)setCondition:(/*^block*/ id)arg1 ;
-(id)localizedTitle;
-(void)setLocalizedTitle:(id)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end

