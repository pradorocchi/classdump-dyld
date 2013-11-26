/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSAImportController.h>
#import <iWorkImport/TSAImportDelegate.h>

@class NSString, NSError;

@interface TCAImportController : TSAImportController <TSAImportDelegate> {

	NSString* _passphrase;
	NSError* _passphraseError;

}
-(void)finishImportWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)willSaveImportedDocument;
-(void)importControllerDidRunOutOfSpace:(id)arg1 ;
-(id)initWithPath:(id)arg1 documentType:(id)arg2 ;
-(BOOL)importWithPassphrase:(id)arg1 ;
-(void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)templateInfoWithName:(id)arg1 ;
-(id)templateInfoWithName:(id)arg1 variantIndex:(unsigned)arg2 ;
-(void)dealloc;
-(void)addWarning:(id)arg1 ;
@end

