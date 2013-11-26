/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class UIImage;

@interface SBDefaultImageInfo : NSObject {

	BOOL _hasSnapshot;
	int _launchingInterfaceOrientation;
	float _launchingScale;
	int _originalOrientation;
	int _currentOrientation;
	UIImage* _image;
	CGSize _launchingScreenSize;

}

@property (assign,nonatomic) int launchingInterfaceOrientation;              //@synthesize launchingInterfaceOrientation=_launchingInterfaceOrientation - In the implementation block
@property (assign,nonatomic) CGSize launchingScreenSize;                     //@synthesize launchingScreenSize=_launchingScreenSize - In the implementation block
@property (assign,nonatomic) float launchingScale;                           //@synthesize launchingScale=_launchingScale - In the implementation block
@property (assign,nonatomic) int originalOrientation;                        //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) int currentOrientation;                         //@synthesize currentOrientation=_currentOrientation - In the implementation block
@property (assign,nonatomic) BOOL hasSnapshot;                               //@synthesize hasSnapshot=_hasSnapshot - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
-(BOOL)hasSnapshot;
-(int)currentOrientation;
-(void)setLaunchingInterfaceOrientation:(int)arg1 ;
-(void)setLaunchingScale:(float)arg1 ;
-(void)setLaunchingScreenSize:(CGSize)arg1 ;
-(void)setCurrentOrientation:(int)arg1 ;
-(int)launchingInterfaceOrientation;
-(float)launchingScale;
-(CGSize)launchingScreenSize;
-(void)setHasSnapshot:(BOOL)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)description;
-(id)image;
-(void)setOriginalOrientation:(int)arg1 ;
-(int)originalOrientation;
@end

