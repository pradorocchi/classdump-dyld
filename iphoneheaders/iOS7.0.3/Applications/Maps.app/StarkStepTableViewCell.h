/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/StarkTableViewCell.h>

@class NSArray;

@interface StarkStepTableViewCell : StarkTableViewCell {

	NSArray* _instructionsAlternatives;

}

@property (nonatomic,copy) NSArray * instructionsAlternatives;              //@synthesize instructionsAlternatives=_instructionsAlternatives - In the implementation block
+(Class)layoutClass;
-(void)setInstructionsAlternatives:(id)arg1 ;
-(void)setInstructions:(id)arg1 alternatives:(id)arg2 ;
-(id)instructionsAlternatives;
-(void)layoutSubviews;
@end

