/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MIME/MIME-Structs.h>
@class NSMutableDictionary, MFMessageFileWrapper;

@interface MFMessageTextAttachment : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) MFMessageFileWrapper * fileWrapper; 
+(unsigned)precedenceLevel;
-(BOOL)isPass;
-(id)pass;
-(CGSize)mf_markupSizeForImageScale:(unsigned)arg1 ;
-(id)mf_markupURL;
-(id)mf_markupStringForComposition:(BOOL)arg1 prependBlankLine:(BOOL)arg2 imageScale:(unsigned)arg3 ;
-(void)setImageScalingFlags:(unsigned)arg1 ;
-(unsigned)imageScalingFlags;
-(void)scaleImageToFit:(unsigned)arg1 ;
-(BOOL)isCalendarFile;
-(BOOL)isDisplayableInline;
-(id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1 ;
-(BOOL)isContentOpenable;
-(BOOL)_isSinglePagePDFThatIsAllowedToBeInline;
-(id)unzippedContentType;
-(BOOL)isContentDownloadable;
-(BOOL)isDisplayableInsidePlugin;
-(id)mimeType;
-(id)contentType;
-(void)download;
-(unsigned)approximateSize;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(id)initWithWrapper:(id)arg1 ;
-(void)setMimePart:(id)arg1 ;
-(id)persistentUniqueIdentifier;
-(id)textEncodingGuess;
-(BOOL)needsRedownload;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isPlaceholder;
-(id)mimePart;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2 ;
-(BOOL)hasBeenDownloaded;
-(id)fileWrapper;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(void)setFileWrapper:(id)arg1 ;
@end

