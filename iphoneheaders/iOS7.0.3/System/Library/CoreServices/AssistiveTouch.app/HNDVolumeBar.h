/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDView.h>

@interface HNDVolumeBar : HNDView {

	float _progress;

}

@property (assign,nonatomic) float progress;              //@synthesize progress=_progress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
@end

