/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFramebufferAccumulationPipeline.h>

@interface TSCH3DRGBA8FramebufferAccumulationPipeline : TSCH3DFramebufferAccumulationPipeline
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(id)RGBA8Accumulator;
-(id)RGBA8Resolver;
-(id)accumulationFBOResource;
-(void)deallo;
-(void)setFramebufferSize:(tvec2<int>*)arg1 ;
@end

