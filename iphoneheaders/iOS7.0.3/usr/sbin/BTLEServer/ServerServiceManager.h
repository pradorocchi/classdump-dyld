/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTLEServer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/CBPeripheralManagerDelegate.h>

@class CBPeripheralManager, NSMapTable, TransactionAssertion, NSMutableArray;

@interface ServerServiceManager : NSObject <CBPeripheralManagerDelegate> {

	CBPeripheralManager* _peripheralManager;
	NSMapTable* _serverServiceMap;
	BOOL _persist;
	TransactionAssertion* _persistanceAssertion;
	BOOL _shouldAdvertise;
	NSMutableArray* _pendingATTUpdates;

}
+(id)instance;
-(void)setShouldAdvertise:(BOOL)arg1 ;
-(void)setPersist:(BOOL)arg1 ;
-(void)refreshPersistanceAssertion;
-(void)setupAdvertising;
-(id)peripheralManagerStateString;
-(void)createServices;
-(void)destroyServices;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3 ;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)respondToRequest:(id)arg1 withResult:(int)arg2 ;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3 ;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1 ;
-(void)addService:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(void)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3 ;
-(id)init;
@end

