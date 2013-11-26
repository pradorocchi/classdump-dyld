/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer {

	CGSize _constraintSize;
	BOOL _custom;

}

@property (assign,nonatomic) CGSize constraintSize;              //@synthesize constraintSize=_constraintSize - In the implementation block
+(id)consumerWithConstraintSize:(CGSize)arg1 ;
+(id)consumerWithConstraintSize2:(CGSize)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(CGSize)constraintSize;
-(void)setConstraintSize:(CGSize)arg1 ;
@end

