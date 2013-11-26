/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSCompoundPredicateOperator : NSPredicateOperator
+(id)notPredicateOperator;
+(id)andPredicateOperator;
+(id)orPredicateOperator;
-(id)minimalFormInContext:(id)arg1 ofPredicates:(id)arg2 ;
-(id)predicateFormat;
-(BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 substitutionVariables:(id)arg3 ;
-(BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)symbol;
@end

