/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSWPParagraphStyle, NSString, TSCH3DLabelBitmapContextInfo;

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying> {

	TSWPParagraphStyle* mParagraphStyle;
	NSString* mString;
	TSCH3DLabelBitmapContextInfo* mBitmapContextInfo;
	float mLabelWidth;
	float mRenderSamples;

}

@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) TSCH3DLabelBitmapContextInfo * bitmapContextInfo; 
@property (nonatomic,readonly) float labelWidth; 
@property (nonatomic,readonly) float renderSamples; 
+(id)labelAttributesWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(float)arg4 renderSamples:(float)arg5 ;
-(id)paragraphStyle;
-(id)bitmapContextInfo;
-(float)renderSamples;
-(id)initWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(float)arg4 renderSamples:(float)arg5 ;
-(float)labelWidth;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)string;
@end

