/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSData;

@interface TSCH3DMipmaps : NSObject {

	int mWidth;
	int mHeight;
	unsigned mComponents;
	NSData* mData;

}

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) unsigned components; 
@property (nonatomic,readonly) NSData * data; 
+(CGSize)optimizedMipmapLevel0Size;
+(CGSize)mipmapSizeForTexturableSize:(CGSize)arg1 ;
+(id)mipmapPathFromPath:(id)arg1 ;
+(id)mipmapsWithWidth:(int)arg1 height:(int)arg2 components:(unsigned)arg3 mipmapData:(id)arg4 ;
+(id)mipmapsFromData:(id)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 components:(unsigned)arg3 mipmapData:(id)arg4 ;
-(id)initFromData:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)data;
-(int)width;
-(int)height;
-(BOOL)valid;
-(unsigned)components;
@end

