/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface ECMappingContext : NSObject {

	map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > >* mIndexToMappedIndex;
	NSMutableDictionary* mSheetNameToMappedIndex;
	CFDictionaryRef mObjectToMappingInfo;
	NSMutableArray* mMappingInfos;

}
+(id)mappingContext;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(ChVector<OcText>*)mappedSheetNames;
-(unsigned)mappingInfoCount;
-(unsigned)mappedSheetIndexForSheetIndex:(unsigned)arg1 ;
-(unsigned)mappedSheetIndexForSheetName:(id)arg1 ;
-(id)mappingInfoForObject:(id)arg1 ;
-(id)mappingInfoAtIndex:(unsigned)arg1 ;
-(void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(unsigned)arg3 andObject:(id)arg4 ;
-(void).cxx_destruct;
@end

