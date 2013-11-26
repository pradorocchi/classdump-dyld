/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABReaderClient.h>

@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>
+(void)readEshClientAnchor:(const XlEshClientAnchor*)arg1 targetClientData:(id)arg2 state:(id)arg3 ;
+(void)setAutoInsetForShape:(EshShape*)arg1 ;
+(void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3 ;
+(void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3 ;
+(BOOL)escherIsFullySupported;
+(BOOL)tablesAreAllowed;
@end

