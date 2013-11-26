/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class MessageLoadButton, MessageLoadSplitter, UILabel;

@interface MessageLoadIndicator : UIView {

	MessageLoadButton* _control;
	MessageLoadSplitter* _splitter;
	UILabel* _label;

}
-(id)initWithDescription:(id)arg1 button:(id)arg2 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
@end

