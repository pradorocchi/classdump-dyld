/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@protocol CoreDAVItem <NSObject>
@required
+(id)copyParseRules;
+(id)parseRuleCache;
-(BOOL)validate;
-(id)copyParseRules;
-(void)parserFoundAttributes:(id)arg1;
-(void)parserFoundPayload:(id)arg1;
-(void)parserFoundUnrecognizedElement:(id)arg1;
-(void)parserSuggestsBaseURL:(id)arg1;
-(void)write:(id)arg1;
@end


@class NSString, NSMutableSet, NSMutableArray, NSData;

@interface CoreDAVItem : NSObject <CoreDAVItem> {

	NSString* _name;
	NSString* _nameSpace;
	NSMutableSet* _attributes;
	NSMutableArray* _extraChildItems;
	NSData* _payload;
	BOOL _useCDATA;

}

@property (retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (retain) NSString * nameSpace;                          //@synthesize nameSpace=_nameSpace - In the implementation block
@property (retain) NSMutableSet * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSMutableArray * extraChildItems;              //@synthesize extraChildItems=_extraChildItems - In the implementation block
@property (retain) NSData * payload;                              //@synthesize payload=_payload - In the implementation block
@property (assign) BOOL useCDATA;                                 //@synthesize useCDATA=_useCDATA - In the implementation block
+(id)copyParseRules;
+(id)parseRuleCache;
-(BOOL)validate;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)hashString;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(id)payloadAsString;
-(id)extraChildItems;
-(id)nameSpace;
-(void)setNameSpace:(id)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)parserFoundAttributes:(id)arg1 ;
-(void)parserFoundPayload:(id)arg1 ;
-(void)parserFoundUnrecognizedElement:(id)arg1 ;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(void)setPayloadAsString:(id)arg1 ;
-(id)generateXMLString;
-(void)setExtraChildItems:(id)arg1 ;
-(BOOL)useCDATA;
-(void)setUseCDATA:(BOOL)arg1 ;
-(id)payload;
-(void)setPayload:(id)arg1 ;
-(void)write:(id)arg1 ;
@end

