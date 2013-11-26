/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSNumber;

@interface NSURLComponents : NSObject <NSCopying>

@property (copy) NSString * scheme; 
@property (copy) NSString * user; 
@property (copy) NSString * password; 
@property (copy) NSString * host; 
@property (copy) NSNumber * port; 
@property (copy) NSString * path; 
@property (copy) NSString * query; 
@property (copy) NSString * fragment; 
@property (copy) NSString * percentEncodedUser; 
@property (copy) NSString * percentEncodedPassword; 
@property (copy) NSString * percentEncodedHost; 
@property (copy) NSString * percentEncodedPath; 
@property (copy) NSString * percentEncodedQuery; 
@property (copy) NSString * percentEncodedFragment; 
+(id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
+(id)componentsWithString:(id)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(id)user;
-(id)password;
-(void)setPort:(id)arg1 ;
-(id)percentEncodedPath;
-(id)percentEncodedHost;
-(id)percentEncodedQuery;
-(id)percentEncodedFragment;
-(id)percentEncodedUser;
-(id)percentEncodedPassword;
-(id)URLRelativeToURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(void)setUser:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)setQuery:(id)arg1 ;
-(void)setFragment:(id)arg1 ;
-(void)setPercentEncodedUser:(id)arg1 ;
-(void)setPercentEncodedPassword:(id)arg1 ;
-(void)setPercentEncodedHost:(id)arg1 ;
-(void)setPercentEncodedPath:(id)arg1 ;
-(void)setPercentEncodedQuery:(id)arg1 ;
-(void)setPercentEncodedFragment:(id)arg1 ;
-(id)init;
-(id)scheme;
-(id)query;
-(id)path;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)URL;
-(void)setPath:(id)arg1 ;
-(id)host;
-(id)fragment;
-(id)port;
-(void)setScheme:(id)arg1 ;
@end

