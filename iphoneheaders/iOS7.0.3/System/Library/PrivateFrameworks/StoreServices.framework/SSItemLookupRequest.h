/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {

	NSMutableDictionary* _parameters;

}

@property (assign,nonatomic,@dynamic) <SSItemLookupRequestDelegate> * delegate; 
@property (readonly) NSDictionary * parameters; 
-(void)dealloc;
-(id)init;
-(BOOL)start;
-(id)parameters;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)_convertedValueForValue:(id)arg1 ;
-(id)_errorForStatusCode:(int)arg1 ;
-(id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2 ;
-(void)startWithItemLookupBlock:(/*^block*/ id)arg1 ;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(id)valueForParameter:(id)arg1 ;
-(id)copyQueryStringParameters;
@end

