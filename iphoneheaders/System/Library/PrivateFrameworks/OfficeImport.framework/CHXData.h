/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXData : NSObject
+(void)readStrDataFromXmlStrDataElement:(xmlNode*)arg1 data:(id)arg2 state:(id)arg3 ;
+(void)readStrDataFromXmlMultiLevelStrDataElement:(xmlNode*)arg1 data:(id)arg2 state:(id)arg3 ;
+(void)readNumDataFromXmlNumDataElement:(xmlNode*)arg1 data:(id)arg2 state:(id)arg3 ;
+(id)chdDataFromXmlDataElement:(xmlNode*)arg1 state:(id)arg2 ;
+(bool)isHiddenDataElement:(xmlNode*)arg1 data:(id)arg2 ;
@end
