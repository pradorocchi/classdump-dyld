/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPObject.h>

@class KNUIState;

@interface KNArchivedUIState : TSPObject {

	KNUIState* mUIState;

}

@property (nonatomic,readonly) KNUIState * uiState; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)uiState;
-(id)initWithUIState:(id)arg1 context:(id)arg2 ;
-(void)dealloc;
@end

