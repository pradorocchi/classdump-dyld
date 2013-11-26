/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSAttributedString;

@interface CKComposition : NSObject {

	NSAttributedString* _text;
	NSAttributedString* _subject;

}

@property (nonatomic,copy) NSAttributedString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * subject;              //@synthesize subject=_subject - In the implementation block
+(id)savedCompositionForGUID:(id)arg1 ;
+(void)deleteCompositionWithGUID:(id)arg1 ;
+(id)compositionForMessageParts:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)hasContent;
-(BOOL)isTextOnly;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(id)mediaObjects;
-(id)initWithText:(id)arg1 subject:(id)arg2 ;
-(BOOL)hasNonwhiteSpaceContent;
-(void)saveCompositionWithGUID:(id)arg1 ;
-(id)compositionByAppendingMessagePart:(id)arg1 ;
@end

