/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray, NSMutableArray;

@interface CKPreferredServiceManager : NSObject {

	NSArray* _servicePrecedence;
	NSArray* _potentialServices;
	NSMutableArray* _knownHandles;

}

@property (nonatomic,copy) NSArray * servicePrecedence;              //@synthesize servicePrecedence=_servicePrecedence - In the implementation block
@property (nonatomic,copy) NSArray * potentialServices;              //@synthesize potentialServices=_potentialServices - In the implementation block
+(id)alloc;
+(id)sharedPreferredServiceManager;
-(void)dealloc;
-(id)init;
-(BOOL)availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(BOOL)arg3 ;
-(id)preferredServiceForConversation:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char*)arg4 ;
-(BOOL)isMultiService;
-(id)preferredService;
-(void)refreshAvailabilityForMFComposeRecipients:(id)arg1 ;
-(void)prepareForResume;
-(id)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char*)arg4 ;
-(void)_handleConnectionChanged:(id)arg1 ;
-(void)_handleLoginStatusChange:(id)arg1 ;
-(void)_handleOperationalAccountsChanged:(id)arg1 ;
-(void)_handleIMHandleIDStatusChanged:(id)arg1 ;
-(void)_handleDeviceCapabilitiesChanged:(id)arg1 ;
-(void)_handleServiceAvailabilityChanged:(id)arg1 ;
-(void)setPotentialServices:(id)arg1 ;
-(void)_updatePotentialServices;
-(id)potentialServices;
-(void)setServicePrecedence:(id)arg1 ;
-(void)_clearCaches;
-(id)_preferredServiceForHandles:(id)arg1 allowUnknown:(BOOL)arg2 checkWithServer:(BOOL)arg3 ;
-(id)servicePrecedence;
-(unsigned)__preferredServiceTypeForRecipientCount:(int)arg1 options:(unsigned)arg2 error:(char*)arg3 ;
-(BOOL)_availabilityForHandle:(id)arg1 onService:(id)arg2 checkWithServer:(BOOL)arg3 actualHandle:(id*)arg4 ;
-(id)_preferredServiceForRecipientsCount:(int)arg1 options:(unsigned)arg2 error:(char*)arg3 ;
-(id)_preferredServiceForAddressStrings:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char*)arg4 ;
-(id)_preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char*)arg4 ;
-(unsigned)_optionsForRecipients:(id)arg1 ;
-(id)_preferredServiceForHandles:(id)arg1 options:(unsigned)arg2 error:(char*)arg3 ;
-(BOOL)_isiMessageAvailable;
-(unsigned)__preferrediMessageFallbackServiceForRecipientCount:(int)arg1 iMessageAvailable:(BOOL)arg2 options:(unsigned)arg3 error:(char*)arg4 ;
-(void)notifyOfServiceAvailabilityChange;
-(void)notifyOfPotentialServicesChange;
-(void)refreshAvailabilityForAddressStrings:(id)arg1 ;
-(void)refreshAvailabilityForConversation:(id)arg1 ;
-(id)preferredServiceForAddressString:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char*)arg4 ;
-(id)preferredServiceForHandle:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char*)arg4 ;
-(id)preferredServiceForMFComposeRecipients:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 error:(char*)arg4 ;
-(BOOL)availabilityForAddress:(id)arg1 onService:(id)arg2 checkWithServer:(BOOL)arg3 ;
-(void)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 checkWithServer:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
@end

