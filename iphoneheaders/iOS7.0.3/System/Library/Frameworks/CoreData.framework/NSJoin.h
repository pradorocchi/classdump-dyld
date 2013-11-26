/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface NSJoin : NSObject <NSCoding, NSCopying> {

	NSString* _sourceAttributeName;
	NSString* _destinationAttributeName;

}
+(id)joinWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2 ;
-(id)initWithSourceAttributeName:(id)arg1 destinationAttributeName:(id)arg2 ;
-(id)sourceAttributeName;
-(id)destinationAttributeName;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

