/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSMethodSignature : NSObject {

	void* _private;
	void** _reserved[6];

}
+(id)signatureWithObjCTypes:(const char*)arg1 ;
-(BOOL)_cheapTypeString:(char*)arg1 maxLength:(long)arg2 ;
-(SCD_Struct_NS17*)_frameDescriptor;
-(NSMethodFrameArgInfo*)_argInfo:(int)arg1 ;
-(id)_typeString;
-(id)_signatureForBlockAtArgumentIndex:(int)arg1 ;
-(Class)_classForObjectAtArgumentIndex:(int)arg1 ;
-(id)_protocolsForObjectAtArgumentIndex:(int)arg1 ;
-(BOOL)isOneway;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
-(unsigned)numberOfArguments;
-(const char*)getArgumentTypeAtIndex:(unsigned)arg1 ;
-(unsigned)methodReturnLength;
-(const char*)methodReturnType;
-(unsigned)frameLength;
-(void)finalize;
@end

