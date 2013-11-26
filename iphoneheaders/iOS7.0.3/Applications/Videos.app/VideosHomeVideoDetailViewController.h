/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Videos/Videos-Structs.h>
#import <Videos/VideosDetailViewController.h>

@class NSSet, NSString;

@interface VideosHomeVideoDetailViewController : VideosDetailViewController {

	NSSet* _codecs;
	NSString* _dimensions;

}
-(CGSize)posterSizeForImage:(id)arg1 ;
-(void)_setNeedsReload;
-(id)initWithMediaItem:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(id)subtitleText;
-(void).cxx_destruct;
@end

