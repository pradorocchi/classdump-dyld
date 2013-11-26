/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSData, EKEventStore, NSMutableArray, NSArray;

@interface EKICSPreviewModel : NSObject {

	NSData* _data;
	EKEventStore* _tempStore;
	EKEventStore* _destStore;
	NSMutableArray* _importedEvents;
	NSMutableArray* _unimportedEvents;
	unsigned _options;
	int _actionsState;

}

@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) unsigned totalEventCount; 
@property (nonatomic,readonly) unsigned importedEventCount; 
@property (nonatomic,readonly) unsigned unimportedEventCount; 
@property (nonatomic,readonly) int actionsState; 
@property (nonatomic,readonly) NSArray * importedEvents; 
@property (nonatomic,readonly) NSArray * unimportedEvents; 
@property (nonatomic,readonly) NSArray * allEvents; 
-(id)eventStore;
-(int)actionsState;
-(id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned)arg3 ;
-(unsigned)totalEventCount;
-(unsigned)unimportedEventCount;
-(id)importedEvents;
-(id)unimportedEvents;
-(id)importAllIntoCalendar:(id)arg1 ;
-(id)importEvent:(id)arg1 intoCalendar:(id)arg2 ;
-(unsigned)importedEventCount;
-(id)allEvents;
-(void).cxx_destruct;
@end

