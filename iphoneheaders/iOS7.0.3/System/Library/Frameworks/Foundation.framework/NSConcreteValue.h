/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSConcreteValue : NSValue {

	unsigned _specialFlags;
	void* typeInfo;

}
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(const void*)_value;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)getValue:(void*)arg1 ;
-(const char*)objCType;
-(BOOL)isEqualToValue:(id)arg1 ;
@end

