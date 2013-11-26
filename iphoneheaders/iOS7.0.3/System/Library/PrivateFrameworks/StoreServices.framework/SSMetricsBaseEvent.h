/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString, NSNumber;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * eventType; 
@property (nonatomic,retain) NSNumber * baseVersion; 
@property (nonatomic,retain) NSNumber * eventVersion; 
@property (assign) double originalTime; 
@property (nonatomic,retain) NSNumber * pixelRatio; 
@property (nonatomic,retain) NSNumber * screenHeight; 
@property (nonatomic,retain) NSNumber * screenWidth; 
@property (nonatomic,retain) NSNumber * windowHeight; 
@property (nonatomic,retain) NSString * windowOrientation; 
@property (nonatomic,retain) NSNumber * windowWidth; 
@property (nonatomic,retain) NSString * applicationIdentifier; 
@property (nonatomic,retain) NSNumber * clientVersion; 
@property (nonatomic,retain) NSNumber * previousClientVersion; 
@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,retain) NSString * userAgent; 
@property (nonatomic,retain) NSString * pageContext; 
@property (nonatomic,retain) NSString * pageDescription; 
@property (assign,nonatomic) unsigned long long pageID; 
@property (nonatomic,retain) NSString * pageType; 
@property (nonatomic,retain) NSString * pageURL; 
@property (nonatomic,retain) NSNumber * accountIdentifier; 
@property (nonatomic,retain) NSString * connection; 
-(id)eventType;
-(void)setAccountIdentifier:(id)arg1 ;
-(id)init;
-(id)description;
-(id)applicationIdentifier;
-(void)setPageURL:(id)arg1 ;
-(id)pageURL;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void)setUserAgent:(id)arg1 ;
-(void)setTopic:(id)arg1 ;
-(id)topic;
-(id)accountIdentifier;
-(void)setPageType:(id)arg1 ;
-(id)pageType;
-(void)setWindowOrientation:(id)arg1 ;
-(void)setOriginalTimeUsingDate:(id)arg1 ;
-(void)setPageContext:(id)arg1 ;
-(void)setApplicationIdentifier:(id)arg1 ;
-(id)pageContext;
-(id)windowOrientation;
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
-(id)eventVersion;
-(id)baseVersion;
-(id)clientVersion;
-(double)originalTime;
-(id)pageDescription;
-(unsigned long long)pageID;
-(id)pixelRatio;
-(id)previousClientVersion;
-(void)setBaseVersion:(id)arg1 ;
-(void)setClientVersion:(id)arg1 ;
-(void)setEventType:(id)arg1 ;
-(void)setEventVersion:(id)arg1 ;
-(void)setOriginalTime:(double)arg1 ;
-(void)setPageDescription:(id)arg1 ;
-(void)setPageID:(unsigned long long)arg1 ;
-(void)setPixelRatio:(id)arg1 ;
-(void)setPreviousClientVersion:(id)arg1 ;
-(void)setScreenWidth:(id)arg1 ;
-(void)setWindowHeight:(id)arg1 ;
-(void)setWindowWidth:(id)arg1 ;
-(id)windowHeight;
-(id)windowWidth;
-(void)setScreenHeight:(id)arg1 ;
-(id)screenHeight;
-(id)userAgent;
-(id)screenWidth;
@end

