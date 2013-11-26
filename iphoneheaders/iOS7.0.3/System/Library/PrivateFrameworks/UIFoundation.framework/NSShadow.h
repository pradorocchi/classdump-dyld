/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface NSShadow : NSObject <NSCopying, NSCoding> {

	unsigned _shadowFlags;
	id _shadowColor;
	float _shadowBlurRadius;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) CGSize shadowOffset;                 //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) float shadowBlurRadius;              //@synthesize shadowBlurRadius=_shadowBlurRadius - In the implementation block
@property (nonatomic,retain) id shadowColor;                      //@synthesize shadowColor=_shadowColor - In the implementation block
+(void)initialize;
+(id)shadow;
+(id)defaultShadowColor;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(id)shadowColor;
-(void)setShadowBlurRadius:(float)arg1 ;
-(float)shadowBlurRadius;
-(id)initWithShadow:(id)arg1 ;
@end

