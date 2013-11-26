/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CommunicationsSetupUI/CNFRegAuthorizedAccountWebViewController.h>

@protocol CNFRegChangeAccountPasswordDelegate;
@class , NSString;

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController {

	<CNFRegChangeAccountPasswordDelegate>* _delegate;
	NSString* _appleID;

}

@property (nonatomic,copy) NSString * appleID;                                              //@synthesize appleID=_appleID - In the implementation block
@property (assign,nonatomic) <CNFRegChangeAccountPasswordDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)appleID;
-(void)setAppleID:(id)arg1 ;
-(id)bagKey;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithRegController:(id)arg1 appleID:(id)arg2 ;
-(id)logName;
-(id)overrideURLForURL:(id)arg1 ;
-(void)setHeadersForRequest:(id)arg1 ;
-(BOOL)canSendURLRequest:(id)arg1 ;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
@end

