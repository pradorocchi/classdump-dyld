/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <routined/RTNotifier.h>

@interface RTDataProtectionManager : RTNotifier {

	BOOL _unlockedSinceBoot;
	int _encryptedDataAvailability;

}

@property (assign,nonatomic) int encryptedDataAvailability;              //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (assign,nonatomic) BOOL unlockedSinceBoot;                     //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
+(id)RTDataProtectionManagerLockStateToString:(int)arg1 ;
+(id)RTDataProtectionManagerEncryptedDataAvailabilityToString:(int)arg1 ;
+(id)sharedInstance;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)unlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)setEncryptedDataAvailability:(int)arg1 ;
-(int)encryptedDataAvailability;
-(void)handkeKeybagLockStatusChange:(int)arg1 ;
-(void)handleUnlockedSinceBoot;
-(void)dealloc;
-(id)init;
@end

