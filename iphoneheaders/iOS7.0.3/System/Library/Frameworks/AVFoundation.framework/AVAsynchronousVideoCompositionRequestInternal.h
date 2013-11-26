/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AVVideoCompositionInstruction;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVVideoCompositionRenderContext, NSDictionary, NSArray, ;

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject {

	AVWeakReference* _session;
	AVVideoCompositionRenderContext* _renderContext;
	OpaqueFigVideoCompositorFrameRef _compositionFrame;
	SCD_Struct_CM4 _compositionTime;
	NSDictionary* _sourcesByTrackID;
	NSArray* _sourceTrackIDsInClientOrder;
	<AVVideoCompositionInstruction>* _instruction;
	BOOL _isFinished;

}

@property (nonatomic,retain) AVWeakReference * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVVideoCompositionRenderContext * renderContext;                //@synthesize renderContext=_renderContext - In the implementation block
@property (assign,nonatomic) OpaqueFigVideoCompositorFrameRef compositionFrame;              //@synthesize compositionFrame=_compositionFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_CM4 compositionTime;                                 //@synthesize compositionTime=_compositionTime - In the implementation block
@property (nonatomic,retain) NSDictionary * sourcesByTrackID;                                //@synthesize sourcesByTrackID=_sourcesByTrackID - In the implementation block
@property (nonatomic,retain) NSArray * sourceTrackIDsInClientOrder;                          //@synthesize sourceTrackIDsInClientOrder=_sourceTrackIDsInClientOrder - In the implementation block
@property (nonatomic,retain) <AVVideoCompositionInstruction> * instruction;                  //@synthesize instruction=_instruction - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                //@synthesize isFinished=_isFinished - In the implementation block
-(id)session;
-(void)setSession:(id)arg1 ;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(id)renderContext;
-(void)setRenderContext:(id)arg1 ;
-(void)setCompositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 ;
-(SCD_Struct_CM4)compositionTime;
-(void)setCompositionTime:(SCD_Struct_CM4)arg1 ;
-(id)sourcesByTrackID;
-(void)setSourcesByTrackID:(id)arg1 ;
-(id)instruction;
-(void)setInstruction:(id)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(id)sourceTrackIDsInClientOrder;
-(void)setSourceTrackIDsInClientOrder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isFinished;
@end

