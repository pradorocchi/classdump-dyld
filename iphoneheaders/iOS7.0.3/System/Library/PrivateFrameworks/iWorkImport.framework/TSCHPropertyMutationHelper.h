/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface TSCHPropertyMutationHelper : NSObject
+(id)commandWithMutationTuples:(id)arg1 ;
+(void)setValue:(id)arg1 forProperty:(int)arg2 ofStyleOwner:(id)arg3 ;
+(id)commandWithStyleOwner:(id)arg1 setValue:(id)arg2 forProperty:(int)arg3 ;
+(void)applyMutations:(id)arg1 forStyleOwner:(id)arg2 withNonStylePropertyList:(id)arg3 toStylePropertyMap:(id)arg4 andNonStylePropertyMap:(id)arg5 ;
+(void)applyMutationsForImport:(id)arg1 forStyleOwner:(id)arg2 withNonStylePropertyList:(id)arg3 toStylePropertyMap:(id)arg4 andNonStylePropertyMap:(id)arg5 ;
+(id)commandWithStyleOwner:(id)arg1 setValue:(id)arg2 forProperty:(int)arg3 chartInfo:(id)arg4 ;
+(id)commandWithMutationTuples:(id)arg1 chartInfo:(id)arg2 ;
+(void)p_applyMutations:(id)arg1 forStyleOwner:(id)arg2 withNonStylePropertyList:(id)arg3 toStylePropertyMap:(id)arg4 andNonStylePropertyMap:(id)arg5 allowSpecificProperties:(BOOL)arg6 ;
+(id)styleSwapTuplesFromMutationTuples:(id)arg1 forImport:(BOOL)arg2 ;
+(id)commandWithMutationTuples:(id)arg1 forImport:(BOOL)arg2 ;
+(id)commandWithStyleOwner:(id)arg1 mutations:(id)arg2 ;
+(id)styleSwapTuplesFromMutationTuples:(id)arg1 ;
+(id)commandWithMutationTuple:(id)arg1 ;
+(id)commandWithStyleOwner:(id)arg1 mutationsMap:(id)arg2 ;
+(int)specificMutationPropertyForGeneric:(int)arg1 styleOwner:(id)arg2 allowSpecificProperties:(BOOL)arg3 ;
-(id)init;
@end

