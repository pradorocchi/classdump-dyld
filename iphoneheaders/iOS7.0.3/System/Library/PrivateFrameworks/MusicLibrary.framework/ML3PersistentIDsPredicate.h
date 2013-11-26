/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/ML3Predicate.h>

@interface ML3PersistentIDsPredicate : ML3Predicate {

	unsigned _count;
	long long* _persistentIDs;
	BOOL _shouldContain;

}

@property (nonatomic,readonly) BOOL shouldContain;              //@synthesize shouldContain=_shouldContain - In the implementation block
+(id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned)arg2 shouldContain:(BOOL)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(id)initWithPersistentIDs:(const long long*)arg1 count:(unsigned)arg2 shouldContain:(BOOL)arg3 ;
-(BOOL)shouldContain;
@end

