/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol QLPreviewContentDataSource <NSObject>
@required
-(int)currentSourceUUIDForPreviewContentController:(id)arg1;
-(int)numberOfPreviewItemsInPreviewContentController:(id)arg1;
-(id)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2;
-(void)previewContentController:(id)arg1 previewItemAtIndex:(int)arg2 completionBlock:(/*^block*/ id)arg3;
@end

