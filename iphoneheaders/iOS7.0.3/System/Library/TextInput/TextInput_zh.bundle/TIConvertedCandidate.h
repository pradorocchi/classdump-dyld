/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class TIKeyboardCandidate, NSString;

@interface TIConvertedCandidate : NSObject {

	TIKeyboardCandidate* _candidate;
	NSString* _convertedInput;
	NSString* _replacedAmbiguousPinyinSyllable;
	NSString* _replacementUnambiguousPinyinSyllable;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;                            //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,copy) NSString * convertedInput;                                    //@synthesize convertedInput=_convertedInput - In the implementation block
@property (nonatomic,copy) NSString * replacedAmbiguousPinyinSyllable;                   //@synthesize replacedAmbiguousPinyinSyllable=_replacedAmbiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * replacementUnambiguousPinyinSyllable;              //@synthesize replacementUnambiguousPinyinSyllable=_replacementUnambiguousPinyinSyllable - In the implementation block
-(void)dealloc;
-(void)setCandidate:(id)arg1 ;
-(id)candidate;
-(id)initWithCandidate:(id)arg1 replacedAmbiguousPinyinSyllable:(id)arg2 replacementUnambiguousPinyinSyllable:(id)arg3 convertedInput:(id)arg4 ;
-(id)convertedInput;
-(void)setConvertedInput:(id)arg1 ;
-(id)replacedAmbiguousPinyinSyllable;
-(void)setReplacedAmbiguousPinyinSyllable:(id)arg1 ;
-(id)replacementUnambiguousPinyinSyllable;
-(void)setReplacementUnambiguousPinyinSyllable:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 ;
@end

