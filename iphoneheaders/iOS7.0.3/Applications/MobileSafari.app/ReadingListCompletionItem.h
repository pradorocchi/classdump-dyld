/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WebBookmark;

@interface ReadingListCompletionItem : NSObject {

	WebBookmark* _bookmark;

}
-(id)completionTableViewCellReuseIdentifier;
-(id)completionTableViewCell;
-(void)configureCompletionTableViewCell:(id)arg1 ;
-(void)auditAcceptedCompletionWithRank:(unsigned)arg1 ;
-(void)acceptCompletionWithSearchAction:(/*^block*/ id)arg1 goToURLAction:(/*^block*/ id)arg2 findOnPageAction:(/*^block*/ id)arg3 ;
-(id)initWithReadingListBookmark:(id)arg1 ;
-(void)dealloc;
@end

