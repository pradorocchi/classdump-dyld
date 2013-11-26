/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TextInput/TIKeyboardOperation.h>

@class TIKeyboardCandidate;

@interface TIKeyboardOperationSetAutocorrection : TIKeyboardOperation {

	TIKeyboardCandidate* _autocorrection;

}

@property (nonatomic,readonly) TIKeyboardCandidate * autocorrection;              //@synthesize autocorrection=_autocorrection - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)operationWithAutocorrection:(id)arg1 ;
-(void)main;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)autocorrection;
-(id)propertiesForDescription;
-(id)initWithAutocorrection:(id)arg1 ;
@end

