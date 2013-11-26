/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider {

	SUScriptCanvasFunction* _function;

}
-(void)dealloc;
-(id)initWithFunction:(id)arg1 ;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
-(id)copyMaskImageWithSize:(CGSize)arg1 ;
@end

