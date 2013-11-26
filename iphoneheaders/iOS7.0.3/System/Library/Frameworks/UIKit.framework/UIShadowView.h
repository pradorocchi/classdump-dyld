/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface UIShadowView : UIView {

	UIImage* _image;

}
+(id)topShadowImage;
+(id)bottomShadowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShadowImage:(id)arg1 forEdge:(unsigned)arg2 inside:(BOOL)arg3 ;
@end

