/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBHandwritingPointFIFO : NSObject {

	UIKBHandwritingPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIKBHandwritingPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)clear;
-(void)addPoint:(CGPoint)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(id)arg1 ;
-(id)nextFIFO;
-(void)emitPoint:(CGPoint)arg1 ;
@end

