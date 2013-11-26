/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VideoUpload/VideoUpload-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface VUFooterContainerView : UIView {

	id _delegate;
	UIButton* _termsButton;

}

@property (assign,nonatomic) id delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * termsButton;              //@synthesize termsButton=_termsButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(id)termsButton;
-(void)setFrame:(CGRect)arg1 bypassDelegate:(BOOL)arg2 ;
-(void)setTermsButton:(id)arg1 ;
@end

