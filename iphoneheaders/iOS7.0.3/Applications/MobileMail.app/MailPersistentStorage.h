/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableDictionary;

@interface MailPersistentStorage : NSObject {

	NSString* _filePath;
	NSMutableDictionary* _groups;

}
+(id)defaultFilePath;
+(void)wipePersistentStorage;
+(id)sharedStorage;
-(void)setFetchDate:(id)arg1 forSource:(id)arg2 ;
-(id)fetchDateForSource:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 inGroup:(id)arg3 ;
-(id)_objectForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inGroup:(id)arg3 ;
-(id)objectForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)touchLastLoadOlder;
-(void)clearLastLoadOlder;
-(id)lastLoadOlder;
-(void)searchedServer;
-(void)clearSearchedServer;
-(id)searchedServerDate;
-(void)save;
-(void)dealloc;
-(id)init;
-(id)initWithFilePath:(id)arg1 ;
@end

