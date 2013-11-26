/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDPath.h>
#import <iWorkImport/GQDNameMappable.h>

@interface GQDBezierPath : GQDPath <GQDNameMappable> {

	CGPathRef mPath;
	char* mPathStr;
	BOOL mHasVFlip;
	BOOL mVFlip;
	BOOL mHasHFlip;
	BOOL mHFlip;

}
+(const StateSpec*)stateForReading;
+(CFStringRef)createCFStringFromPath:(CGPathRef)arg1 ;
-(BOOL)horizontalFlip;
-(BOOL)verticalFlip;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(id)initWithPathString:(const char*)arg1 ;
-(char*)pathStr;
-(CGPathRef)createBezierPath;
-(BOOL)hasVerticalFlip;
-(BOOL)hasHorizontalFlip;
-(void)dealloc;
-(CGPathRef)path;
-(BOOL)isRectangular;
@end

