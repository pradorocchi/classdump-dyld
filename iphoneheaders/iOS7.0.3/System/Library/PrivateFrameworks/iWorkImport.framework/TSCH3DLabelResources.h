/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DStringIndexedResources.h>

@class NSMutableDictionary, TSCH3DTextureAtlas;

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources {

	NSMutableDictionary* mCache;
	TSCH3DTextureAtlas* mAtlas;

}

@property (nonatomic,readonly) TSCH3DTextureAtlas * atlas; 
-(void)setParagraphStyle:(id)arg1 atIndex:(const tvec2<int>*)arg2 ;
-(void)setParagraphStyle:(id)arg1 forKey:(unsigned)arg2 atIndex:(const tvec2<int>*)arg3 ;
-(id)resourceAtIndex:(const tvec2<int>*)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(float)arg4 ;
-(id)paragraphStyleForKey:(unsigned)arg1 defaultStyle:(id)arg2 ;
-(id)prepareTextureAtlasWithSamples:(float)arg1 ;
-(void)dealloc;
-(id)initWithSize:(const tvec2<int>*)arg1 ;
-(id)atlas;
@end

