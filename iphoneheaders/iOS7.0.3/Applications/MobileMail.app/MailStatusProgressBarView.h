/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MailStatusLabelView.h>

@class UIProgressView;

@interface MailStatusProgressBarView : MailStatusLabelView {

	UIProgressView* _progressView;
	float _filler;
	int _countUsedUp;
	float _lastProgress;
	int _lastUsedCount;
	int _lastUsedTotal;

}

@property (nonatomic,retain) UIProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
-(id)getStatusAndProgress:(float*)arg1 ;
-(void)dealloc;
-(void)removeFromSuperview;
-(void)update;
-(id)progressView;
-(void)setProgressView:(id)arg1 ;
@end

