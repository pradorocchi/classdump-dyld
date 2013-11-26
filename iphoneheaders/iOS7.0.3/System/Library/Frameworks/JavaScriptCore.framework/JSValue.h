/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSContext;

@interface JSValue : NSObject {

	OpaqueJSValueRef m_value;
	JSContext* _context;

}

@property (readonly) JSContext * context;              //@synthesize context=_context - In the implementation block
+(id)valueWithUndefinedInContext:(id)arg1 ;
+(id)valueWithDouble:(double)arg1 inContext:(id)arg2 ;
+(id)valueWithObject:(id)arg1 inContext:(id)arg2 ;
+(id)valueWithBool:(BOOL)arg1 inContext:(id)arg2 ;
+(id)valueWithInt32:(int)arg1 inContext:(id)arg2 ;
+(id)valueWithUInt32:(unsigned)arg1 inContext:(id)arg2 ;
+(id)valueWithNewObjectInContext:(id)arg1 ;
+(id)valueWithNewArrayInContext:(id)arg1 ;
+(id)valueWithNewRegularExpressionFromPattern:(id)arg1 flags:(id)arg2 inContext:(id)arg3 ;
+(id)valueWithNewErrorFromMessage:(id)arg1 inContext:(id)arg2 ;
+(id)valueWithNullInContext:(id)arg1 ;
+(id)valueWithPoint:(CGPoint)arg1 inContext:(id)arg2 ;
+(id)valueWithRange:(NSRange)arg1 inContext:(id)arg2 ;
+(id)valueWithRect:(CGRect)arg1 inContext:(id)arg2 ;
+(id)valueWithSize:(CGSize)arg1 inContext:(id)arg2 ;
+(SEL)selectorForStructToValue:(const char*)arg1 ;
+(SEL)selectorForValueToStruct:(const char*)arg1 ;
+(id)valueWithJSValueRef:(OpaqueJSValueRef)arg1 inContext:(id)arg2 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
-(id)initWithValue:(OpaqueJSValueRef)arg1 inContext:(id)arg2 ;
-(id)toObject;
-(double)toDouble;
-(id)invokeMethod:(id)arg1 withArguments:(id)arg2 ;
-(OpaqueJSValueRef)JSValueRef;
-(id)toObjectOfClass:(Class)arg1 ;
-(BOOL)toBool;
-(int)toInt32;
-(unsigned)toUInt32;
-(id)toNumber;
-(id)toDate;
-(id)toArray;
-(id)toDictionary;
-(BOOL)deleteProperty:(id)arg1 ;
-(BOOL)hasProperty:(id)arg1 ;
-(void)defineProperty:(id)arg1 descriptor:(id)arg2 ;
-(BOOL)isUndefined;
-(BOOL)isBoolean;
-(BOOL)isNumber;
-(BOOL)isString;
-(BOOL)isObject;
-(BOOL)isEqualToObject:(id)arg1 ;
-(BOOL)isEqualWithTypeCoercionToObject:(id)arg1 ;
-(BOOL)isInstanceOf:(id)arg1 ;
-(id)constructWithArguments:(id)arg1 ;
-(CGSize)toSize;
-(NSRange)toRange;
-(CGRect)toRect;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)context;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(CGPoint)toPoint;
-(BOOL)isNull;
-(void)setValue:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)valueAtIndex:(unsigned)arg1 ;
-(id)toString;
-(id)callWithArguments:(id)arg1 ;
@end

