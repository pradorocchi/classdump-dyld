/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSNumber, NSString, NSDictionary;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {

	int _allowedRetryCount;
	BOOL _allowsExpiredBags;
	int _bagType;
	NSMutableDictionary* _httpHeaders;
	BOOL _ignoresCaches;
	NSNumber* _userIdentifier;
	BOOL _usesCachedBagsOnly;

}

@property (assign,nonatomic) int allowedRetryCount;                    //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (assign,nonatomic) int bagType;                              //@synthesize bagType=_bagType - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) BOOL ignoresCaches;                       //@synthesize ignoresCaches=_ignoresCaches - In the implementation block
@property (nonatomic,retain) NSNumber * userIdentifier;                //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * allHTTPHeaders; 
@property (assign,nonatomic) BOOL allowsExpiredBags;                   //@synthesize allowsExpiredBags=_allowsExpiredBags - In the implementation block
@property (assign,nonatomic) BOOL usesCachedBagsOnly;                  //@synthesize usesCachedBagsOnly=_usesCachedBagsOnly - In the implementation block
+(id)contextWithBagType:(int)arg1 ;
-(id)userIdentifier;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)cacheKey;
-(void)setIgnoresCaches:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)allowedRetryCount;
-(int)bagType;
-(id)allHTTPHeaders;
-(void)setAllHTTPHeaders:(id)arg1 ;
-(BOOL)allowsExpiredBags;
-(void)setAllowsExpiredBags:(BOOL)arg1 ;
-(BOOL)ignoresCaches;
-(BOOL)usesCachedBagsOnly;
-(void)setUsesCachedBagsOnly:(BOOL)arg1 ;
-(void)setBagType:(int)arg1 ;
-(void)setUserIdentifier:(id)arg1 ;
-(void)setAllowedRetryCount:(int)arg1 ;
@end

