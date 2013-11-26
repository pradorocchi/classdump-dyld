/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VKStylesheetObserver <NSObject>
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
@optional
-(void)prepareForStylesheetTransitionToMapDisplayStyle:(int)arg1 withReadinessBlock:(/*^block*/ id)arg2;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)stylesheetDoneChanging;

@required
+(BOOL)reloadOnStylesheetChange;
-(id)stylesheet;
@end

