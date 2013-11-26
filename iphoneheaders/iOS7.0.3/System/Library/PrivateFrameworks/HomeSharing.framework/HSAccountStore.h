/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SSURLConnectionRequest, NSString;

@interface HSAccountStore : NSObject {

	int _defaultsDidChangeToken;
	SSURLConnectionRequest* _groupIDRequest;

}

@property (nonatomic,@dynamic,copy) NSString * appleID; 
@property (nonatomic,@dynamic,copy) NSString * password; 
@property (nonatomic,@dynamic,copy) NSString * groupID; 
@property (nonatomic,retain) SSURLConnectionRequest * groupIDRequest;              //@synthesize groupIDRequest=_groupIDRequest - In the implementation block
+(id)defaultStore;
-(void)clearCaches;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)appleID;
-(void)setAppleID:(id)arg1 ;
-(id)groupID;
-(BOOL)canDetermineGroupID;
-(void)determineGroupIDWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearGroupID;
-(void)clearAllCredentials;
-(id)groupIDRequest;
-(void)setGroupIDRequest:(id)arg1 ;
-(void)setGroupID:(id)arg1 ;
@end

