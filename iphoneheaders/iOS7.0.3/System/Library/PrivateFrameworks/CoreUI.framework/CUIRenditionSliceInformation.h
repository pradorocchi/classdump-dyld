/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface CUIRenditionSliceInformation : NSObject <NSCopying> {

	int _renditionType;
	float _boundaries[4];
	CGRect _destinationRect;
	SCD_Struct_CU15 _edgeInsets;

}

@property (nonatomic,readonly) int renditionType;                       //@synthesize renditionType=_renditionType - In the implementation block
@property (nonatomic,readonly) CGRect destinationRect;                  //@synthesize destinationRect=_destinationRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU15 edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(SCD_Struct_CU15)edgeInsets;
-(CGRect)destinationRect;
-(float)positionOfSliceBoundary:(unsigned)arg1 ;
-(id)initWithSliceInformation:(id)arg1 destinationRect:(CGRect)arg2 ;
-(int)renditionType;
-(CGSize)_topLeftCapSize;
-(CGSize)_bottomRightCapSize;
-(id)initWithRenditionType:(int)arg1 destinationRect:(CGRect)arg2 topLeftInset:(CGSize)arg3 bottomRightInset:(CGSize)arg4 ;
@end

