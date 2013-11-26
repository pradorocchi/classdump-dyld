/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIRemoteViewController.h>

@class MPMediaPickerController;

@interface MPRemoteMediaPickerController : _UIRemoteViewController {

	MPMediaPickerController* _mediaPickerController;

}

@property (assign,nonatomic,__weak) MPMediaPickerController * mediaPickerController;              //@synthesize mediaPickerController=_mediaPickerController - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setMediaPickerController:(id)arg1 ;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(id)mediaPickerController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void).cxx_destruct;
@end

