/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libTextInputCore.dylib/TIWordSearchOperationGetCandidates.h>

@class NSArray;

@interface TIWordSearchPinyinOperationGetCandidates : TIWordSearchOperationGetCandidates {

	NSArray* _initiallyHiddenCandidates;
	unsigned _selectedHiddenCandidateIndex;

}

@property (nonatomic,readonly) NSArray * initiallyHiddenCandidates;                //@synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates - In the implementation block
@property (nonatomic,readonly) unsigned selectedHiddenCandidateIndex;              //@synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex - In the implementation block
-(void)dealloc;
-(id)initiallyHiddenCandidates;
-(unsigned)selectedHiddenCandidateIndex;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned)arg4 target:(id)arg5 action:(SEL)arg6 geometryModelData:(id)arg7 ;
@end

