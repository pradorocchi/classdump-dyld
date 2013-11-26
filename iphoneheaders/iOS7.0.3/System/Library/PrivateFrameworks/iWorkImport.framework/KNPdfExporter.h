/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/KNRenderingExporter.h>
#import <iWorkImport/TSKEncryptedDocumentExporter.h>

@class NSDictionary;

@interface KNPdfExporter : KNRenderingExporter <TSKEncryptedDocumentExporter> {

	NSDictionary* mOptions;

}
-(void)setPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setPrintPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setCopyPassphrase:(id)arg1 hint:(id)arg2 ;
-(id)p_renderingExporterDelegate;
-(void)dealloc;
-(void)setOptions:(id)arg1 ;
@end

