/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Foundation/Foundation-Structs.h>
@class NSError, NSMutableArray, NSMapTable, NSData;

@interface _NSXMLParserInfo : NSObject {

	xmlSAXHandler* saxHandler;
	xmlParserCtxt* parserContext;
	unsigned parserFlags;
	NSError* error;
	NSMutableArray* namespaces;
	NSMapTable* slowStringMap;
	BOOL delegateAborted;
	BOOL haveDetectedEncoding;
	NSData* bomChunk;
	unsigned chunkSize;

}
@end

