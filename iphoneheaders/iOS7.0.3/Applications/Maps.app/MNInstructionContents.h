/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/MKInstructionContents.h>

@interface MNInstructionContents : MKInstructionContents {

	SCD_Struct_MN18 _options;
	BOOL _isSecondary;

}

@property (assign,nonatomic) int context; 
@property (nonatomic,readonly) int numSignsWanted; 
+(id)contentsWithRoute:(id)arg1 step:(id)arg2 options:(SCD_Struct_MN18*)arg3 isSecondary:(BOOL)arg4 ;
+(id)contentsWithRoute:(id)arg1 step:(id)arg2 context:(int)arg3 ;
+(id)contentsWithSubstep:(id)arg1 transportType:(int)arg2 context:(int)arg3 ;
+(id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2 context:(int)arg3 ;
-(id)_spokenWalkingInstructionForTurn;
-(id)_spokenWalkingInstructionForContinue;
-(id)_spokenWalkingInstructionForUTurn;
-(id)_spokenWalkingInstructionForRoundabout;
-(id)_spokenWalkingInstructionForStart;
-(int)numSignsWanted;
-(id)_signWalkingInstructionForTurnWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForContinueWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForUTurnWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForRoundaboutWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForStartWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForLeftWithShorterAlternatives:(id*)arg1 ;
-(id)_signWalkingInstructionForRightWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForContinue;
-(id)_signInstructionForContinueWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForStart;
-(id)_signInstructionForStartWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForTurn;
-(id)_signInstructionForTurnWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForBranch;
-(id)_signInstructionForBranchWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForUTurn;
-(id)_signInstructionForUTurnWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForFerry;
-(id)_signInstructionForFerryWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForArrival;
-(id)_signInstructionForArrivalWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForRoundabout;
-(id)_signInstructionForRoundaboutWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForExit;
-(id)_signInstructionForExitWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForChangeHighways;
-(id)_signInstructionForChangeHighwaysWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionFromSignposts;
-(id)instructionWithShorterAlternatives:(id*)arg1 ;
-(id)textForSetting:(int)arg1 ;
-(id)instruction;
-(BOOL)useRoadName;
-(id)_stringFromNameInfo:(id)arg1 ;
-(id)_exitNumberFromNameInfo:(id)arg1 ;
-(BOOL)useDestinationName;
-(BOOL)useIntersectionName;
-(BOOL)useTowardNames;
-(id)init;
-(id)description;
-(int)context;
-(void)setContext:(int)arg1 ;
@end

