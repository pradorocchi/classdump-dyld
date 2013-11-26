/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface OADDashStop : NSObject <NSCopying> {

	float mDash;
	float mSpace;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(float)dash;
-(float)space;
-(id)initWithDash:(float)arg1 space:(float)arg2 ;
@end

