/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Game Center~iphone/Game Center~iphone-Structs.h>
@interface GKBubbleLocation : NSObject {

	float _z;
	CGPoint _point;

}

@property (assign,nonatomic) CGPoint point;              //@synthesize point=_point - In the implementation block
@property (assign,z,nonatomic) float z;                  //@synthesize z=_z - In the implementation block
+(id)locationAtPoint:(CGPoint)arg1 z:(float)arg2 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(float)z;
-(void)setZ:(float)arg1 ;
@end

