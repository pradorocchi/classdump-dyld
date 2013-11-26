/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSCH3DResourceLoader, TSCH3DResource;

@interface TSCH3DResourceCacheKey : NSObject <NSCopying> {

	TSCH3DResourceLoader* mLoader;
	TSCH3DResource* mResource;
	int mVirtualScreen;

}

@property (nonatomic,readonly) TSCH3DResourceLoader * loader; 
@property (nonatomic,readonly) TSCH3DResource * resource; 
+(id)keyWithLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3 ;
-(id)initWithLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)resource;
-(id)loader;
@end

