/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSMutableArray, NSString;

@interface SymbolParserData : NSObject {

	int state;
	NSMutableDictionary* _dictionary;
	NSMutableArray* _symbols;
	NSString* _bufferString;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * symbols;                      //@synthesize symbols=_symbols - In the implementation block
@property (nonatomic,retain) NSString * bufferString;                       //@synthesize bufferString=_bufferString - In the implementation block
-(id)dictionary;
-(void)setSymbols:(id)arg1 ;
-(id)symbols;
-(void)setDictionary:(id)arg1 ;
-(id)bufferString;
-(void)setBufferString:(id)arg1 ;
-(void).cxx_destruct;
@end

