/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPath.h>

@class TSDBezierPath;

@interface MFPhonePath : MFPath {

	TSDBezierPath* m_path;
	int m_state;

}
-(BOOL)isOpen;
-(void)dealloc;
-(id)init;
-(int)state;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(CGPoint)currentPoint;
-(int)begin;
-(int)end;
-(int)flatten;
-(int)stroke:(id)arg1 ;
-(int)abort;
-(int)closeFigure;
-(int)widen:(id)arg1 ;
-(int)fill:(id)arg1 ;
-(void)appendBezierPath:(id)arg1 dc:(id)arg2 ;
-(id)initWithPath:(id)arg1 state:(int)arg2 ;
-(id)getBezierPath;
@end

