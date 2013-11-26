/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBBulletinAttachmentFactory : NSObject
+(id)bannerTextForAdditionalAttachments:(unsigned)arg1 showingImage:(BOOL)arg2 ;
+(id)modalThumbnailConstraintsForAttachmentType:(int)arg1 ;
+(id)modalImageForAttachmentType:(int)arg1 thumbnailData:(id)arg2 ;
+(id)listTextForAdditionalAttachmentCount:(unsigned)arg1 ;
+(id)_genericImageForAttachmentType:(int)arg1 ;
+(id)_imageFromPNGData:(id)arg1 ;
+(id)_imageByCroppingOrPaddingImage:(id)arg1 toSize:(CGSize)arg2 ;
+(id)_listImageForAttachmentType:(int)arg1 thumbnailData:(id)arg2 forFloatingAlert:(BOOL)arg3 ;
+(id)_nMoreAttachments:(unsigned)arg1 ;
+(id)_nAttachments:(unsigned)arg1 ;
+(CGSize)listImageSizeForAttachmentType:(int)arg1 thumbnailWidth:(float)arg2 height:(float)arg3 ;
+(CGSize)bannerImageSizeForAttachmentType:(int)arg1 thumbnailWidth:(float)arg2 height:(float)arg3 ;
+(id)listThumbnailConstraintsForAttachmentType:(int)arg1 ;
+(id)lockScreenFloatingThumbnailContraintsForAttachmentType:(int)arg1 ;
+(id)bannerThumbnailConstraintsForAttachmentType:(int)arg1 ;
+(id)listImageForAttachmentType:(int)arg1 thumbnailData:(id)arg2 ;
+(id)lockScreenFloatingImageForAttachmentType:(int)arg1 thumbnailData:(id)arg2 ;
+(id)bannerImageForAttachmentType:(int)arg1 thumbnailData:(id)arg2 ;
@end

