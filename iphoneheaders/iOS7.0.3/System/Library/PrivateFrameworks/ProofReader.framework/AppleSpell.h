/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSString, NSArray, NSMutableSet, NSURL;

@interface AppleSpell : NSObject {

	void* _proofReaderConnection;
	CFDictionaryRef _databaseConnections;
	NSMutableDictionary* _bindicts;
	NSMutableArray* _globalBindictDataArray;
	NSMutableArray* _globalNegBindictDataArray;
	NSMutableDictionary* _autocorrections;
	NSString* _lastLanguage;
	NSArray* _userPreferredLanguages;
	NSArray* _userTopLanguages;
	NSMutableDictionary* _learnedResponses;
	NSMutableArray* _diagnosticInfo;
	NSMutableSet* _foundNames;
	double _lastFindNames;
	NSMutableSet* _foundShortcuts;
	NSMutableDictionary* _lastSampleCollected;
	unsigned _numberOfSamplesCollected;
	double _lastSampleCollection;
	NSMutableArray* _retainedSamples;
	NSMutableDictionary* _lastSampleRecorded;
	double _lastSampleRecording;
	NSMutableArray* _altBundleURLs;
	NSURL* _updateBundleURL;
	NSMutableDictionary* _languageCounts;
	double _lastLanguageCounts;
	BOOL _userPrefersUncheckedLatinLanguage;

}
-(void)clearCaches;
-(id)init;
-(id)bundle;
-(NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 language:(id)arg3 details:(id*)arg4 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(int*)arg4 countOnly:(BOOL)arg5 correction:(id*)arg6 ;
-(void)setUpdateBundleURL:(id)arg1 ;
-(id)spellServer:(id)arg1 suggestGuessesForWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestWordWithLengthInRange:(NSRange)arg2 language:(id)arg3 ;
-(BOOL)spellServer:(id)arg1 canChangeCaseOfFirstLetterInString:(id)arg2 toUpperCase:(BOOL)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 stringForInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(void)timeout:(id)arg1 ;
-(void)resetTimer;
-(id)localizationsForLanguage:(id)arg1 ;
-(id)localizationForLanguage:(id)arg1 ;
-(id)fallbackLocalizationForLanguage:(id)arg1 ;
-(id)bindictDataArrayForLanguage:(id)arg1 index:(unsigned)arg2 ;
-(id)globalBindictDataArray;
-(id)globalNegativeBindictDataArray;
-(unsigned long)encodingForLanguage:(id)arg1 ;
-(BOOL)validateAbbreviationOrNumberWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 connection:(PR_DB_IO*)arg5 sender:(id)arg6 ;
-(BOOL)checkWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 index:(unsigned)arg5 ;
-(BOOL)globalCheckWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 ;
-(BOOL)validateWordBuffer:(char*)arg1 length:(unsigned)arg2 connection:(PR_DB_IO*)arg3 ;
-(BOOL)validateWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkTemp:(BOOL)arg8 checkUser:(BOOL)arg9 checkNames:(BOOL)arg10 checkHyphens:(BOOL)arg11 checkIntercaps:(BOOL)arg12 checkOptions:(BOOL)arg13 depth:(unsigned)arg14 ;
-(BOOL)_checkEnglishGrammarInString:(id)arg1 range:(NSRange)arg2 indexIntoBuffer:(unsigned)arg3 bufferLength:(unsigned)arg4 language:(id)arg5 connection:(PR_DB_IO*)arg6 sender:(id)arg7 bufIO:(PR_BUF_IO*)arg8 retval:(int*)arg9 errorRange:(NSRange*)arg10 details:(id*)arg11 ;
-(PR_DB_IO*)databaseConnectionForLanguage:(id)arg1 ;
-(BOOL)_checkGrammarInString:(id)arg1 range:(NSRange)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 bufIO:(PR_BUF_IO*)arg6 errorRange:(NSRange*)arg7 details:(id*)arg8 ;
-(NSRange)spellServer:(id)arg1 checkGrammarInString:(id)arg2 range:(NSRange)arg3 language:(id)arg4 orthography:(id)arg5 mutableResults:(id)arg6 offset:(unsigned)arg7 details:(id*)arg8 ;
-(id)bindictDataForLanguage:(id)arg1 index:(unsigned)arg2 ;
-(id)_orthographyByModifyingOrthography:(id)arg1 withLatinLanguage:(id)arg2 ;
-(BOOL)validateWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkTemp:(BOOL)arg8 checkNames:(BOOL)arg9 checkHyphens:(BOOL)arg10 checkIntercaps:(BOOL)arg11 checkOptions:(BOOL)arg12 depth:(unsigned)arg13 ;
-(id)autocorrectionDictionaryForLanguage:(id)arg1 ;
-(id)_correctionForString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned)arg5 dictionary:(id)arg6 language:(id)arg7 connection:(PR_DB_IO*)arg8 keyEventData:(id)arg9 alternativeCorrection:(id*)arg10 isApostropheInsertion:(BOOL*)arg11 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 range:(NSRange)arg3 languages:(id)arg4 topLanguages:(id)arg5 orthography:(id)arg6 checkOrthography:(BOOL)arg7 mutableResults:(id)arg8 offset:(unsigned)arg9 autocorrect:(BOOL)arg10 keyEventData:(id)arg11 appIdentifier:(id)arg12 wordCount:(int*)arg13 countOnly:(BOOL)arg14 correction:(id*)arg15 ;
-(id)spellServer:(id)arg1 suggestGuessesForKoreanWordRange:(NSRange)arg2 inString:(id)arg3 ;
-(id)spellServer:(id)arg1 suggestGuessesForWord:(id)arg2 inLanguage:(id)arg3 ;
-(id)spellServer:(id)arg1 suggestCompletionsForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 inLanguage:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestWordWithMinimumLength:(unsigned)arg2 maximumLength:(unsigned)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 alternativesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 ;
-(void)addAlternateDataBundleURL:(id)arg1 ;
-(BOOL)globalCheckNegativeWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 encoding:(unsigned long)arg4 ;
-(BOOL)validateWordPrefixBuffer:(char*)arg1 length:(unsigned)arg2 connection:(PR_DB_IO*)arg3 ;
-(BOOL)validateWordBuffer:(char*)arg1 length:(unsigned)arg2 language:(id)arg3 connection:(PR_DB_IO*)arg4 sender:(id)arg5 checkBase:(BOOL)arg6 checkDict:(BOOL)arg7 checkNames:(BOOL)arg8 checkHyphens:(BOOL)arg9 checkIntercaps:(BOOL)arg10 checkOptions:(BOOL)arg11 depth:(unsigned)arg12 ;
-(NSRange)spellServer:(id)arg1 findMisspelledWordInString:(id)arg2 language:(id)arg3 wordCount:(int*)arg4 countOnly:(BOOL)arg5 ;
-(id)spellServer:(id)arg1 checkString:(id)arg2 offset:(unsigned)arg3 types:(unsigned long long)arg4 options:(id)arg5 orthography:(id)arg6 wordCount:(int*)arg7 ;
-(id)spellServer:(id)arg1 suggestCompletionDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg2 inString:(id)arg3 language:(id)arg4 ;
-(id)spellServer:(id)arg1 extendedAlternativesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 prefixesForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)spellServer:(id)arg1 correctionsForPinyinInputString:(id)arg2 language:(id)arg3 ;
-(id)_crudePreviousWordInString:(id)arg1 inRange:(NSRange)arg2 precededBy:(id*)arg3 ;
-(id)_modifiedGrammarDescriptionForDescription:(id)arg1 ;
-(id)_detailWithRange:(NSRange)arg1 description:(id)arg2 corrections:(id)arg3 ;
-(id)_correctionForSuggestedPhrase:(const char*)arg1 originalBuffer:(const char*)arg2 length:(unsigned)arg3 ;
-(BOOL)looksLikeParticiple:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(id)_crudeNextWordInString:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)looksLikeAdverb:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(BOOL)onContractionList:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(BOOL)onNoContractionList:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 sender:(id)arg4 ;
-(BOOL)looksLikeArticledNoun:(id)arg1 language:(id)arg2 connection:(PR_DB_IO*)arg3 ;
-(id)_crudePreviousWordInString:(id)arg1 inRange:(NSRange)arg2 ;
-(id)_correctionForKoreanString:(id)arg1 range:(NSRange)arg2 inString:(id)arg3 tagger:(id)arg4 taggerIndex:(unsigned)arg5 dictionary:(id)arg6 keyEventData:(id)arg7 alternativeCorrection:(id*)arg8 ;
-(id)_japaneseCorrectionForString:(id)arg1 connection:(PR_DB_IO*)arg2 ;
-(id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 finalModificationsForPinyinInputString:(id)arg2 ;
-(id)englishStringsFromWordBuffer:(char*)arg1 length:(unsigned)arg2 connection:(PR_DB_IO*)arg3 ;
-(id)englishStringFromWordBuffer:(char*)arg1 length:(unsigned)arg2 connection:(PR_DB_IO*)arg3 ;
-(void)addSpecialModifiedPinyinToArray:(id)arg1 inBuffer:(char*)arg2 length:(unsigned)arg3 atEnd:(BOOL)arg4 ;
-(void)addModifiedPinyinToArray:(id)arg1 connection:(PR_DB_IO*)arg2 fromIndex:(unsigned)arg3 prevIndex:(unsigned)arg4 prevPrevIndex:(unsigned)arg5 startingModificationsAt:(unsigned)arg6 inBuffer:(char*)arg7 length:(unsigned)arg8 initialSyllableCount:(unsigned)arg9 initialScore:(unsigned)arg10 prevScore:(unsigned)arg11 prevPrevScore:(unsigned)arg12 lastSyllableScore:(unsigned)arg13 couldBeAbbreviatedPinyin:(BOOL)arg14 ;
-(void)addModifiedPartialPinyinToArray:(id)arg1 connection:(PR_DB_IO*)arg2 fromIndex:(unsigned)arg3 prevIndex:(unsigned)arg4 prevPrevIndex:(unsigned)arg5 prePrevPrevIndex:(unsigned)arg6 startingModificationsAt:(unsigned)arg7 inBuffer:(char*)arg8 length:(unsigned)arg9 initialSyllableCount:(unsigned)arg10 initialScore:(unsigned)arg11 prevScore:(unsigned)arg12 prevPrevScore:(unsigned)arg13 lastSyllableScore:(unsigned)arg14 ;
-(id)_pinyinStringByCombiningPinyinString:(id)arg1 withPinyinString:(id)arg2 ;
-(id)_primitiveRetainedAlternativesForPinyinInputString:(id)arg1 ;
-(unsigned)_getSplitIndexes:(unsigned*)arg1 maxCount:(unsigned)arg2 forPinyinInputString:(id)arg3 ;
-(id)_recursiveRetainedAlternativesForPinyinInputString:(id)arg1 depth:(unsigned)arg2 ;
-(id)_retainedAlternativesByCombiningAlternatives:(id)arg1 withAlternatives:(id)arg2 andAddingAlternatives:(id)arg3 ;
-(id)spellServer:(id)arg1 _retainedAlternativesForPinyinInputString:(id)arg2 extended:(BOOL)arg3 ;
-(id)spellServer:(id)arg1 _retainedPrefixesForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 _retainedCorrectionsForPinyinInputString:(id)arg2 ;
-(id)spellServer:(id)arg1 _retainedModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(id)spellServer:(id)arg1 _retainedFinalModificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(id)spellServer:(id)arg1 modificationsForPinyinInputString:(id)arg2 geometryModelData:(id)arg3 ;
-(void)addGuessesForKoreanWord:(id)arg1 toMutableArray:(id)arg2 includeAdditionalGuesses:(BOOL)arg3 ;
@end

