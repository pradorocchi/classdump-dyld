/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying> {

	struct {
		unsigned _evaluationBlocked : 1;
		unsigned _reservedPredicateFlags : 31;
	}  _predicateFlags;

}
+(id)cr_predicateWithEncodedDataRepresentation:(id)arg1 ;
+(id)predicateWithValue:(BOOL)arg1 ;
+(CFLocaleRef)retainedLocale;
+(id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned)arg2 ;
+(id)predicateWithFormat:(id)arg1 arguments:(void*)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)predicateWithFormat:(id)arg1 ;
+(id)predicateWithBlock:(/*^block*/ id)arg1 ;
-(id)cr_encodedDataRepresentation;
-(void)ab_bindStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(BOOL)ab_hasCallback;
-(id)ab_newQueryWithSortOrder:(unsigned)arg1 addressBook:(void*)arg2 propertyIndices:(const _CFDictionary*)arg3 ;
-(void)ab_addCallbackContextToArray:(CFArrayRef)arg1 ;
-(void)ab_runPredicateWithSortOrder:(unsigned)arg1 inAddressBook:(void*)arg2 withDelegate:(id)arg3 ;
-(id)minimalFormInContext:(id)arg1 ;
-(void)allowEvaluation;
-(void)acceptVisitor:(id)arg1 flags:(unsigned)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)generateMetadataDescription;
-(BOOL)_allowsEvaluation;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
@end

