/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage;

@interface _UIImageViewPretiledImageCacheKey : NSObject {

	UIImage* _originalImage;
	CGSize _pretiledSize;

}
+(id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(CGSize)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end

