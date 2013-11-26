/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CAReplicatorLayer.h>

@class CALayer;

@interface TSKTintLayer : CAReplicatorLayer {

	CALayer* _contentsLayer;

}

@property (nonatomic,retain) CALayer * contentsLayer;              //@synthesize contentsLayer=_contentsLayer - In the implementation block
@property (assign) CGColorRef tintColor; 
-(void)setContentsLayer:(id)arg1 ;
-(id)contentsLayer;
-(void)setNeedsDisplay;
-(id)contents;
-(CGColorRef)tintColor;
-(void)setTintColor:(CGColorRef)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)layoutSublayers;
@end

