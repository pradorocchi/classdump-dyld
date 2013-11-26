/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface ASPolicyManager : NSObject {

	id _delegate;
	BOOL _updatingPolicy;

}

@property (assign) <ASPolicyManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)policyKeyChanged:(id)arg1 ;
-(BOOL)updatingPolicy;
-(void)requestPolicyUpdate;
-(id)currentPolicyKey;
-(id)initWithAccount:(id)arg1 ;
@end

