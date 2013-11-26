/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {

	unsigned _assertion;
	double _timeout;
	NSString* _identifier;
	NSArray* _stack;

}

@property (assign,nonatomic) double timeout;                       //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)dealloc;
-(id)identifier;
-(void)timedout;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
@end

