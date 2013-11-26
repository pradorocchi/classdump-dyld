/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface NotesTextureView : UIView {

	UIImage* _image;
	CGSize _phase;

}

@property (retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign) CGSize phase;                 //@synthesize phase=_phase - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(CGSize)phase;
-(void)setPhase:(CGSize)arg1 ;
-(id)image;
-(void).cxx_destruct;
@end

