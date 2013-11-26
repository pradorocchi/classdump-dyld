/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/StepByStepUIViewController.h>
#import <AirPortAssistant/TableViewManagerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class NSString, RecommendationActionController;

@interface StepByStepUIViewController_Create_Config : StepByStepUIViewController <TableViewManagerDelegate, UIPopoverControllerDelegate> {

	NSString* _wifiName;
	NSString* _personalizedBaseName;
	NSString* _basePassword;
	NSString* _basePasswordVerify;
	NSString* _wifiPassword;
	NSString* _wifiPasswordVerify;
	NSString* _diskPassword;
	NSString* _diskPasswordVerify;
	BOOL useSinglePassword;
	BOOL hasDisk;
	BOOL useDifferentDiskPassword;
	RecommendationActionController* actionController;

}

@property (nonatomic,copy) NSString * wifiName;                                              //@synthesize wifiName=_wifiName - In the implementation block
@property (nonatomic,copy) NSString * personalizedBaseName;                                  //@synthesize personalizedBaseName=_personalizedBaseName - In the implementation block
@property (nonatomic,copy) NSString * basePassword;                                          //@synthesize basePassword=_basePassword - In the implementation block
@property (nonatomic,copy) NSString * basePasswordVerify;                                    //@synthesize basePasswordVerify=_basePasswordVerify - In the implementation block
@property (nonatomic,copy) NSString * wifiPassword;                                          //@synthesize wifiPassword=_wifiPassword - In the implementation block
@property (nonatomic,copy) NSString * wifiPasswordVerify;                                    //@synthesize wifiPasswordVerify=_wifiPasswordVerify - In the implementation block
@property (nonatomic,copy) NSString * diskPassword;                                          //@synthesize diskPassword=_diskPassword - In the implementation block
@property (nonatomic,copy) NSString * diskPasswordVerify;                                    //@synthesize diskPasswordVerify=_diskPasswordVerify - In the implementation block
@property (assign,nonatomic) BOOL useSinglePassword; 
@property (assign,nonatomic) BOOL hasDisk; 
@property (assign,nonatomic) BOOL useDifferentDiskPassword; 
@property (nonatomic,retain) RecommendationActionController * actionController; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned)arg3 toString:(id)arg4 ;
-(void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned)arg2 isOn:(BOOL)arg3 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg1 ;
-(void)setupInitialTableHeaderConfiguration;
-(void)setupTable;
-(void)setUseSinglePassword:(BOOL)arg1 ;
-(void)setHasDisk:(BOOL)arg1 ;
-(void)setPersonalizedBaseName:(id)arg1 ;
-(id)personalizedBaseName;
-(void)setWifiName:(id)arg1 ;
-(void)setWifiPassword:(id)arg1 ;
-(id)wifiPassword;
-(void)setWifiPasswordVerify:(id)arg1 ;
-(void)setBasePassword:(id)arg1 ;
-(id)basePassword;
-(void)setBasePasswordVerify:(id)arg1 ;
-(BOOL)hasDisk;
-(void)setDiskPassword:(id)arg1 ;
-(id)diskPassword;
-(void)setDiskPasswordVerify:(id)arg1 ;
-(BOOL)useSinglePassword;
-(void)setUseDifferentDiskPassword:(BOOL)arg1 ;
-(id)actionController;
-(void)setActionController:(id)arg1 ;
-(id)wifiName;
-(void)updateTable;
-(void)validateAndUpdateNextButton;
-(id)wifiPasswordVerify;
-(id)basePasswordVerify;
-(BOOL)useDifferentDiskPassword;
-(id)diskPasswordVerify;
-(BOOL)validateAndSetValues;
-(void)updateTableForSinglePassword;
-(void)updateTableForMultiplePasswords;
-(void)addDiskPasswordSection;
-(void)updateSinglePasswordSwitchExplanation:(BOOL)arg1 ;
@end

