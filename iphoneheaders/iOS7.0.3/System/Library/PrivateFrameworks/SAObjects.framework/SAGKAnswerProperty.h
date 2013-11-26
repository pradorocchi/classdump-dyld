/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, NSString, SAUIAppPunchOut, NSNumber;

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>

@property (nonatomic,retain) <SAClientBoundCommand> * command; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValueAnnotation; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSNumber * selected; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * valueAnnotation; 
+(id)answerProperty;
+(id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setValue:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)value;
-(id)name;
-(void)setSelected:(id)arg1 ;
-(id)selected;
-(id)command;
-(void)setCommand:(id)arg1 ;
-(id)encodedClassName;
-(id)punchOut;
-(void)setPunchOut:(id)arg1 ;
-(id)valueAnnotation;
-(void)setValueAnnotation:(id)arg1 ;
-(id)decoratedValue;
-(void)setDecoratedValue:(id)arg1 ;
-(id)decoratedValueAnnotation;
-(void)setDecoratedValueAnnotation:(id)arg1 ;
@end

