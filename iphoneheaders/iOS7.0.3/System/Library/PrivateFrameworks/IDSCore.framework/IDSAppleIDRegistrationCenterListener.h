/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol IDSAppleIDRegistrationCenterListener
@optional
-(void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;
-(void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(BOOL)arg6;
-(void)center:(id)arg1 failedRegionValidation:(id)arg2 error:(int)arg3 info:(id)arg4;
-(void)center:(id)arg1 startedAuthenticating:(id)arg2;
-(void)center:(id)arg1 noteRegistrationRequired:(id)arg2;
-(void)center:(id)arg1 failedAuthentication:(id)arg2 error:(int)arg3 info:(id)arg4;
-(void)center:(id)arg1 succeededAuthentication:(id)arg2;
-(void)center:(id)arg1 failedUnlinkHandleRequest:(id)arg2 handle:(id)arg3 error:(int)arg4 info:(id)arg5;
-(void)center:(id)arg1 succeededUnlinkHandleRequest:(id)arg2 handle:(id)arg3;
-(void)center:(id)arg1 failedLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3 error:(int)arg4 info:(id)arg5;
-(void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;
-(void)center:(id)arg1 failedEmailValidationRequest:(id)arg2 emailAddress:(id)arg3 error:(int)arg4 info:(id)arg5;
-(void)center:(id)arg1 succeededEmailValidationRequest:(id)arg2 emailAddress:(id)arg3;
@end

