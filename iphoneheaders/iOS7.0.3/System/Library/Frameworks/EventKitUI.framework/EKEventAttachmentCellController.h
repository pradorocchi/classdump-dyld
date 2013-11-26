/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@protocol EKEventAttachmentCellControllerDelegate;
@class EKEventAttachmentCell, EKAttachment, ;

@interface EKEventAttachmentCellController : NSObject <UIDocumentInteractionControllerDelegate> {

	id _downloadID;
	EKEventAttachmentCell* _cell;
	BOOL _sourceIsManaged;
	EKAttachment* _attachment;
	<EKEventAttachmentCellControllerDelegate>* _delegate;

}

@property (readonly) EKEventAttachmentCell * cell;                                                     //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) EKAttachment * attachment;                                                //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) <EKEventAttachmentCellControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                                     //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
+(id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2 ;
+(BOOL)_attachmentIsViewable:(id)arg1 ;
-(void)tearDown;
-(void)cellSelected;
-(id)initWithAttachment:(id)arg1 ;
-(void)_clearDownloadID;
-(void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2 ;
-(id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2 ;
-(void)_presentPreviewOnMainThreadWithInfo:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)cell;
-(BOOL)sourceIsManaged;
-(void)documentInteractionControllerWillEndPreview:(id)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(id)documentInteractionControllerViewForPreview:(id)arg1 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(void)setAttachment:(id)arg1 ;
-(id)attachment;
-(void).cxx_destruct;
@end

