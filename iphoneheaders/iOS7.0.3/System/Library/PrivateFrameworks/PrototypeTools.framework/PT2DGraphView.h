/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, PT2DGraphAxisStyle, UIColor, NSMutableArray;

@interface PT2DGraphView : UIView {

	NSArray* _provisionalData;
	float _xminimum;
	float _yminimum;
	float _xmaximum;
	float _ymaximum;
	PT2DGraphAxisStyle* _xaxisStyle;
	PT2DGraphAxisStyle* _yaxisStyle;
	UIColor* _groundColor;
	UIColor* _dataColor;
	UIColor* _provisionalDataColor;
	NSArray* _data;
	NSMutableArray* _provisionalDataSubviews;
	CGPoint _origin;
	CGSize _datumSize;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) float xminimum;                                        //@synthesize xminimum=_xminimum - In the implementation block
@property (assign,nonatomic) float yminimum;                                        //@synthesize yminimum=_yminimum - In the implementation block
@property (assign,nonatomic) float xmaximum;                                        //@synthesize xmaximum=_xmaximum - In the implementation block
@property (assign,nonatomic) float ymaximum;                                        //@synthesize ymaximum=_ymaximum - In the implementation block
@property (assign,nonatomic) CGPoint origin;                                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) PT2DGraphAxisStyle * xaxisStyle;                       //@synthesize xaxisStyle=_xaxisStyle - In the implementation block
@property (nonatomic,retain) PT2DGraphAxisStyle * yaxisStyle;                       //@synthesize yaxisStyle=_yaxisStyle - In the implementation block
@property (nonatomic,retain) UIColor * groundColor;                                 //@synthesize groundColor=_groundColor - In the implementation block
@property (nonatomic,retain) UIColor * dataColor;                                   //@synthesize dataColor=_dataColor - In the implementation block
@property (nonatomic,retain) UIColor * provisionalDataColor;                        //@synthesize provisionalDataColor=_provisionalDataColor - In the implementation block
@property (assign,nonatomic) CGSize datumSize;                                      //@synthesize datumSize=_datumSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                               //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) NSArray * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * provisionalData;                             //@synthesize provisionalData=_provisionalData - In the implementation block
@property (nonatomic,retain) NSMutableArray * provisionalDataSubviews;              //@synthesize provisionalDataSubviews=_provisionalDataSubviews - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(id)data;
-(void)setData:(id)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)datumSize;
-(id)provisionalDataColor;
-(void)setXaxisStyle:(id)arg1 ;
-(void)setYaxisStyle:(id)arg1 ;
-(void)setDataColor:(id)arg1 ;
-(void)setProvisionalDataColor:(id)arg1 ;
-(void)setDatumSize:(CGSize)arg1 ;
-(void)setXminimum:(float)arg1 ;
-(void)setXmaximum:(float)arg1 ;
-(void)setYminimum:(float)arg1 ;
-(void)setYmaximum:(float)arg1 ;
-(void)setProvisionalDataSubviews:(id)arg1 ;
-(float)xmaximum;
-(float)xminimum;
-(float)ymaximum;
-(float)yminimum;
-(id)provisionalDataSubviews;
-(id)xaxisStyle;
-(CGPoint)pointForText:(id)arg1 centeredOnPoint:(CGPoint)arg2 withAttributes:(id)arg3 ;
-(id)yaxisStyle;
-(id)dataColor;
-(void)setProvisionalData:(id)arg1 ;
-(id)provisionalData;
-(void)setGroundColor:(id)arg1 ;
-(id)groundColor;
-(void).cxx_destruct;
@end

