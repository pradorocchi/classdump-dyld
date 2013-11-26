/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UISaveToCameraRollActivity.h>

@protocol MFAttachmentHandlingDelegate;
@class ;

@interface MessageSaveToCameraRollActivity : UISaveToCameraRollActivity {

	<MFAttachmentHandlingDelegate>* _attachmentHandlingDelegate;
	int _context;

}

@property (assign,nonatomic) <MFAttachmentHandlingDelegate> * attachmentHandlingDelegate;              //@synthesize attachmentHandlingDelegate=_attachmentHandlingDelegate - In the implementation block
@property (assign,nonatomic) int context;                                                              //@synthesize context=_context - In the implementation block
-(id)attachmentHandlingDelegate;
-(void)setAttachmentHandlingDelegate:(id)arg1 ;
-(id)initWithAttachmentHandlingDelegate:(id)arg1 context:(int)arg2 ;
-(id)init;
-(int)context;
-(void)setContext:(int)arg1 ;
-(id)_activityImage;
-(id)activityType;
-(id)_beforeActivity;
@end

