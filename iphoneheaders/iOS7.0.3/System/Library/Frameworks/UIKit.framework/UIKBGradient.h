/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray;

@interface UIKBGradient : NSObject <NSCopying> {

	NSString* _gradientName;
	NSString* _flatColorName;
	NSString* _startColorName;
	NSString* _endColorName;
	NSArray* _colors;
	float _middleLocation;
	BOOL _horizontal;

}

@property (assign,nonatomic) BOOL horizontal;              //@synthesize horizontal=_horizontal - In the implementation block
+(id)gradientWithFlatColor:(id)arg1 ;
+(id)gradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)gradientWith3Colors:(id)arg1 middleLocation:(float)arg2 ;
+(id)gradientWithName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setHorizontal:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)horizontal;
-(CGGradientRef)CGGradient;
-(id)initWithFlatColor:(id)arg1 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(id)initWith3Colors:(id)arg1 middleLocation:(float)arg2 ;
@end

