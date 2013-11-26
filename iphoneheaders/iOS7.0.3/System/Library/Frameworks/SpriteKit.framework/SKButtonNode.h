/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKLabelNode.h>

@protocol SKButtonNodeDelegate;
@class NSObject, SKAction;

@interface SKButtonNode : SKLabelNode {

	NSObject<SKButtonNodeDelegate>* _delegate;
	SKAction* _downAction;
	SKAction* _upAction;
	/*^block*/ id _downBlock;
	/*^block*/ id _upBlock;
	/*^block*/ id _upInsideBlock;
	int _touches;

}

@property (assign,nonatomic,__weak) NSObject<SKButtonNodeDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKAction * downAction;                                         //@synthesize downAction=_downAction - In the implementation block
@property (nonatomic,retain) SKAction * upAction;                                           //@synthesize upAction=_upAction - In the implementation block
+(id)buttonWithFontNamed:(id)arg1 ;
-(void)setDownAction:(id)arg1 ;
-(void)setUpAction:(id)arg1 ;
-(void)touchBegan:(unsigned)arg1 location:(CGPoint)arg2 ;
-(void)touchEnded:(unsigned)arg1 location:(CGPoint)arg2 ;
-(void)touchMoved:(unsigned)arg1 location:(CGPoint)arg2 ;
-(void)onTouchUpInside:(/*^block*/ id)arg1 ;
-(void)onTouchUp:(/*^block*/ id)arg1 ;
-(void)onTouchDownInside:(/*^block*/ id)arg1 ;
-(id)downAction;
-(id)upAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void).cxx_destruct;
@end

