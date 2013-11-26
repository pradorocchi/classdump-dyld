/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface UICompositeImageView : UIView {

	NSMutableArray* m_images;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)addImage:(id)arg1 toRect:(CGRect)arg2 fromRect:(CGRect)arg3 operation:(int)arg4 fraction:(float)arg5 ;
-(void)addImage:(id)arg1 ;
-(void)addImage:(id)arg1 operation:(int)arg2 fraction:(float)arg3 ;
-(void)addImage:(id)arg1 toRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(void)removeAllImages;
@end

