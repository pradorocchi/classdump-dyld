/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@protocol NSObject;
@class ;

@interface NSXPCCoder : NSCoder {

	<NSObject>* _userInfo;
	id _reserved1;

}

@property (retain) <NSObject> * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(BOOL)requiresSecureCoding;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
@end

