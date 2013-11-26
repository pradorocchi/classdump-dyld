/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSWPLineSpacing : NSObject <NSCopying> {

	int _mode;
	float _amount;
	float _baselineRule;

}
+(id)lineSpacing;
-(void)saveToArchive:(LineSpacingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const LineSpacingArchive*)arg1 unarchiver:(id)arg2 ;
-(float)baselineRule;
-(id)initWithMode:(int)arg1 amount:(float)arg2 baselineRule:(float)arg3 ;
-(id)initWithMode:(int)arg1 amount:(float)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)mode;
-(float)amount;
@end

