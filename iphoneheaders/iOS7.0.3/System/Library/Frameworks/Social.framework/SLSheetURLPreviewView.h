/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class UIImage, SLURLPreviewGenerator, CALayer;

@interface SLSheetURLPreviewView : SLSheetImagePreviewView {

	UIImage* _shadowImage;
	SLURLPreviewGenerator* _webPreviewGenerator;
	CALayer* _backgroundLayer;

}
-(void)generateAutomaticPreviewForURL:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end

