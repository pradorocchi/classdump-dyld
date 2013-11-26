/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iAdDeveloper/iAdDeveloper-Structs.h>
@class NSMutableDictionary, NSData, NSString;

@interface HTSHTTPMessage : NSObject {

	NSMutableDictionary* _headers;
	NSData* _body;
	NSString* _versionString;

}

@property (nonatomic,retain) NSMutableDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSData * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * versionString;                     //@synthesize versionString=_versionString - In the implementation block
-(void)dealloc;
-(id)body;
-(void)setBody:(id)arg1 ;
-(id)versionString;
-(void)setVersionString:(id)arg1 ;
-(id)headers;
-(void)setHeaders:(id)arg1 ;
-(void)addHeadersToMessage:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)copyMessage;
-(id)valueForHeaderField:(id)arg1 ;
@end

