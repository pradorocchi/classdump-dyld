/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MobilePhone/MobilePhone-Structs.h>
@class NSMutableArray, NSRecursiveLock;

@interface PHRecentsManager : NSObject {

	BOOL _showsFaceTimeCalls;
	BOOL _showsFaceTimeAudioCalls;
	BOOL _showsTelephonyCalls;
	NSMutableArray* calls;
	NSRecursiveLock* callsLock;

}

@property (assign) BOOL showsFaceTimeCalls;                   //@synthesize showsFaceTimeCalls=_showsFaceTimeCalls - In the implementation block
@property (assign) BOOL showsFaceTimeAudioCalls;              //@synthesize showsFaceTimeAudioCalls=_showsFaceTimeAudioCalls - In the implementation block
@property (assign) BOOL showsTelephonyCalls;                  //@synthesize showsTelephonyCalls=_showsTelephonyCalls - In the implementation block
@property (retain) NSMutableArray * calls; 
@property (retain) NSRecursiveLock * callsLock; 
+(int)numberOfUnseenMissedCalls;
-(BOOL)showsTelephonyCalls;
-(void)setShowsTelephonyCalls:(BOOL)arg1 ;
-(void)setShowsFaceTimeAudioCalls:(BOOL)arg1 ;
-(void)setShowsFaceTimeCalls:(BOOL)arg1 ;
-(id)recentCalls;
-(BOOL)dialRecentCall:(id)arg1 ;
-(void)deleteCall:(id)arg1 ;
-(void)deleteAllCalls;
-(void)setCallsLock:(id)arg1 ;
-(void)faceTimeAvailabilityChangedNotification:(id)arg1 ;
-(void)homeCountryCodeChangedNotification:(id)arg1 ;
-(void)phoneApplicationAddressBookChangedNotification:(id)arg1 ;
-(void)phoneApplicationLocaleChangedNotification:(id)arg1 ;
-(void)applicationDidReceiveMemoryWarningNotification:(id)arg1 ;
-(void)reloadCallsArrayIfNecessary;
-(void)reloadCallsArray;
-(BOOL)showsFaceTimeCalls;
-(BOOL)showsFaceTimeAudioCalls;
-(id)copyDisplayableCTCalls;
-(BOOL)recentsArray:(id)arg1 representsCTCallsArray:(id)arg2 ;
-(id)copyRecentCallsArrayWithCTCalls:(id)arg1 ;
-(id)callsLock;
-(void)callHistoryRecordAddedNotification:(CTCallRef)arg1 ;
-(void)callHistorySignificantChangeNotification;
-(void)markRepresentedCallsAsSeen;
-(void)dealloc;
-(id)init;
-(id)calls;
-(void)setCalls:(id)arg1 ;
@end

