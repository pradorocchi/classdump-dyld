/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIView.h>
#import <Social/SLSheetPreviewView.h>

@class NSArray, UIImage, UIActivityIndicatorView, NSMutableDictionary, UIImageView;

@interface SLSheetImagePreviewView : UIView <SLSheetPreviewView> {

	UIImage* _image;
	UIActivityIndicatorView* _activityView;
	NSMutableDictionary* _intrinsicSizes;
	BOOL _needsLayout;
	UIImageView* _imageView;
	NSArray* _principalAttachments;
	int _currentBarMetrics;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL isTranscoding; 
@property (nonatomic,retain) UIImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSArray * principalAttachments;              //@synthesize principalAttachments=_principalAttachments - In the implementation block
@property (assign,nonatomic) int currentBarMetrics;                       //@synthesize currentBarMetrics=_currentBarMetrics - In the implementation block
+(id)blankWebpageImage;
-(BOOL)isTranscoding;
-(void)setIsTranscoding:(BOOL)arg1 ;
-(id)principalAttachments;
-(void)setSize:(CGSize)arg1 forBarMetrics:(int)arg2 ;
-(void)barMetricsDidChange;
-(int)currentBarMetrics;
-(CGSize)sizeForBarMetrics:(int)arg1 ;
-(BOOL)previewDependsOnAttachment:(id)arg1 ;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(void)setCurrentBarMetrics:(int)arg1 ;
-(void)setPrincipalAttachments:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)image;
-(CGSize)intrinsicContentSize;
-(id)imageView;
-(void)setImageView:(id)arg1 ;
-(void).cxx_destruct;
@end

