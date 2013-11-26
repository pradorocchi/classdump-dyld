/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <passd/passd-Structs.h>
#import <passd/SQLitePropertyPredicate.h>
#import <CoreFoundation/NSCopying.h>

@interface SQLiteNullPredicate : SQLitePropertyPredicate <NSCopying> {

	BOOL _matchesNull;

}

@property (nonatomic,readonly) BOOL matchesNull;              //@synthesize matchesNull=_matchesNull - In the implementation block
+(id)isNotNullPredicateWithProperty:(id)arg1 ;
+(id)isNullPredicateWithProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)matchesNull;
@end

