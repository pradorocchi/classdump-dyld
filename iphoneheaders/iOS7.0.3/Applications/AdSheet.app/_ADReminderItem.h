/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDate;

@interface _ADReminderItem : NSObject {

	NSString* _title;
	NSString* _notes;
	NSString* _location;
	BOOL _hasCoordinates;
	double _degreesLatitude;
	double _degreesLongitude;
	NSDate* _dueDate;

}
-(id)EKReminderInEventStore:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
@end

