/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/CoreTimeMigrator.migrator/CoreTimeMigrator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataMigration/DataClassMigrator.h>

@interface TMDataMigrator : DataClassMigrator
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
@end

