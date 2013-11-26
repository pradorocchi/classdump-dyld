/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUILayoutRequest.h>

@class NSString;

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest> {

	float _fontSize;
	int _fontWeight;
	int _numberOfLines;
	NSString* _text;
	unsigned char _textAlignment;
	float _width;

}

@property (assign,nonatomic) float fontSize;                           //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) int fontWeight;                           //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) unsigned char textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) int numberOfLines;                        //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) float width;                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) Class layoutClass; 
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)text;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setTextAlignment:(unsigned char)arg1 ;
-(unsigned char)textAlignment;
-(void)setNumberOfLines:(int)arg1 ;
-(int)numberOfLines;
-(void)setFontSize:(float)arg1 ;
-(float)fontSize;
-(Class)layoutClass;
-(void).cxx_destruct;
-(int)fontWeight;
-(void)setFontWeight:(int)arg1 ;
@end

