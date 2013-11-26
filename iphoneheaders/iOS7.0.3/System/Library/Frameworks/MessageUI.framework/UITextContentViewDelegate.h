/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UITextContentViewDelegate <NSObject>
@optional
-(void)textContentViewDidBeginEditing:(id)arg1;
-(void)textContentViewDidEndEditing:(id)arg1;
-(BOOL)textContentViewShouldBeginEditing:(id)arg1;
-(BOOL)textContentViewShouldEndEditing:(id)arg1;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2;
-(BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textContentViewDidChange:(id)arg1;
-(void)textContentViewDidChangeSelection:(id)arg1;
@end

