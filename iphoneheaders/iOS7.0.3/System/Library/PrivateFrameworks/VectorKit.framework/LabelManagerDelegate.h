/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol LabelManagerDelegate <NSObject>
@required
-(void)labelManager:(LabelManager*)arg1 setNeedsLayout:(BOOL)arg2;
-(void)labelManager:(LabelManager*)arg1 setNeedsDisplay:(BOOL)arg2;
-(void)labelManager:(LabelManager*)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)labelManager:(LabelManager*)arg1 pendingArtworkIsReady:(BOOL)arg2;
@end

