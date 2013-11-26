/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebKit/WebKit-Structs.h>
@class NSArray, NSString;

@interface WebRenderLayer : NSObject {

	NSArray* children;
	NSString* name;
	NSString* compositingInfo;
	CGRect bounds;
	BOOL composited;
	BOOL separator;

}
+(id)nameForLayer:(RenderLayer*)arg1 ;
+(id)compositingInfoForLayer:(RenderLayer*)arg1 ;
-(void)dealloc;
-(id)name;
-(id).cxx_construct;
-(id)initWithName:(id)arg1 ;
-(id)widthString;
-(id)children;
-(void)buildDescendantLayers:(RenderLayer*)arg1 ;
-(id)initWithRenderLayer:(RenderLayer*)arg1 ;
-(id)positionString;
-(id)heightString;
-(id)compositingInfo;
-(BOOL)isComposited;
-(BOOL)isSeparator;
-(id)initWithWebFrame:(id)arg1 ;
@end

