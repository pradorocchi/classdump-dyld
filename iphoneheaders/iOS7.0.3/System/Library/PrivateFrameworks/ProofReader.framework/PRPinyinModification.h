/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/PRModification.h>

@class NSString;

@interface PRPinyinModification : PRModification {

	NSRange _range;
	NSString* _replacementString;
	unsigned _modificationType;
	NSRange _syllableRange;
	NSRange _additionalSyllableRange;
	double _modificationScore;
	unsigned _syllableCountScore;
	unsigned char _letters[7];
	BOOL _producesPartialSyllable;
	BOOL _isTemporary;

}
+(id)modificationsForInputString:(id)arg1 ;
+(id)finalModificationsForInputString:(id)arg1 ;
-(BOOL)isTemporary;
-(id)replacementString;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned)arg7 syllableLetters:(const char*)arg8 producesPartialSyllable:(BOOL)arg9 ;
-(unsigned)syllableCountScore;
-(BOOL)producesPartialSyllable;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned)arg6 syllableLetters:(const char*)arg7 producesPartialSyllable:(BOOL)arg8 ;
-(NSRange)combinedSyllableRange;
-(BOOL)_shouldAppendLetter:(unsigned char)arg1 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned)arg7 syllableLetters:(const char*)arg8 producesPartialSyllable:(BOOL)arg9 isTemporary:(BOOL)arg10 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned)arg6 syllableLetters:(const char*)arg7 producesPartialSyllable:(BOOL)arg8 isTemporary:(BOOL)arg9 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 isTemporary:(BOOL)arg6 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 ;
-(unsigned)modificationType;
-(NSRange)syllableRange;
-(double)modificationScore;
-(NSRange)additionalSyllableRange;
@end

