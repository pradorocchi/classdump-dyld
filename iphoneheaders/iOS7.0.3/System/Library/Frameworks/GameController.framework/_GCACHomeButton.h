/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameController/_GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;
@class ;

@interface _GCACHomeButton : _GCControllerButtonInput {

	<_GCACHomeButtonDelegate>* _delegate;
	BOOL needsReset;

}
-(id)initWithDelegate:(id)arg1 ;
-(void).cxx_destruct;
-(BOOL)_setValue:(float)arg1 ;
@end

