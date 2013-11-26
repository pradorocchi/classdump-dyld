/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/StarkSuggestionProvider.h>

@class EKEventStore;

@interface StarkEvents : NSObject <StarkSuggestionProvider> {

	EKEventStore* _eventStore;
	unsigned _entityType;

}
-(void)updateForLocation:(id)arg1 timePeriod:(id)arg2 distanceThreshold:(double)arg3 handler:(/*^block*/ id)arg4 ;
-(id)initWithEntityType:(unsigned)arg1 eventStore:(id)arg2 ;
-(void)_parseEvent:(id)arg1 structuredLocationHandler:(/*^block*/ id)arg2 addressDictionaryHandler:(/*^block*/ id)arg3 ;
-(void)_handleSortedEKEvents:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_fetchCalendarEventsWithPredicate:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_fetchReminderEventsWithPredicate:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_requestCalendarEventsMatchTimePeriod:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_requestReminderEventsMatchTimePeriod:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_requestEventsMatchingTimePeriod:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)dealloc;
@end

