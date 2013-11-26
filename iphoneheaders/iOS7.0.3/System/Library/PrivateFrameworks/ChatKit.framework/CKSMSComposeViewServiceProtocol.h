/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CKSMSComposeViewServiceProtocol <NSObject>
@required
-(void)forceMMS;
-(void)setCanEditRecipients:(BOOL)arg1;
-(void)insertTextPart:(id)arg1;
-(void)setPendingAddresses:(id)arg1;
-(void)setTextEntryContentsVisible:(BOOL)arg1;
-(void)setText:(id)arg1 addresses:(id)arg2;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
-(void)setUICustomizationData:(id)arg1;
-(void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
-(void)forceCancelComposition;
-(void)disableCameraAttachments;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
@end

