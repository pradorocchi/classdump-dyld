/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSKCompatibilityDelegate <NSObject>
@optional
-(BOOL)isExportSupportedForType:(id)arg1 documentRoot:(id)arg2;
-(id)backwardsCompatibleTypeForType:(id)arg1;
-(id)unsupportedExportMessageStringForType:(id)arg1;

@required
-(id)nestedDocumentFilename;
-(Class)exporterClassForType:(id)arg1 options:(id)arg2;
-(BOOL)isSageDocumentType:(id)arg1;
-(Class)importerClassForType:(id)arg1;
-(Class)exportOptionsControllerClass;
-(id)exportableTypes;
-(BOOL)isTCMessageExceptionErrorDomain:(id)arg1;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;
@end

