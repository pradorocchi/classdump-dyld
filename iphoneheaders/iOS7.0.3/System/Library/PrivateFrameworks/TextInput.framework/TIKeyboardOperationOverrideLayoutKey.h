/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TextInput/TIKeyboardOperation.h>

@class NSString;

@interface TIKeyboardOperationOverrideLayoutKey : TIKeyboardOperation {

	NSString* _key;
	NSString* _functionalString;

}

@property (nonatomic,readonly) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * functionalString;              //@synthesize functionalString=_functionalString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)operationWithKey:(id)arg1 functionalString:(id)arg2 ;
-(void)main;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)key;
-(id)functionalString;
-(id)propertiesForDescription;
-(id)initWithKey:(id)arg1 functionalString:(id)arg2 ;
@end

