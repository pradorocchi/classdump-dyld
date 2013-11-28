/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUISearchFieldDelegate.h>

@class SKUIClientContext, UIViewController, SKUISearchFieldController;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate> {

	SKUIClientContext* _clientContext;
	UIViewController* _parentViewController;
	SKUISearchFieldController* _searchFieldController;

}

@property (nonatomic,readonly) UIViewController * parentViewController;                        //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUISearchFieldController * searchFieldController; 
-(void)dealloc;
-(id)parentViewController;
-(id)clientContext;
-(void)setNumberOfSearchResults:(int)arg1 ;
-(id)_searchFieldController;
-(id)initWithParentViewController:(id)arg1 ;
-(id)newSearchFieldBarItem;
-(void)_termDidChangeNotification:(id)arg1 ;
-(void)_searchFieldController:(id)arg1 requestSearchWithURL:(id)arg2 orSearchTerm:(id)arg3 ;
-(id)_existingSharedResultsViewController;
-(id)_sharedResultsViewController;
-(void)searchFieldController:(id)arg1 requestSearchWithURL:(id)arg2 ;
-(void)searchFieldController:(id)arg1 requestSearchWithSearchTerm:(id)arg2 ;
-(BOOL)searchFieldControllerShouldBeginEditing:(id)arg1 ;
-(void)setSearchFieldPlaceholderText:(id)arg1 ;
-(void)setSearchFieldText:(id)arg1 ;
-(void).cxx_destruct;
-(id)searchFieldController;
-(void)setClientContext:(id)arg1 ;
@end
