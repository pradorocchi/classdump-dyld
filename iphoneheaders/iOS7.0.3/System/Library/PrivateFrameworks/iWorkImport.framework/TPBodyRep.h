/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPRep.h>
#import <iWorkImport/TSKChangeSourceObserver.h>

@class NSSet;

@interface TPBodyRep : TSWPRep <TSKChangeSourceObserver> {

	NSSet* _lastSelectedInfos;

}
-(id)storage;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)willBeRemoved;
-(id)hitRep:(CGPoint)arg1 ;
-(id)hitReps:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(id)colorBehindLayer:(id)arg1 ;
-(id)repForCharIndex:(unsigned)arg1 isStart:(BOOL)arg2 ;
-(BOOL)p_doesRep:(id)arg1 containCharIndex:(unsigned)arg2 isStart:(BOOL)arg3 ;
-(void)dealloc;
-(id)beginEditing;
-(id)siblings;
@end

