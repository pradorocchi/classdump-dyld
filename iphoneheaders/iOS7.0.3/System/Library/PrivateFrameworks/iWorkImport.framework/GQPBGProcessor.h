/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQPProcessor.h>

@interface GQPBGProcessor : GQPProcessor {

	Class mGenerator;

}
-(BOOL)go;
-(id)initWithPath:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(CFStringRef)arg4 previewRequest:(QLPreviewRequestRef)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7 zipArchive:(id)arg8 cryptoKey:(id)arg9 ;
-(id)initWithPath:(id)arg1 zipArchive:(id)arg2 indexFileName:(id)arg3 outputType:(int)arg4 outputPath:(CFStringRef)arg5 previewRequest:(QLPreviewRequestRef)arg6 progressiveHelper:(id)arg7 generator:(Class)arg8 cryptoKey:(id)arg9 ;
-(void)pushInitialState;
-(Class)generator;
@end

