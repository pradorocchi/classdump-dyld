/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/RUILoaderDelegate.h>
#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>
#import <GameCenterUI/GKRemoteUIAuxiliaryViewDelegate.h>

@class NSError, NSString, NSData, NSMutableArray, UINavigationController, NSArray, RUILoader, NSURL;

@interface GKRemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, GKRemoteUIAuxiliaryViewDelegate> {

	BOOL _loading;
	BOOL _shouldApplyGameCenterTheme;
	BOOL _accountChanged;
	BOOL _previousUseCustomBackButtonActionValue;
	BOOL _loadingInitialUI;
	BOOL _complete;
	/*^block*/ id _completionHandler;
	NSError* _error;
	NSString* _authToken;
	NSData* _pushToken;
	NSString* _appleID;
	NSString* _playerID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _alias;
	NSMutableArray* _objectModels;
	UINavigationController* _navigationController;
	NSArray* _staticViewControllers;
	RUILoader* _loader;
	GKRemoteUIController* _presentedRemoteUIController;
	NSURL* _url;
	/*^block*/ id _loadHandler;
	int _layoutStyle;

}

@property (nonatomic,copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                             //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyGameCenterTheme;                                          //@synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme - In the implementation block
@property (nonatomic,readonly) NSString * bagKey; 
@property (nonatomic,readonly) NSURL * fallbackURL; 
@property (nonatomic,retain) NSString * authToken;                                                     //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) NSData * pushToken;                                                       //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) NSString * appleID;                                                       //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * playerID;                                                      //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * alias;                                                         //@synthesize alias=_alias - In the implementation block
@property (assign,nonatomic) BOOL accountChanged;                                                      //@synthesize accountChanged=_accountChanged - In the implementation block
@property (nonatomic,retain) NSMutableArray * objectModels;                                            //@synthesize objectModels=_objectModels - In the implementation block
@property (assign,nonatomic) UINavigationController * navigationController;                            //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) NSArray * staticViewControllers;                                          //@synthesize staticViewControllers=_staticViewControllers - In the implementation block
@property (nonatomic,retain) RUILoader * loader;                                                       //@synthesize loader=_loader - In the implementation block
@property (nonatomic,retain) GKRemoteUIController * presentedRemoteUIController;                       //@synthesize presentedRemoteUIController=_presentedRemoteUIController - In the implementation block
@property (assign,nonatomic) BOOL previousUseCustomBackButtonActionValue;                              //@synthesize previousUseCustomBackButtonActionValue=_previousUseCustomBackButtonActionValue - In the implementation block
@property (assign,nonatomic) BOOL loadingInitialUI;                                                    //@synthesize loadingInitialUI=_loadingInitialUI - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                             //@synthesize loadHandler=_loadHandler - In the implementation block
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,nonatomic) int layoutStyle;                                                          //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL complete;                                                            //@synthesize complete=_complete - In the implementation block
+(id)remoteUIController;
-(void)finishLoadingWithError:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setPlayerID:(id)arg1 ;
-(id)playerID;
-(id)alias;
-(int)preferredLayoutStyle;
-(void)pushObjectModel:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithObjectModel:(id)arg1 ;
-(id)authToken;
-(id)appleID;
-(BOOL)previousUseCustomBackButtonActionValue;
-(void)setStaticViewControllers:(id)arg1 ;
-(id)objectModels;
-(int)layoutStyle;
-(BOOL)shouldApplyGameCenterTheme;
-(id)fallbackURL;
-(void)setAppleID:(id)arg1 ;
-(void)setAuthToken:(id)arg1 ;
-(void)setPushToken:(id)arg1 ;
-(void)setLoadHandler:(/*^block*/ id)arg1 ;
-(void)setLoadingInitialUI:(BOOL)arg1 ;
-(id)postBodyForInitialLoad;
-(void)loadURL:(id)arg1 postBody:(id)arg2 ;
-(void)setLoading:(BOOL)arg1 ;
-(/*^block*/ id)loadHandler;
-(void)fireCompletionHandler;
-(id)postbackDataForDictionary:(id)arg1 ;
-(void)loadURL:(id)arg1 postData:(id)arg2 ;
-(void)didLoadURL:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)setAlias:(id)arg1 ;
-(void)setAccountChanged:(BOOL)arg1 ;
-(void)updateAccountAndMarkComplete:(BOOL)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)staticViewControllers;
-(int)indexOfVisiblePage;
-(id)presentedRemoteUIController;
-(void)setPresentedRemoteUIController:(id)arg1 ;
-(void)presentInParentNavigationController:(id)arg1 animated:(BOOL)arg2 ;
-(void)replaceObjectModelAtIndex:(unsigned)arg1 withObjectObjectModel:(id)arg2 ;
-(void)popObjectModelAnimated:(BOOL)arg1 ;
-(void)presentObjectModel:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)loadingInitialUI;
-(void)performAction:(int)arg1 withObjectModel:(id)arg2 ;
-(void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)updatePostbackDictionary:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(id)addThemeInfoToAttributes:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(BOOL)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2 ;
-(void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(BOOL)arg3 ;
-(void)objectModelDidChange:(id)arg1 ;
-(id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3 ;
-(id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3 ;
-(void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3 ;
-(void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3 ;
-(void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3 ;
-(Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2 ;
-(Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2 ;
-(void)auxiliaryView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)auxiliaryView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 ;
-(void)configureFromBagKey:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)loadInitialRemoteUIWithHandler:(/*^block*/ id)arg1 ;
-(id)bagKey;
-(BOOL)loading;
-(void)setShouldApplyGameCenterTheme:(BOOL)arg1 ;
-(id)pushToken;
-(BOOL)accountChanged;
-(void)setObjectModels:(id)arg1 ;
-(void)setPreviousUseCustomBackButtonActionValue:(BOOL)arg1 ;
-(void)setLayoutStyle:(int)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isUserInteractionEnabled;
-(/*^block*/ id)completionHandler;
-(id)navigationController;
-(id)viewControllers;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)complete;
-(void)setLoader:(id)arg1 ;
-(id)loader;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)error;
-(void)setNavigationController:(id)arg1 ;
@end
