/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@interface FeedbackHandler : NSObject <SymptomAdditionalProtocol>
+(id)sharedInstance;
+(int)configure:(id)arg1 ;
+(id)evaluate:(id)arg1 forThreshold:(int)arg2 ;
+(bool)noteSymptom:(id)arg1 ;
-(int)configure:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(int)arg2 ;
-(bool)noteSymptom:(id)arg1 ;
@end

