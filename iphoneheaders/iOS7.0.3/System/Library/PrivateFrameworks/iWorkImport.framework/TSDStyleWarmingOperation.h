/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSOperation.h>

@class TSSStyle, TSKAccessController;

@interface TSDStyleWarmingOperation : NSOperation {

	TSSStyle* mStyle;
	int mProperty;
	TSKAccessController* mAccessController;

}
-(id)initWithStyle:(id)arg1 property:(int)arg2 accessController:(id)arg3 ;
-(void)warm;
-(void)main;
@end

