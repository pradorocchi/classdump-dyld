/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SSProtocolConditionalContext, NSDictionary;

@interface SSProtocolConditionalEvaluator : NSObject {

	SSProtocolConditionalContext* _context;
	NSDictionary* _dictionary;

}
+(id)defaultConditionalContext;
+(void)setDefaultConditionalContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 conditionalContext:(id)arg2 ;
-(id)_dictionaryByEvaluatingWithForcedValue:(int)arg1 ;
-(id)_dictionaryByEvaluatingDictionary:(id)arg1 withForcedValue:(int)arg2 ;
-(id)_arrayByEvaluatingChildrenOfArray:(id)arg1 withForcedValue:(int)arg2 ;
-(int)_logicalOperatorForString:(id)arg1 ;
-(BOOL)_checkConditions:(id)arg1 withOperator:(id)arg2 ;
-(id)_dictionaryByEvaluatingChildrenOfDictionary:(id)arg1 withForcedValue:(int)arg2 ;
-(id)dictionaryByEvaluatingConditions;
-(id)dictionaryByRemovingConditions;
@end

