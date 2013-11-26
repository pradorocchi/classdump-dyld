/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/Message-Structs.h>
#import <Message/DeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount {

	Class _deliveryClass;
	MFSMTPConnection* _connection;
	NSTimer* _timer;
	long _lastTimerSetTime;
	unsigned _supportsPipelining : 1;
	unsigned _supportsOutboxCopy : 1;
	unsigned _useCellDataOnly : 1;

}
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(unsigned)defaultPortNumber;
+(id)displayedShortAccountTypeString;
+(void*)legacyKeychainProtocol;
+(BOOL)isCommonPortNumber:(unsigned)arg1 ;
+(id)saslProfileName;
+(id)newDefaultInstance;
+(void)registerAppleServiceDeliveryHostname:(id)arg1 ;
-(id)serviceName;
-(void)dealloc;
-(void)releaseAllConnections;
-(id)preferredAuthScheme;
-(BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned)arg1 ;
-(Class)connectionClass;
-(id)certUIService;
-(CFStringRef)connectionServiceType;
-(void)releaseAllForcedConnections;
-(void)setPreferredAuthScheme:(id)arg1 ;
-(id)alternateConnectionSettings;
-(id)insecureConnectionSettings;
-(id)secureConnectionSettings;
-(Class)deliveryClass;
-(BOOL)canBeFallbackAccount;
-(BOOL)supportsOutboxCopy;
-(id)authenticatedConnection:(BOOL)arg1 ;
-(void)setSupportsOutboxCopy:(BOOL)arg1 ;
-(id)errorForResponse:(id)arg1 ;
-(BOOL)supportsPipelining;
-(id)_defaultSettingsWithPort:(unsigned)arg1 useSSL:(BOOL)arg2 directSSL:(BOOL)arg3 ;
-(id)connectionSettingsForAuthentication:(BOOL)arg1 secure:(id)arg2 insecure:(id)arg3 ;
-(void)setSupportsPipelining:(BOOL)arg1 ;
-(void)disconnect:(id)arg1 ;
-(void)connectionExpired:(id)arg1 ;
-(void)setTimer;
-(BOOL)_isAppleServiceDeliveryHostname:(id)arg1 ;
-(void)setDeliveryClass:(Class)arg1 ;
-(id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2 ;
-(void)checkInConnection:(id)arg1 ;
@end

