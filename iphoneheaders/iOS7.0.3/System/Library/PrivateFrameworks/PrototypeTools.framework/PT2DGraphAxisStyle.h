/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIColor, NSString;

@interface PT2DGraphAxisStyle : NSObject {

	BOOL _showsGridlines;
	BOOL _showsHashmarks;
	BOOL _showsTitle;
	UIColor* _color;
	float _lineWidth;
	float _hashmarkInterval;
	NSString* _title;
	UIColor* _gridlineColor;
	UIColor* _titleColor;
	unsigned _gridlineCount;

}

@property (nonatomic,retain) UIColor * color;                      //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float lineWidth;                      //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) float hashmarkInterval;               //@synthesize hashmarkInterval=_hashmarkInterval - In the implementation block
@property (assign,nonatomic) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * gridlineColor;              //@synthesize gridlineColor=_gridlineColor - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                 //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) unsigned gridlineCount;               //@synthesize gridlineCount=_gridlineCount - In the implementation block
@property (assign,nonatomic) BOOL showsGridlines;                  //@synthesize showsGridlines=_showsGridlines - In the implementation block
@property (assign,nonatomic) BOOL showsHashmarks;                  //@synthesize showsHashmarks=_showsHashmarks - In the implementation block
@property (assign,nonatomic) BOOL showsTitle;                      //@synthesize showsTitle=_showsTitle - In the implementation block
-(id)init;
-(void)setTitle:(id)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(id)title;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)titleColor;
-(void)setTitleColor:(id)arg1 ;
-(void)setGridlineCount:(unsigned)arg1 ;
-(void)setGridlineColor:(id)arg1 ;
-(void)setShowsGridlines:(BOOL)arg1 ;
-(float)hashmarkInterval;
-(void)setHashmarkInterval:(float)arg1 ;
-(id)gridlineColor;
-(unsigned)gridlineCount;
-(BOOL)showsGridlines;
-(BOOL)showsHashmarks;
-(void)setShowsHashmarks:(BOOL)arg1 ;
-(BOOL)showsTitle;
-(void)setShowsTitle:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

