/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACDDatabase;

@interface ACDClientAuthorizationManager : NSObject {

	ACDDatabase* _database;

}
-(id)initWithDatabase:(id)arg1 ;
-(id)_csvStringFromSet:(id)arg1 ;
-(id)allAuthorizationsForAccountType:(id)arg1 ;
-(id)authorizationForClient:(id)arg1 accountType:(id)arg2 ;
-(id)removeAuthorizationForClient:(id)arg1 accountType:(id)arg2 ;
-(id)_setFromCSVString:(id)arg1 ;
-(id)setAuthorization:(id)arg1 forClient:(id)arg2 onAccountType:(id)arg3 ;
-(id)removeAllClientAuthorizationsForAccountType:(id)arg1 ;
-(void).cxx_destruct;
@end

