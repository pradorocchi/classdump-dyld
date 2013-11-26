/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libTextInputCore.dylib/TIWordSearch.h>

@class NSDictionary, TIWordSearchCandidateResultSet;

@interface TIWordSearchKana : TIWordSearch {

	NSDictionary* _kanaromapat;
	NSDictionary* _kanaroma;
	unsigned _insertKatakanaAtIndex;
	/*^block*/ id _addressBookLoader;
	TIWordSearchCandidateResultSet* _candidateResultSet;

}

@property (nonatomic,retain) TIWordSearchCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
+(id)dynamicDictionaryFileNames;
-(void)dealloc;
-(id)candidateResultSet;
-(void)setCandidateResultSet:(id)arg1 ;
-(BOOL)_insertString:(id)arg1 input:(id)arg2 at:(unsigned)arg3 force:(BOOL)arg4 ;
-(BOOL)isAnalyzingJapaneseRomaji;
-(void)setInsertKatakanaAtIndex:(unsigned)arg1 ;
-(BOOL)_insertKatakana:(id)arg1 reading:(id)arg2 at:(unsigned)arg3 ;
-(id)makeCandidates:(id)arg1 contextString:(id)arg2 predictionEnabled:(BOOL)arg3 withInputManager:(id)arg4 geometryModelData:(id)arg5 ;
-(id)kanaSearchPat:(id)arg1 ;
-(id)kanaRomaPat:(id)arg1 ;
-(int)mecabraInputMethodType;
-(unsigned long)mecabraCreationOptions;
-(void)updateMecabraState;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
@end

