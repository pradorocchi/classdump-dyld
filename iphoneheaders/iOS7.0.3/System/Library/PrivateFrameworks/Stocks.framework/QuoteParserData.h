/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class Stock, NSMutableDictionary, NSString, NSArray;

@interface QuoteParserData : NSObject {

	int state;
	double timeUpdated;
	int responseListCount;
	BOOL metadataParser;
	Stock* _stock;
	NSMutableDictionary* _dictionary;
	NSString* _bufferString;
	NSArray* _requestStocks;

}

@property (nonatomic,retain) Stock * stock;                                 //@synthesize stock=_stock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSString * bufferString;                       //@synthesize bufferString=_bufferString - In the implementation block
@property (nonatomic,retain) NSArray * requestStocks;                       //@synthesize requestStocks=_requestStocks - In the implementation block
-(id)dictionary;
-(void)setDictionary:(id)arg1 ;
-(void)setStock:(id)arg1 ;
-(id)stock;
-(id)bufferString;
-(void)setBufferString:(id)arg1 ;
-(id)requestStocks;
-(void)setRequestStocks:(id)arg1 ;
-(void).cxx_destruct;
@end

