/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MSSharingProtocolDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSString, NSURL, NSArray, ;

@interface MSSharingProtocol : NSObject {

	MSShPCContext* _context;
	NSString* _personID;
	NSURL* _inviteURL;
	NSURL* _manageURL;
	NSURL* _respondURL;
	NSURL* _statusURL;
	NSArray* _shares;
	int _transactionType;
	<MSSharingProtocolDelegate>* _delegate;

}

@property (assign,nonatomic) <MSSharingProtocolDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                               //@synthesize personID=_personID - In the implementation block
+(id)shareFromPushUserInfo:(id)arg1 outSourcePersonID:(id*)arg2 outTargetPersonID:(id*)arg3 outError:(id*)arg4 ;
+(id)shareStateFromProtocol:(id)arg1 ;
+(id)_invalidFieldErrorWithFieldName:(id)arg1 ;
+(int)_shareStateFromShareDictShareState:(id)arg1 ;
+(id)_dictShareStateFromShareState:(int)arg1 ;
+(id)_shareFromShareDict:(id)arg1 ;
+(id)_shareDictFromShare:(id)arg1 ;
+(id)_shareDictsArrayFromShares:(id)arg1 ;
+(id)_sharesFromShareDictsArray:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_didFindServerSideConfigurationVersion:(id)arg1 ;
-(void)deleteShares:(id)arg1 ;
-(void)sendInvitations:(id)arg1 ;
-(void)sendResponseToInvitation:(id)arg1 accept:(BOOL)arg2 ;
-(void)modifyShares:(id)arg1 ;
-(void)requestCurrentShareState;
-(void)_checkForFailedInvitesWithResponse:(id)arg1 ;
-(void)_didFindShareState:(id)arg1 ;
-(void)_didFinishTransactionWithResponseObject:(id)arg1 error:(id)arg2 ;
-(void)_didFailAuthenticationWithError:(id)arg1 ;
-(void)abort;
-(id)personID;
-(void).cxx_destruct;
@end

