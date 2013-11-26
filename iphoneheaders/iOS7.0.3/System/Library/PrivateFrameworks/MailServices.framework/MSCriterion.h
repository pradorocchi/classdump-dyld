/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@protocol NSObject;
@class NSString, ;

@interface MSCriterion : NSObject <NSCoding> {

	NSString* _type;
	NSString* _qualifier;
	<NSObject>* _criteria;

}
-(id)criteria;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)type;
-(id)initWithCriteria:(id)arg1 allRequired:(BOOL)arg2 ;
-(id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3 ;
-(id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3 ;
-(id)qualifier;
@end

