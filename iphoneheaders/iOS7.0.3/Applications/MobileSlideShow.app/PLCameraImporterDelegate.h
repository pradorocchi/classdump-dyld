/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSlideShow.app/MobileSlideShow
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLCameraImporterDelegate <NSObject>
@required
-(void)importerDidFinishReadingImportItems:(id)arg1 error:(id)arg2;
-(void)importer:(id)arg1 didAddImportItem:(id)arg2 atIndex:(unsigned)arg3;
-(void)importer:(id)arg1 didChangeImportItem:(id)arg2 changeType:(int)arg3 error:(id)arg4;
-(void)importer:(id)arg1 didRemoveImportItems:(id)arg2 atIndexes:(id)arg3;
-(void)importer:(id)arg1 didCopyOriginalForItem:(id)arg2 error:(id)arg3;
-(void)importer:(id)arg1 didCompleteImportForItems:(id)arg2;
-(void)importer:(id)arg1 didImportItem:(id)arg2 error:(id)arg3;
-(void)importer:(id)arg1 didCompleteRemovalOfItems:(id)arg2;
@end

