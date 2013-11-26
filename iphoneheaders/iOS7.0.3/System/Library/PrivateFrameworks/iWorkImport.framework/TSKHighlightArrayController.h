/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKPulseAnimationControllerProtocol.h>

@protocol TSKHighlightArrayControllerProtocol;
@class NSMutableArray, , NSArray;

@interface TSKHighlightArrayController : NSObject <TSKPulseAnimationControllerProtocol> {

	NSMutableArray* _layers;
	NSMutableArray* _controllers;
	float _zOrder;
	<TSKHighlightArrayControllerProtocol>* _delegate;
	BOOL _creatingLayers;
	CGAffineTransform _canvasTransform;
	CGAffineTransform _layerTransform;
	BOOL _shouldPulsate;
	BOOL _pulsating;
	BOOL _autohide;
	float _viewScale;

}

@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) float viewScale;                          //@synthesize viewScale=_viewScale - In the implementation block
@property (nonatomic,readonly) NSArray * layers;                       //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) BOOL shouldPulsate;                       //@synthesize shouldPulsate=_shouldPulsate - In the implementation block
@property (assign,nonatomic) BOOL pulsating;                           //@synthesize pulsating=_pulsating - In the implementation block
@property (assign,nonatomic) BOOL autohide;                            //@synthesize autohide=_autohide - In the implementation block
-(float)viewScale;
-(void)pulseAnimationDidStopForPulse:(id)arg1 ;
-(BOOL)pulsating;
-(void)setPulsating:(BOOL)arg1 ;
-(BOOL)autohide;
-(void)setAutohide:(BOOL)arg1 ;
-(void)setCanvasTransform:(CGAffineTransform)arg1 layerTransform:(CGAffineTransform)arg2 ;
-(id)initWithZOrder:(float)arg1 delegate:(id)arg2 ;
-(id)buildHighlightsForSearchReferences:(id)arg1 contentsScaleForLayers:(float)arg2 ;
-(BOOL)shouldPulsate;
-(void)setShouldPulsate:(BOOL)arg1 ;
-(void)dealloc;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)startAnimating;
-(void)reset;
-(void)stop;
-(void)disconnect;
-(void)setViewScale:(float)arg1 ;
-(id)layers;
@end

