/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OTACrashCopier/OTAXPCServiceConnection.h>

@interface OTATaskingAgentConnection : OTAXPCServiceConnection
+(id)sharedConnection;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(id)init;
@end

