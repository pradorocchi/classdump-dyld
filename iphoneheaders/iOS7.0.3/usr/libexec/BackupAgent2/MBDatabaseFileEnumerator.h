/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSEnumerator.h>

@class MBDecoder, MBDatabase;

@interface MBDatabaseFileEnumerator : NSEnumerator {

	MBDecoder* _decoder;
	MBDatabase* _database;

}
-(id)initWithDecoder:(id)arg1 database:(id)arg2 ;
-(void)dealloc;
-(id)nextObject;
@end

