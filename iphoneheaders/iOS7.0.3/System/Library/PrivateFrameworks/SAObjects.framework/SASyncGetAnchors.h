/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SASyncGetAnchors : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * sources; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)getAnchors;
+(id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSources:(id)arg1 ;
-(id)sources;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

