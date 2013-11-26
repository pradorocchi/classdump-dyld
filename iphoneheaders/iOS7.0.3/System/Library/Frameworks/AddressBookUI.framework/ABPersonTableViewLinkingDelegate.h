/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABPersonLinkingUIDelegate.h>

@class NSMutableArray, ABPersonTableViewDataSource, ABPersonViewControllerHelper, NSArray;

@interface ABPersonTableViewLinkingDelegate : NSObject <ABPersonLinkingUIDelegate> {

	NSMutableArray* _linkedInfos;
	int _currentIndexInLinkedInfos;
	BOOL _ignoresReloadLinkedInfos;
	BOOL _shouldAllowLinkingAnotherContact;
	BOOL _hasLinkChanges;
	BOOL _shouldShowLinkingUIOnCard;
	BOOL _showsLinkedPeople;
	BOOL _appearsInLinkingPeoplePicker;
	BOOL _updateShouldAllowLinkingAnotherContact;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonViewControllerHelper* _helper;

}

@property (nonatomic,readonly) NSArray * linkedInfos;                                  //@synthesize linkedInfos=_linkedInfos - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkedPeople;                              //@synthesize showsLinkedPeople=_showsLinkedPeople - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkingUIOnCard;                           //@synthesize shouldShowLinkingUIOnCard=_shouldShowLinkingUIOnCard - In the implementation block
@property (assign,nonatomic) BOOL appearsInLinkingPeoplePicker;                        //@synthesize appearsInLinkingPeoplePicker=_appearsInLinkingPeoplePicker - In the implementation block
@property (assign,nonatomic) BOOL updateShouldAllowLinkingAnotherContact;              //@synthesize updateShouldAllowLinkingAnotherContact=_updateShouldAllowLinkingAnotherContact - In the implementation block
@property (nonatomic,readonly) BOOL hasLinkChanges;                                    //@synthesize hasLinkChanges=_hasLinkChanges - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper;                  //@synthesize helper=_helper - In the implementation block
-(id)helper;
-(void)setShouldShowLinkedPeople:(BOOL)arg1 ;
-(void)setShouldShowLinkingUIOnCard:(BOOL)arg1 ;
-(void)setAppearsInLinkingPeoplePicker:(BOOL)arg1 ;
-(BOOL)shouldShowLinkedPeople;
-(void)setUpdateShouldAllowLinkingAnotherContact:(BOOL)arg1 ;
-(id)initWithHelper:(id)arg1 ;
-(BOOL)shouldAllowLinkingAnotherContact;
-(int)numberOfLinkedCardRows;
-(BOOL)shouldIncludeLinkingUISectionWhenEditing:(BOOL)arg1 ;
-(id)sourceNameForCardAtRow:(int)arg1 ;
-(id)personNameForCardAtRow:(int)arg1 ;
-(BOOL)manuallyUnlinkCardAtRow:(int)arg1 ;
-(BOOL)canUnlinkCardAtRow:(int)arg1 ;
-(BOOL)shouldShowLinkingUIOnCard;
-(int)indexOfLinkedInfoAtRow:(int)arg1 ;
-(id)newLinkedInfoForPerson:(id)arg1 ;
-(BOOL)reloadLinkedInfos;
-(BOOL)isLinkedCard;
-(void)_finalizeLinkChanges;
-(id)linkedInfoAtRow:(int)arg1 ;
-(BOOL)appearsInLinkingPeoplePicker;
-(void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2 ;
-(BOOL)manuallyLinkPerson:(id)arg1 ;
-(BOOL)shouldAllowLinkingPersonWithRecordID:(int)arg1 ;
-(id)newPersonViewControllerForLinkedCardAtRow:(int)arg1 ;
-(id)newPeoplePickerForLinking;
-(id)sourceNameForCurrentCard;
-(void)reloadLinkingUI;
-(id)allNonUnifiedPeople;
-(BOOL)hasLinkChanges;
-(id)linkedInfos;
-(BOOL)updateShouldAllowLinkingAnotherContact;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
@end

