/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDBezierPath;

@interface GQDRLineEnd : NSObject <GQDNameMappable> {

	GQDBezierPath* mPath;
	CGPoint mEndPoint;
	BOOL mIsFilled;
	double mScale;

}
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(char*)pathStr;
-(CGPoint)endPoint;
-(void)dealloc;
-(double)scale;
-(CGPathRef)path;
-(id).cxx_construct;
-(BOOL)isFilled;
@end

