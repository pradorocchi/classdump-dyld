/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIPrintInteractionControllerDelegate <NSObject>
@optional
-(void)printInteractionControllerWillPresentPrinterOptions:(id)arg1;
-(id)printInteractionControllerParentViewController:(id)arg1;
-(void)printInteractionControllerDidPresentPrinterOptions:(id)arg1;
-(void)printInteractionControllerWillDismissPrinterOptions:(id)arg1;
-(void)printInteractionControllerDidDismissPrinterOptions:(id)arg1;
-(id)printInteractionController:(id)arg1 choosePaper:(id)arg2;
-(float)printInteractionController:(id)arg1 cutLengthForPaper:(id)arg2;
-(void)printInteractionControllerWillStartJob:(id)arg1;
-(void)printInteractionControllerDidFinishJob:(id)arg1;
@end

