/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSMutableSet, CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVMatchResultsItem;

@interface CoreDAVResponseItem : CoreDAVItem {

	NSMutableArray* _hrefs;
	CoreDAVLeafItem* _status;
	NSMutableSet* _propStats;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;
	CoreDAVItemWithHrefChildItem* _location;
	CoreDAVLeafItem* _serverUID;
	CoreDAVMatchResultsItem* _matchResults;

}

@property (retain) NSMutableArray * hrefs;                               //@synthesize hrefs=_hrefs - In the implementation block
@property (retain) CoreDAVLeafItem * status;                             //@synthesize status=_status - In the implementation block
@property (retain) NSMutableSet * propStats;                             //@synthesize propStats=_propStats - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * errorItem;               //@synthesize errorItem=_errorItem - In the implementation block
@property (retain) CoreDAVLeafItem * responseDescription;                //@synthesize responseDescription=_responseDescription - In the implementation block
@property (retain) CoreDAVItemWithHrefChildItem * location;              //@synthesize location=_location - In the implementation block
@property (retain) CoreDAVLeafItem * serverUID;                          //@synthesize serverUID=_serverUID - In the implementation block
@property (retain) CoreDAVMatchResultsItem * matchResults;               //@synthesize matchResults=_matchResults - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)location;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)successfulPropertiesToValues;
-(id)hrefs;
-(id)firstHref;
-(id)errorItem;
-(id)propStats;
-(id)responseDescription;
-(id)serverUID;
-(id)matchResults;
-(void)addHref:(id)arg1 ;
-(void)addPropStat:(id)arg1 ;
-(void)setErrorItem:(id)arg1 ;
-(void)setResponseDescription:(id)arg1 ;
-(void)setServerUID:(id)arg1 ;
-(void)setMatchResults:(id)arg1 ;
-(void)setPropStats:(id)arg1 ;
-(void)setHrefs:(id)arg1 ;
-(BOOL)hasPropertyError;
-(void)setLocation:(id)arg1 ;
@end

