/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject {

	NSHashTable* _disabledContexts;
	BOOL _disabled;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)disableAutomaticAppearanceForContext:(id)arg1 ;
-(void)enableAutomaticAppearanceForContext:(id)arg1 ;
@end

