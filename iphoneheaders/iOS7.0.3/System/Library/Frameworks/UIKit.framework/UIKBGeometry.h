/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {

	NSString* m_name;
	SCD_Struct_UI64 m_x;
	SCD_Struct_UI64 m_y;
	SCD_Struct_UI64 m_w;
	SCD_Struct_UI64 m_h;
	SCD_Struct_UI64 m_paddingTop;
	SCD_Struct_UI64 m_paddingLeft;
	SCD_Struct_UI64 m_paddingBottom;
	SCD_Struct_UI64 m_paddingRight;
	BOOL m_explicitlySpecified;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,setter=setX:,nonatomic) SCD_Struct_UI64 x; 
@property (assign,setter=setY:,nonatomic) SCD_Struct_UI64 y; 
@property (assign,setter=setW:,nonatomic) SCD_Struct_UI64 w; 
@property (assign,setter=setH:,nonatomic) SCD_Struct_UI64 h; 
@property (assign,setter=setPaddingTop:,nonatomic) SCD_Struct_UI64 paddingTop; 
@property (assign,setter=setPaddingLeft:,nonatomic) SCD_Struct_UI64 paddingLeft; 
@property (assign,setter=setPaddingBottom:,nonatomic) SCD_Struct_UI64 paddingBottom; 
@property (assign,setter=setPaddingRight:,nonatomic) SCD_Struct_UI64 paddingRight; 
@property (assign,nonatomic) BOOL explicitlySpecified; 
+(id)geometry;
+(id)geometryWithRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(SCD_Struct_UI64)x;
-(void)setX:(SCD_Struct_UI64)arg1 ;
-(SCD_Struct_UI64)y;
-(void)setY:(SCD_Struct_UI64)arg1 ;
-(SCD_Struct_UI64)paddingTop;
-(void)setPaddingTop:(SCD_Struct_UI64)arg1 ;
-(void)setPaddingLeft:(SCD_Struct_UI64)arg1 ;
-(SCD_Struct_UI64)paddingLeft;
-(SCD_Struct_UI64)paddingRight;
-(id)shortDescription;
-(void)setPaddingBottom:(SCD_Struct_UI64)arg1 ;
-(void)setPaddingRight:(SCD_Struct_UI64)arg1 ;
-(void)setExplicitlySpecified:(BOOL)arg1 ;
-(CGRect)paddedFrameWithResolvedFrame:(CGRect)arg1 ;
-(void)setW:(SCD_Struct_UI64)arg1 ;
-(void)setH:(SCD_Struct_UI64)arg1 ;
-(SCD_Struct_UI64)w;
-(SCD_Struct_UI64)h;
-(SCD_Struct_UI64)paddingBottom;
-(BOOL)explicitlySpecified;
-(CGRect)frameWithContainingFrame:(CGRect)arg1 ;
-(id)initWithName:(id)arg1 rect:(SCD_Struct_UI65)arg2 padding:(SCD_Struct_UI65)arg3 ;
-(CGRect)paddedFrameWithContainingFrame:(CGRect)arg1 ;
-(id)overrideGeometry:(id)arg1 ;
-(BOOL)usesPercentages;
@end

