/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSCHStyleSemanticTag;

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying> {

	TSCHStyleSemanticTag* mSemanticTag;
	int mProperty;

}
+(id)pairWithSemanticTag:(id)arg1 property:(int)arg2 ;
-(id)initWithSemanticTag:(id)arg1 property:(int)arg2 ;
-(id)semanticTag;
-(int)property;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

