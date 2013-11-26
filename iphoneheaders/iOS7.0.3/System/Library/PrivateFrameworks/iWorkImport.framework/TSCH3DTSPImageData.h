/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DTSPImageDataTexture, TSPData;

@interface TSCH3DTSPImageData : NSObject <TSCHUnretainedParent> {

	TSCH3DTSPImageDataTexture* mParent;
	TSPData* mData;

}

@property (nonatomic,retain) TSPData * data; 
+(id)dataWithTSPImageData:(id)arg1 ;
-(CGImageRef)newCGImage;
-(void)clearParent;
-(id)databufferForDataCache:(id)arg1 ;
-(id)initWithTSPImageData:(id)arg1 ;
-(id)p_encodeImageSize:(tvec4<int>*)arg1 andMipmapData:(id)arg2 ;
-(id)uniqueFilename;
-(id)p_generateMipmapsBuffer;
-(id)p_decodeCachedData:(id)arg1 imageSize:(tvec4<int>*)arg2 ;
-(BOOL)canLoadCachedDataForDataCache:(id)arg1 ;
-(void)dealloc;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setParent:(id)arg1 ;
@end

