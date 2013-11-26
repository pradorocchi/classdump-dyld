/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TextInput/TextInput-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSOrderedSet, NSArray;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding> {

	NSString* _title;
	NSOrderedSet* _candidates;
	NSArray* _nonExtensionCandidates;

}

@property (copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (copy) NSOrderedSet * candidates;                       //@synthesize candidates=_candidates - In the implementation block
@property (retain) NSArray * nonExtensionCandidates;              //@synthesize nonExtensionCandidates=_nonExtensionCandidates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)sortUsingComparator:(/*^block*/ id)arg1 ;
-(id)title;
-(id)candidates;
-(id)initWithTitle:(id)arg1 candidates:(id)arg2 ;
-(void)setCandidates:(id)arg1 ;
-(void)sortWithOptions:(unsigned)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(BOOL)hasAlternativeText;
-(id)nonExtensionCandidates;
-(void)addCandidate:(id)arg1 ;
-(void)setNonExtensionCandidates:(id)arg1 ;
-(id)mutableCandidates;
@end

