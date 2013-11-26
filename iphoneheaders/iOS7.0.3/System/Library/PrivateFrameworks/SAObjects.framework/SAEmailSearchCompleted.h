/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAEmailSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * emailResults; 
@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)searchCompletedWithResults:(id)arg1 ;
+(id)searchCompletedWithEmailResults:(id)arg1 ;
-(id)groupIdentifier;
-(id)results;
-(void)setResults:(id)arg1 ;
-(id)encodedClassName;
-(id)initWithResults:(id)arg1 ;
-(id)initWithEmailResults:(id)arg1 ;
-(void)setEmailResults:(id)arg1 ;
-(id)emailResults;
@end

