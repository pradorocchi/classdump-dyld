/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <XPCObjects/XPCObjects-Structs.h>
#import <Foundation/NSCoder.h>

@protocol OS_xpc_object;
@class NSObject, NSArray, NSString;

@interface XPCDecoder : NSCoder {

	NSObject<OS_xpc_object>* _encoding;
	NSObject<OS_xpc_object>* _currentObject;
	CFDictionaryRef _decodedObjects;
	CFSetRef _requestedDecodedObjects;
	NSArray* _allowedClasses;
	NSString* _errorDescription;

}

@property (nonatomic,copy) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
+(id)rootObjectForEncoding:(id)arg1 allowedClasses:(id)arg2 ;
+(id)rootObjectForEncoding:(id)arg1 allowedClasses:(id)arg2 errorDescription:(id)arg3 ;
+(id)rootObjectForEncoding:(id)arg1 ;
-(void)dealloc;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(int)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(id)decodeObject;
-(int)versionForClassName:(id)arg1 ;
-(id)errorDescription;
-(id)initWithEncoding:(id)arg1 ;
-(void)setErrorDescription:(id)arg1 ;
-(void)_verifyCurrentObject;
-(BOOL)_classIsAllowed:(Class)arg1 ;
-(id)decodeEndpointForKey:(id)arg1 ;
-(unsigned)decodeMachSendRightForKey:(id)arg1 ;
@end

