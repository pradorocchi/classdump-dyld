/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:32:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLRegistrationLogger.bundle/PLRegistrationLogger
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PowerlogLoggerSupport/PLTelephonyConnectedLogger.h>

@class NSNumber, NSString;

@interface PLRegistrationLogger : PLTelephonyConnectedLogger {

	NSNumber* cellID;
	NSNumber* lac;
	NSNumber* dataAttached;
	NSNumber* dataActive;
	NSString* dataIndicator;
	NSNumber* homeNetwork;
	NSString* registrationStatus;
	NSString* operatorName;
	BOOL changed;

}

@property (nonatomic,copy) NSNumber * cellID; 
@property (nonatomic,copy) NSNumber * lac; 
@property (nonatomic,copy) NSNumber * dataAttached; 
@property (nonatomic,copy) NSNumber * dataActive; 
@property (nonatomic,copy) NSString * dataIndicator; 
@property (nonatomic,copy) NSNumber * homeNetwork; 
@property (nonatomic,copy) NSString * registrationStatus; 
@property (nonatomic,copy) NSString * operatorName; 
@property (assign,getter=isChanged,nonatomic) BOOL changed; 
-(void)setOperatorName:(id)arg1 ;
-(id)dataIndicator;
-(id)cellID;
-(id)lac;
-(id)homeNetwork;
-(id)dataActive;
-(id)dataAttached;
-(void)setHomeNetwork:(id)arg1 ;
-(void)setDataAttached:(id)arg1 ;
-(void)setDataActive:(id)arg1 ;
-(void)setLac:(id)arg1 ;
-(void)setDataIndicator:(id)arg1 ;
-(id)humanReadableDataIndicator:(id)arg1 ;
-(id)humanReadableRegistrationStatus:(id)arg1 ;
-(void)setCellID:(id)arg1 ;
-(void)dealloc;
-(void)log;
-(id)initWithConnection:(id)arg1 ;
-(id)registrationStatus;
-(void)setRegistrationStatus:(id)arg1 ;
-(void)setChanged:(BOOL)arg1 ;
-(BOOL)isChanged;
-(id)operatorName;
@end

