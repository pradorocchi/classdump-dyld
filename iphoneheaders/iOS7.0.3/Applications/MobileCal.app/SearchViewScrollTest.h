/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/ApplicationTest.h>

@class SearchViewContainedController;

@interface SearchViewScrollTest : ApplicationTest {

	float _totalScrollDistance;
	float _scrollDistanceInterval;
	float _scrollAccumulator;
	unsigned _iterations;
	BOOL _inputInvalid;
	SearchViewContainedController* _searchController;

}
-(void)runTest;
-(id)initWithApplication:(id)arg1 model:(id)arg2 options:(id)arg3 ;
-(void)_searchViewDidAppear;
-(void)_scrollView:(id)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
@end

