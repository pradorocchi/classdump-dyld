/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/DuetLST
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface DuetLSTqueryCacheItem : NSObject {

	long long eventid;
	long long recurrwidthsecs;
	long long recurrdeltasecs;
	long long startepochsecs;
	long long endepochsecs;
	char* strval;
	bool grouped;
	NSArray* queryResults;

}

@property (assign,nonatomic) long long eventid; 
@property (assign,nonatomic) long long recurrwidthsecs; 
@property (assign,nonatomic) long long recurrdeltasecs; 
@property (assign,nonatomic) long long startepochsecs; 
@property (assign,nonatomic) long long endepochsecs; 
@property (assign,nonatomic) char* strval; 
@property (assign,nonatomic) bool grouped; 
@property (nonatomic,retain) NSArray * queryResults; 
-(long long)eventid;
-(void)setEventid:(long long)arg1 ;
-(long long)recurrwidthsecs;
-(void)setRecurrwidthsecs:(long long)arg1 ;
-(long long)recurrdeltasecs;
-(void)setRecurrdeltasecs:(long long)arg1 ;
-(long long)startepochsecs;
-(void)setStartepochsecs:(long long)arg1 ;
-(long long)endepochsecs;
-(void)setEndepochsecs:(long long)arg1 ;
-(char*)strval;
-(void)setStrval:(char*)arg1 ;
-(bool)grouped;
-(void)setGrouped:(bool)arg1 ;
-(id)queryResults;
-(void)setQueryResults:(id)arg1 ;
-(void).cxx_destruct;
@end

