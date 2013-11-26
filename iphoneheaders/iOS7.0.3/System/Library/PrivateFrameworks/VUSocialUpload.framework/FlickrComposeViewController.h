/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/SLComposeServiceViewController.h>
#import <VUSocialUpload/FlickrComposeOptionViewDelegate.h>

@class UIImageView, SLSheetAction, FlickrPhotoSetController, NSString, FlickrPhotoSetManager, FlickrAudienceController, ACAccountStore, ACAccount;

@interface FlickrComposeViewController : SLComposeServiceViewController <FlickrComposeOptionViewDelegate> {

	UIImageView* _logoView;
	BOOL _hasFlickrAccount;
	SLSheetAction* _photoSetAction;
	FlickrPhotoSetController* _photoSetController;
	NSString* _photoSetTitle;
	long long _photoSetID;
	FlickrPhotoSetManager* _manager;
	SLSheetAction* _audienceAction;
	FlickrAudienceController* _audienceController;
	int _audience;
	ACAccountStore* _accountStore;
	ACAccount* _flickrAccount;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * flickrAccount;                  //@synthesize flickrAccount=_flickrAccount - In the implementation block
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)send;
-(id)sheetActions;
-(void)setFlickrAccount:(id)arg1 ;
-(unsigned)postVisibility;
-(id)flickrAccount;
-(void)flickrComposeOptionView:(id)arg1 didFinishWithSelection:(id)arg2 ;
@end

