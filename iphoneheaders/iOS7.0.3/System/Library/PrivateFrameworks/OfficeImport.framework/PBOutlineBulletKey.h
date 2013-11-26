/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface PBOutlineBulletKey : NSObject <NSCopying> {

	unsigned long mSlideId;
	int mTextType;
	unsigned long mPlaceholderIndex;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithOutlineBullet:(id)arg1 ;
-(id)initWithSlideId:(unsigned long)arg1 textType:(int)arg2 placeholderIndex:(unsigned long)arg3 ;
@end

