/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <MobileMail/MFMessageViewingContextDelegate.h>

@class MFMessageViewingContext, MFMailMessage, MessageContentAreaLayer;

@interface TransferMessageViewController : UIViewController <MFMessageViewingContextDelegate> {

	MFMessageViewingContext* _messageViewingContext;
	MFMailMessage* _message;

}

@property (nonatomic,retain) MFMailMessage * message;                                          //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) MessageContentAreaLayer * messageContentAreaLayer; 
-(id)messageContentAreaLayer;
-(void)dealloc;
-(id)message;
-(void)loadView;
-(void)setMessage:(id)arg1 ;
@end

