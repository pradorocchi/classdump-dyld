/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@interface NSConstantValueExpression : NSExpression {

	id constantValue;

}
+(BOOL)supportsSecureCoding;
-(id)constantValue;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicateFormat;
-(id)expressionValueWithObject:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithObject:(id)arg1 ;
@end

