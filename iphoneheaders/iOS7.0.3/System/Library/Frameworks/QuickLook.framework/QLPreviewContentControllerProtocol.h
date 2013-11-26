/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol QLPreviewContentControllerProtocol <NSObject>
@property (assign) <QLPreviewContentDataSource> * dataSource; 
@property (assign) <QLPreviewContentDelegate> * delegate; 
@property (assign) int previewMode; 
@required
-(void)setTransitioning:(BOOL)arg1 synchronizedWithBlock:(/*^block*/ id)arg2;
-(void)checkCurrentPreviewItem;
-(void)enterBackground;
-(void)becomeForeground;
-(void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
-(void)configureWithParameters:(id)arg1;
-(void)willChangeContentFrame;
-(void)setContentFrame:(CGRect)arg1;
-(void)forceResignFirstResponder;
-(void)togglePlayState;
-(id)printPageHelper;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1;
-(void)endScrubbing;
-(void)setDataSource:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)dataSource;
-(id)delegate;
-(void)setBlockRemoteImages:(BOOL)arg1;
-(id)printPageRenderer;
-(void)setLoadingTextForMissingFiles:(id)arg1;
-(void)setCurrentPreviewItemIndex:(int)arg1;
-(void)refreshCurrentPreviewItem;
-(int)currentPreviewItemIndex;
-(void)setPreviewMode:(int)arg1;
-(int)previewMode;
@end

