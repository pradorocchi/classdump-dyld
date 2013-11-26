/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKImageBrush.h>
#import <GameCenterUI/GKBrushIdentification.h>

@interface GKMacGameIconBrush : GKImageBrush <GKBrushIdentification> {

	CGSize _outputSize;

}

@property (assign,nonatomic) CGSize outputSize;              //@synthesize outputSize=_outputSize - In the implementation block
-(CGSize)sizeForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(id)renderedImageIdentifier;
-(CGSize)outputSize;
-(void)setOutputSize:(CGSize)arg1 ;
@end

