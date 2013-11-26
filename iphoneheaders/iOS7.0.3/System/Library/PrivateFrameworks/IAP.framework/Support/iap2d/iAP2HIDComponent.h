/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSNumber, NSString;

@interface iAP2HIDComponent : NSObject {

	int hidComponentType;
	NSNumber* hidComponentID;
	NSString* hidComponentName;
	int hidComponentFunctionType;
	NSNumber* nativeTransportComponentID;
	NSNumber* interfaceNumber;
	unsigned paramCountArr[5];

}

@property (assign) int hidComponentType; 
@property (retain) NSNumber * hidComponentID; 
@property (retain) NSString * hidComponentName; 
@property (assign) int hidComponentFunctionType; 
@property (retain) NSNumber * nativeTransportComponentID; 
@property (retain) NSNumber * interfaceNumber; 
-(id)interfaceNumber;
-(int)hidComponentFunctionType;
-(void)setNativeTransportComponentID:(id)arg1 ;
-(id)nativeTransportComponentID;
-(unsigned)paramCount:(int)arg1 ;
-(int)hidComponentType;
-(id)hidComponentName;
-(id)hidComponentID;
-(void)incrementParamCount:(int)arg1 ;
-(void)setHidComponentType:(int)arg1 ;
-(void)setHidComponentID:(id)arg1 ;
-(void)setHidComponentName:(id)arg1 ;
-(void)setHidComponentFunctionType:(int)arg1 ;
-(void)setInterfaceNumber:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

