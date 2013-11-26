/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIActivityItemProvider.h>

@protocol SUActivityItemProviderDelegate, OS_dispatch_queue;
@class UIActivity, , NSObject, UIImage;

@interface SUActivityItemProvider : UIActivityItemProvider {

	UIActivity* _activity;
	<SUActivityItemProviderDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	id _lastProvidedItem;
	UIImage* _previewImage;

}

@property (__weak) <SUActivityItemProviderDelegate> * delegate; 
@property (setter=setSUActivity:,retain) UIActivity * suActivity; 
@property (readonly) id suLastProvidedItem; 
@property (setter=setSUPreviewImage:,retain) UIImage * suPreviewImage; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)item;
-(id)initWithPlaceholderItem:(id)arg1 ;
-(void)setSUActivity:(id)arg1 ;
-(id)suLastProvidedItem;
-(id)suPreviewImage;
-(id)suActivity;
-(void)setSUPreviewImage:(id)arg1 ;
@end

