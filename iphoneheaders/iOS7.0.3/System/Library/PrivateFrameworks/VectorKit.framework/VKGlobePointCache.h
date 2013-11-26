/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKClassicGlobeCanvas, NSMapTable;

@interface VKGlobePointCache : NSObject {

	VKClassicGlobeCanvas* _canvas;
	NSMapTable* _poiMapTable;

}

@property (assign,nonatomic) VKClassicGlobeCanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(void)dealloc;
-(id)init;
-(id)canvas;
-(void)setCanvas:(id)arg1 ;
-(id)addHandleAtCoordinate:(SCD_Struct_VK61)arg1 withHighPrecision:(BOOL)arg2 ;
-(void)removeHandle:(id)arg1 ;
-(VKPoint)pointForHandle:(id)arg1 atCoordinate:(SCD_Struct_VK61)arg2 withHighPrecision:(BOOL)arg3 ;
@end

