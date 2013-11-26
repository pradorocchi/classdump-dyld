/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/SocialDataMigrator.migrator/SocialDataMigrator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataMigration/DataClassMigrator.h>

@interface SLDataMigrator : DataClassMigrator
-(void)_migrateTwitterData;
-(void)_migrateWeiboData;
-(void)_migrateTencentWeiboData;
-(id)_socialDirectory;
-(id)_oldTwitterDatabasePath;
-(id)_newTwitterDatabasePath;
-(id)_oldTwitterImagesFolderPath;
-(id)_newTwitterImagesFolderPath;
-(id)_oldTwitterFolderPath;
-(BOOL)_needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 service:(id)arg2 ;
-(id)_twitterDatabaseFileName;
-(id)_oldWeiboDatabasePath;
-(void)_removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 service:(id)arg2 ;
-(id)_newWeiboDatabasePath;
-(id)_oldWeiboImagesFolderPath;
-(id)_newWeiboImagesFolderPath;
-(id)_oldWeiboFolderPath;
-(id)_weiboDatabaseFileName;
-(id)_tencentWeiboImagesFolderPath;
-(id)_tencentWeiboDatabasePath;
-(id)_tencentWeiboDatabaseFileName;
-(void)_createSocialDataDirectoryIfNecessary;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
@end

