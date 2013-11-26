/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OCPPackagePart, NSDictionary;

@interface OAVShapeManager : NSObject {

	xmlNode* mShape;
	unsigned short mType;
	OCPPackagePart* mPackagePart;
	NSDictionary* mShapeStyle;
	NSDictionary* mTextBoxStyle;

}
-(void)dealloc;
-(unsigned short)type;
-(id)path;
-(id)shadowColor;
-(xmlNode*)shape;
-(float)shadowAlpha;
-(float)strokeWidth;
-(id)textRotation;
-(id)textAnchor;
-(id)packagePart;
-(id)fillFgColor;
-(BOOL)isStroked;
-(id)strokeFgColor;
-(id)fillBgColor;
-(id)strokeBgColor;
-(BOOL)isFilled;
-(BOOL)isFillOK;
-(BOOL)isStrokeOK;
-(BOOL)isShadowOK;
-(id)strokeFillType;
-(float)strokeFgAlpha;
-(float)strokeMiterLimit;
-(id)strokeCompoundType;
-(id)strokeCapStyle;
-(id)strokeJoinStyle;
-(id)strokeStartArrowType;
-(id)strokeStartArrowWidth;
-(id)strokeStartArrowLength;
-(id)strokeEndArrowType;
-(id)strokeEndArrowWidth;
-(id)strokeEndArrowLength;
-(BOOL)isShadowed;
-(id)shadowType;
-(id)fillType;
-(float)fillFgAlpha;
-(float)fillBgAlpha;
-(float)fillAngle;
-(float)fillFocus;
-(id)fillGradientColors;
-(id)limo;
-(id)imageFillId;
-(id)imageRelId;
-(id)movieRelId;
-(CGPoint)shadowOffsets;
-(id)initWithShape:(xmlNode*)arg1 type:(unsigned short)arg2 packagePart:(id)arg3 ;
-(BOOL)isImage;
-(BOOL)isWordArt;
-(id)textBodyRects;
-(id)imageFillTitle;
-(id)strokeDashStyle;
-(id)textWrapStyle;
-(BOOL)autoInsets;
-(id)textLayoutFlow;
-(id)textAltLayoutFlow;
-(BOOL)fitShapeToText;
-(OAVTextBoxInsets)textInsets;
@end

