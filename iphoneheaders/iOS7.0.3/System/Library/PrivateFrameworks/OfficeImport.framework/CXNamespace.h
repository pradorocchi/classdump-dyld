/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CXNamespace : NSObject {

	const char* mUri;
	xmlDoc* mDocument;
	xmlNs* mDocumentNamespace;

}
+(BOOL)isPrefixSupportedFromNodeContext:(xmlNode*)arg1 prefix:(const char*)arg2 ;
+(void)registerNamespace:(id)arg1 ;
+(BOOL)isNamespaceSupported:(const char*)arg1 ;
+(BOOL)isPrefixSupportedFromStream:(xmlTextReaderRef)arg1 prefix:(const char*)arg2 ;
+(void)clearRegisteredNamespaces;
-(BOOL)containsNode:(xmlNode*)arg1 ;
-(BOOL)containsAttribute:(xmlAttr*)arg1 ;
-(const char*)uri;
-(id)initWithUri:(const char*)arg1 ;
-(id)initUnsupportedNsWithUri:(const char*)arg1 ;
@end

