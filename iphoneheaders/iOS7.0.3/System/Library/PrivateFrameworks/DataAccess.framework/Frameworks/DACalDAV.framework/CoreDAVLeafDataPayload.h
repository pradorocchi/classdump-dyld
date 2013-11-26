/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CoreDAVLeafDataPayload <NSObject>
@property (retain) NSURL * serverID; 
@property (readonly) NSData * dataPayload; 
@property (readonly) NSString * syncKey; 
@property (readonly) NSArray * childrenOrder; 
@optional
-(id)childrenOrder;

@required
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
-(id)dataPayload;
-(void)setServerID:(id)arg1;
-(id)serverID;
-(id)syncKey;
@end

