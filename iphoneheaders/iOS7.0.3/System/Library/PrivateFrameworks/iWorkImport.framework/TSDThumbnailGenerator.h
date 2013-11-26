/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDImager, TSKDocumentRoot;

@interface TSDThumbnailGenerator : NSObject {

	TSDImager* _imager;
	TSKDocumentRoot* _documentRoot;

}

@property (assign,nonatomic) CGColorRef backgroundColor; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)drawImageSynchronouslyForThumbnailId:(id)arg1 producer:(id)arg2 ;
-(void)generateThumbnailForThumbnailId:(id)arg1 consumer:(id)arg2 producer:(id)arg3 continueThumbnailing:(BOOL)arg4 ;
-(void)idle;
-(void)generateThumbnailForConsumer:(id)arg1 producer:(id)arg2 ;
-(BOOL)p_initialReadCallback:(id)arg1 ;
-(void)p_writeCallback:(id)arg1 ;
-(void)p_mainThreadReadCallback:(id)arg1 ;
-(CGImageRef)p_newThumbnailForProducer:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
@end

