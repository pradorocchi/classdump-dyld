/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@protocol MNGuidanceManeuverViewTextureProvider, MNGuidanceManeuverViewDelegate;
@class MNJunction, , UIColor;

@interface MNGuidanceManeuverView : UIView {

	BOOL _disallowMutation;
	BOOL _alerting;
	BOOL _disallowManeuversWithoutArt;
	MNJunction* _junction;
	int _maneuver;
	int _drivingSide;
	<MNGuidanceManeuverViewTextureProvider>* _textureProvider;
	int _framing;
	UIColor* _arrowColor;
	UIColor* _accentColor;
	<MNGuidanceManeuverViewDelegate>* _delegate;
	SCD_Struct_MN4 _arrowMetrics;

}

@property (assign,nonatomic) int maneuver;                                             //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,readonly) int displayManeuver; 
@property (assign,nonatomic) int drivingSide;                                          //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,retain) MNJunction * junction;                                    //@synthesize junction=_junction - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN5 arrowMetrics;                              //@synthesize arrowMetrics=_arrowMetrics - In the implementation block
@property (assign,nonatomic) int framing;                                              //@synthesize framing=_framing - In the implementation block
@property (nonatomic,retain) UIColor * arrowColor;                                     //@synthesize arrowColor=_arrowColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                                    //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,getter=isAlerting,nonatomic) BOOL alerting;                          //@synthesize alerting=_alerting - In the implementation block
@property (assign,nonatomic) BOOL disallowManeuversWithoutArt;                         //@synthesize disallowManeuversWithoutArt=_disallowManeuversWithoutArt - In the implementation block
@property (assign,nonatomic) <MNGuidanceManeuverViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAccentColor:(id)arg1 ;
-(int)maneuver;
-(void)setManeuver:(int)arg1 ;
-(void)setFraming:(int)arg1 ;
-(void)setArrowMetrics:(SCD_Struct_MN5)arg1 ;
-(void)setJunction:(id)arg1 ;
-(id)junction;
-(id)initWithFrame:(CGRect)arg1 textureProvider:(id)arg2 ;
-(id)accentColor;
-(SCD_Struct_MN5)arrowMetrics;
-(int)framing;
-(CGAffineTransform)transformForDrawingPathsWithFrame:(CGRect)arg1 relativeToReferenceSize:(CGSize)arg2 ;
-(void)drawArrow:(id)arg1 stroke:(id)arg2 ;
-(void)drawIntersectionFill:(id)arg1 ;
-(void)drawIntersectionStroke:(id)arg1 forFill:(id)arg2 ;
-(BOOL)_maneuverIsDrawnByDrawRect;
-(void)getAlertingClipPath:(id*)arg1 strokePath:(id*)arg2 ;
-(int)displayManeuver;
-(void)drawArrival:(int)arg1 referenceSize:(CGSize)arg2 ;
-(void)drawArrow:(id)arg1 stroke:(id)arg2 withVisibleWidth:(float)arg3 intersectionFillPath:(id)arg4 intersectionStrokePath:(id)arg5 referenceSize:(CGSize)arg6 ;
-(BOOL)disallowManeuversWithoutArt;
-(void)disallowMutation;
-(void)setAlerting:(BOOL)arg1 ;
-(void)setDisallowManeuversWithoutArt:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(void)setDrivingSide:(int)arg1 ;
-(BOOL)isAlerting;
-(id)arrowColor;
-(void)setArrowColor:(id)arg1 ;
-(int)drivingSide;
@end

