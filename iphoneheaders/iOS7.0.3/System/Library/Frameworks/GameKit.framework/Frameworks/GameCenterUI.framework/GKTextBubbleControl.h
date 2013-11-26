/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKValueWithCaptionBubbleControl.h>

@class NSString, NSAttributedString, GKLabel;

@interface GKTextBubbleControl : GKValueWithCaptionBubbleControl

@property (nonatomic,@dynamic,retain) NSString * text; 
@property (nonatomic,@dynamic,retain) NSAttributedString * attributedText; 
@property (nonatomic,@dynamic,retain) GKLabel * textLabel; 
-(void)setTextLabel:(id)arg1 ;
-(void)setCaptionText:(id)arg1 ;
-(void)setAttributedCaptionText:(id)arg1 ;
-(void)setCaptionLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)text;
-(void)setAttributedText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(id)textLabel;
@end

