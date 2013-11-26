/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iPodOut/iPodOut-Structs.h>
#import <UIKit/UILabel.h>

@class UIColor;

@interface iPodOutLabel : UILabel {

	UIColor* highlightedShadowColor;
	UIColor* savedShadowColor;
	UIColor* savedTextColor;
	CGSize highlightedShadowOffset;
	CGSize savedShadowOffset;

}

@property (nonatomic,retain) UIColor * highlightedShadowColor; 
@property (assign,nonatomic) CGSize highlightedShadowOffset; 
@property (nonatomic,retain) UIColor * savedShadowColor; 
@property (assign,nonatomic) CGSize savedShadowOffset; 
@property (nonatomic,retain) UIColor * savedTextColor; 
-(void)setHighlightedShadowColor:(id)arg1 ;
-(void)setHighlightedShadowOffset:(CGSize)arg1 ;
-(id)highlightedShadowColor;
-(CGSize)highlightedShadowOffset;
-(id)savedShadowColor;
-(CGSize)savedShadowOffset;
-(id)savedTextColor;
-(void)setSavedTextColor:(id)arg1 ;
-(void)setSavedShadowColor:(id)arg1 ;
-(void)setSavedShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void).cxx_destruct;
@end

