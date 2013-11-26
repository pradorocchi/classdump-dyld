/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill {

	OADColor* mFgColor;
	BOOL mIsFgColorOverridden;
	OADColor* mBgColor;
	BOOL mIsBgColorOverridden;
	OADPattern* mPattern;
	BOOL mIsPatternOverridden;

}
+(id)defaultProperties;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)initWithDefaults;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)isFgColorOverridden;
-(BOOL)isBgColorOverridden;
-(BOOL)isPatternOverridden;
-(id)namedImageDataWithBlipCollection:(id)arg1 ;
-(id)bgColor;
-(void)setBgColor:(id)arg1 ;
-(id)fgColor;
-(void)setFgColor:(id)arg1 ;
-(id)pattern;
-(void)setPattern:(id)arg1 ;
-(void)setParent:(id)arg1 ;
@end

