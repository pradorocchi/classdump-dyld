/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, TSUNoCopyDictionary;

@interface OADGraphicFeatureCache : NSObject {

	NSMutableArray* mFeatureUsageArray;
	TSUNoCopyDictionary* mFeatureMap;

}
-(void)dealloc;
-(id)init;
-(id)countedFeatureAtIndex:(unsigned)arg1 ;
-(unsigned)cacheFeature:(id)arg1 ;
-(id)featuresSortedByUsageCount;
@end

