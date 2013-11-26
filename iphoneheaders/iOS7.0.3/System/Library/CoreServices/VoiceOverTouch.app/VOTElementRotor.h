/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <vot/VOTRotor.h>

@class NSArray;

@interface VOTElementRotor : VOTRotor {

	NSArray* _enabledWebRotorItems;
	BOOL _showsWebSearchResults;

}

@property (assign,nonatomic) BOOL showsWebSearchResults;              //@synthesize showsWebSearchResults=_showsWebSearchResults - In the implementation block
-(void)updateRotorForElement:(id)arg1 application:(id)arg2 ;
-(void)setShowsWebSearchResults:(BOOL)arg1 ;
-(BOOL)showsWebSearchResults;
-(void)_updateWebRotorItems;
-(void)_promoteHandwritingRotorIfNeeded;
-(void)dealloc;
-(id)init;
@end

