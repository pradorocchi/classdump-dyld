/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicCarDisplayUI/MSSectionedTableViewController.h>
#import <AddressBookUI/AFContextProvider.h>

@interface MSAlbumsTableViewController : MSSectionedTableViewController <AFContextProvider> {

	BOOL _shouldShowArtistSubtitle;

}

@property (assign,nonatomic) BOOL shouldShowArtistSubtitle;              //@synthesize shouldShowArtistSubtitle=_shouldShowArtistSubtitle - In the implementation block
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(id)_representedCollectionForQuery;
-(BOOL)shouldShowArtistSubtitle;
-(void)setShouldShowArtistSubtitle:(BOOL)arg1 ;
@end

