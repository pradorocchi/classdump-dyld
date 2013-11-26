/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <CoreFoundation/NSCoding.h>

@protocol SKPhysicsContactDelegate;
@class ;

@interface SKPhysicsWorld : NSObject <NSCoding> {

	float speed;
	<SKPhysicsContactDelegate>* _contactDelegate;
	CGVector _gravity;

}

@property (assign,nonatomic) CGVector gravity;                                          //@synthesize gravity=_gravity - In the implementation block
@property (assign,nonatomic) float speed; 
@property (assign,nonatomic) <SKPhysicsContactDelegate> * contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)hasBodies;
-(void)removeAllBodies;
-(void)removeAllJoints;
-(void)enumerateBodiesAtPoint:(CGPoint)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)enumerateBodiesAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(id)bodyAtPoint:(CGPoint)arg1 ;
-(id)bodyInRect:(CGRect)arg1 ;
-(id)bodyAlongRayStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSpeed:(float)arg1 ;
-(float)speed;
-(void)removeJoint:(id)arg1 ;
-(void)addJoint:(id)arg1 ;
-(void)addBody:(id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(id).cxx_construct;
-(id)contactDelegate;
-(void)setContactDelegate:(id)arg1 ;
-(void)enumerateBodiesInRect:(CGRect)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned)arg2 positionIterations:(unsigned)arg3 ;
-(CGVector)gravity;
-(void)setGravity:(CGVector)arg1 ;
-(id)bodies;
@end

