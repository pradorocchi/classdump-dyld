/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/SearchCompletionTableViewCell.h>

@class MKSearchCompletion;

@interface QueryCompletionTableViewCell : SearchCompletionTableViewCell {

	MKSearchCompletion* _completion;

}

@property (nonatomic,retain) MKSearchCompletion * completion;              //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end

