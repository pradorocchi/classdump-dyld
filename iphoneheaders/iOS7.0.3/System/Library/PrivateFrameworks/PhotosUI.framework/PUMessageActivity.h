/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIMessageActivity.h>
#import <PhotosUI/PUActivity.h>

@class PUActivityItemSourceController;

@interface PUMessageActivity : UIMessageActivity <PUActivity> {

	PUActivityItemSourceController* _itemSourceController;

}

@property (assign,nonatomic,__weak) PUActivityItemSourceController * itemSourceController;              //@synthesize itemSourceController=_itemSourceController - In the implementation block
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)setItemSourceController:(id)arg1 ;
-(id)itemSourceController;
-(void).cxx_destruct;
@end

