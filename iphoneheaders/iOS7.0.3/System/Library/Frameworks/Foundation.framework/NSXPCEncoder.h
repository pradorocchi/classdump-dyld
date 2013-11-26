/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object, NSXPCEncoderDelegate;
@class NSObject, NSXPCConnection, ;

@interface NSXPCEncoder : NSXPCCoder {

	NSObject<OS_xpc_object>* _oolObjects;
	NSXPCConnection* _connection;
	CFDictionaryRef _replacedObjects;
	CFDictionaryRef _replacedByDelegateObjects;
	<NSXPCEncoderDelegate>* _delegate;
	BOOL _askForReplacement;
	void* _encoder;
	unsigned long long _genericIndex;

}

@property (assign) NSXPCConnection * _connection;                  //@synthesize connection=_connection - In the implementation block
@property (assign) <NSXPCEncoderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(void)set_connection:(id)arg1 ;
-(id)_createRootXPCObject;
-(void)_encodeCString:(const char*)arg1 forKey:(id)arg2 ;
-(void)encodeInvocation:(id)arg1 ;
-(id)_replaceObject:(id)arg1 ;
-(void)_checkObject:(id)arg1 ;
-(void)_encodeObject:(id)arg1 ;
-(void)dealloc;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(id)delegate;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeInteger:(int)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned)arg2 forKey:(id)arg3 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(id)_connection;
-(void)encodeObject:(id)arg1 ;
-(void)finalize;
@end

