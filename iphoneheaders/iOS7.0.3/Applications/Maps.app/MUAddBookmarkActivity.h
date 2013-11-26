/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIActivity.h>
#import <Maps/AddBookmarkViewControllerDelegate.h>

@class AddBookmarkViewController, SearchResult, NSString;

@interface MUAddBookmarkActivity : UIActivity <AddBookmarkViewControllerDelegate> {

	AddBookmarkViewController* _addBookmarkViewController;
	SearchResult* _searchResult;
	NSString* _title;

}

@property (nonatomic,retain) SearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
-(void)setSearchResult:(id)arg1 ;
-(id)initWithSearchResult:(id)arg1 ;
-(void)addBookmarkControllerCancelled:(id)arg1 ;
-(void)addBookmarkControllerSaved:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(id)searchResult;
@end

