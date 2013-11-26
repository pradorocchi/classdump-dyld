/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface NSSQLIntermediate : NSObject {

	NSSQLIntermediate* _scope;

}
+(BOOL)isSimpleKeypath:(id)arg1 ;
+(BOOL)expressionIsBasicKeypath:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isOrScoped;
-(id)initWithScope:(id)arg1 ;
-(BOOL)isSelectTargetScoped;
-(id)governingEntityForKeypathExpression:(id)arg1 ;
-(id)_lastScopedItem;
-(BOOL)isSimpleKeypath:(id)arg1 ;
-(BOOL)isVariableBasedKeypathScopedBySubquery:(id)arg1 ;
-(BOOL)isFunctionScoped;
-(void)_promoteJoinsForSubqueryScopedKeypaths;
-(id)fetchIntermediateForKeypathExpression:(id)arg1 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1 ;
-(id)fetchIntermediate;
-(id)governingAlias;
-(id)_generateSQLForExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForConstantValue:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForSubqueryExpression:(id)arg1 trailingKeypath:(id)arg2 inContext:(id)arg3 ;
-(BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)arg1 ;
-(BOOL)isHavingScoped;
-(BOOL)expressionIsBasicKeypath:(id)arg1 ;
-(id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1 ;
-(void)promoteJoinsInKeypathsForExpression:(id)arg1 ;
-(void)_promoteJoinsForKeypathExpression:(id)arg1 ;
-(void)_promoteJoinsForFunctionExpression:(id)arg1 ;
-(void)_promoteJoinsForAggregateExpression:(id)arg1 ;
-(void)_promoteJoinsForTernaryExpression:(id)arg1 ;
-(id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForConstantCollection:(id)arg1 inContext:(id)arg2 ;
-(BOOL)_canDoASubselectForExpression:(id)arg1 inContext:(id)arg2 ;
-(id)_generateSQLForFunctionExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForExpressionCollection:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForFetchExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForTernaryExpression:(id)arg1 allowToMany:(BOOL)arg2 inContext:(id)arg3 ;
-(id)scope;
@end

