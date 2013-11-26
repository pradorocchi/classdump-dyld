/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSDate;

@interface AFBulletin : NSObject <NSSecureCoding> {

	BOOL _read;
	BOOL _allDay;
	NSString* _bulletinID;
	NSDate* _date;
	NSDate* _endDate;
	NSString* _message;
	NSString* _modalAlertContentMessage;
	NSDate* _recencyDate;
	NSString* _sectionID;
	NSString* _subtitle;
	NSString* _timeZone;
	NSString* _title;
	NSString* _displayName;

}

@property (assign,getter=isRead,nonatomic) BOOL read;                            //@synthesize read=_read - In the implementation block
@property (nonatomic,readonly) NSString * bulletinID;                            //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) BOOL allDay;                      //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * modalAlertContentMessage;              //@synthesize modalAlertContentMessage=_modalAlertContentMessage - In the implementation block
@property (nonatomic,readonly) NSDate * recencyDate;                             //@synthesize recencyDate=_recencyDate - In the implementation block
@property (nonatomic,readonly) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * timeZone;                              //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isAllDay;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)date;
-(id)title;
-(id)message;
-(id)subtitle;
-(id)timeZone;
-(id)displayName;
-(id)modalAlertContentMessage;
-(id)bulletinID;
-(id)sectionID;
-(id)recencyDate;
-(void)setBulletin:(id)arg1 ;
-(BOOL)isRead;
-(void)setRead:(BOOL)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)endDate;
-(void).cxx_destruct;
@end

