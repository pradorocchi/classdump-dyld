/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MMCSEngine;

@interface MMCSRequestorContext : NSObject {

	MMCSEngine* _engine;
	char** _signatures;
	unsigned long _count;
	unsigned long long* _itemIDs;
	unsigned* _itemFlags;
	char** _authTokens;
	int _type;

}

@property (assign,nonatomic,__weak) MMCSEngine * engine;               //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long count;                      //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long* itemIDs;              //@synthesize itemIDs=_itemIDs - In the implementation block
@property (assign,nonatomic) unsigned* itemFlags;                      //@synthesize itemFlags=_itemFlags - In the implementation block
@property (assign,nonatomic) char** signatures;                        //@synthesize signatures=_signatures - In the implementation block
@property (assign,nonatomic) char** authTokens;                        //@synthesize authTokens=_authTokens - In the implementation block
+(id)contextWithEngine:(id)arg1 type:(int)arg2 ;
-(void)dealloc;
-(unsigned long)count;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setCount:(unsigned long)arg1 ;
-(id)engine;
-(id)initWithEngine:(id)arg1 type:(int)arg2 ;
-(void)setEngine:(id)arg1 ;
-(char**)signatures;
-(void)setSignatures:(char**)arg1 ;
-(unsigned long long*)itemIDs;
-(void)setItemIDs:(unsigned long long*)arg1 ;
-(unsigned*)itemFlags;
-(void)setItemFlags:(unsigned*)arg1 ;
-(char**)authTokens;
-(void)setAuthTokens:(char**)arg1 ;
-(void).cxx_destruct;
@end

