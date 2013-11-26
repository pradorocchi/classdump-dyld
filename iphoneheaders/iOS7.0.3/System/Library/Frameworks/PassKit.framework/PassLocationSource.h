/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <passd/SQLiteEntity.h>

@interface PassLocationSource : SQLiteEntity
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2 locationSourcePID:(unsigned long long)arg3 ;
+(id)queryWithDatabase:(id)arg1 passPID:(unsigned long long)arg2 ;
+(id)queryWithDatabase:(id)arg1 locationSourcePID:(unsigned long long)arg2 ;
+(id)insertPassLocationSourceWithPass:(id)arg1 locationSource:(id)arg2 inDatabase:(id)arg3 ;
+(id)locationSourcePIDPredicate:(id)arg1 ;
+(id)passPIDPredicate:(unsigned long long)arg1 ;
+(id)databaseTable;
-(id)initWithPassPID:(unsigned long long)arg1 locationSourcePID:(unsigned long long)arg2 inDatabase:(id)arg3 ;
-(BOOL)deleteFromDatabase;
@end

