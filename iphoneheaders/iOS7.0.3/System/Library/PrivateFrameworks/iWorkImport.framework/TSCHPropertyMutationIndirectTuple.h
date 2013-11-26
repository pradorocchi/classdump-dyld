/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHPropertyMutationTuple.h>

@interface TSCHPropertyMutationIndirectTuple : TSCHPropertyMutationTuple {

	int mStyleOwnerType;
	unsigned mStyleOwnerIndex;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned index; 
-(id)initWithStyleOwner:(id)arg1 mutations:(id)arg2 ;
-(id)styleOwner;
-(SCD_Struct_TS452)styleOwnerRef;
-(id)initWithStyleOwnerType:(int)arg1 index:(unsigned)arg2 inChart:(id)arg3 mutations:(id)arg4 ;
-(id)indirectTuple;
-(int)type;
-(unsigned)index;
@end

