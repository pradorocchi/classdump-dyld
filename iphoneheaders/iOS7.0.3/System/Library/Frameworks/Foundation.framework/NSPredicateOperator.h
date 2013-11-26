/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {

	unsigned _operatorType;
	unsigned _modifier;

}
+(id)operatorWithType:(unsigned)arg1 modifier:(unsigned)arg2 options:(unsigned)arg3 ;
+(id)_newOperatorWithType:(unsigned)arg1 modifier:(unsigned)arg2 options:(unsigned)arg3 ;
+(SEL)_getSelectorForType:(unsigned)arg1 ;
+(id)_getSymbolForType:(unsigned)arg1 ;
+(id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned)arg2 ;
+(BOOL)supportsSecureCoding;
-(unsigned)operatorType;
-(void)acceptVisitor:(id)arg1 flags:(unsigned)arg2 ;
-(unsigned)modifier;
-(id)initWithOperatorType:(unsigned)arg1 modifier:(unsigned)arg2 options:(unsigned)arg3 ;
-(id)predicateFormat;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(BOOL)performOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(void)_setOptions:(unsigned)arg1 ;
-(id)initWithOperatorType:(unsigned)arg1 modifier:(unsigned)arg2 ;
-(id)initWithOperatorType:(unsigned)arg1 ;
-(void)_setModifier:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(SEL)selector;
-(unsigned)options;
-(id)symbol;
@end

