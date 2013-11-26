/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>
#import <Message/QLPreviewItem.h>

@class NSUUID, NSString, NSURL;

@interface QLPreviewItemProxy : NSObject <NSSecureCoding, QLPreviewItem> {

	NSUUID* _uuid;
	NSString* _fileExtensionToken;
	int _fileExtensionHandle;
	int _index;
	NSURL* _url;
	NSString* _title;
	NSURL* _urlForDisplay;
	NSString* _contentType;
	NSString* _password;

}

@property (readonly) NSUUID * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (retain) NSURL * urlForDisplay;                      //@synthesize urlForDisplay=_urlForDisplay - In the implementation block
@property (retain) NSString * contentType;                     //@synthesize contentType=_contentType - In the implementation block
@property (retain) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (assign) int index;                                  //@synthesize index=_index - In the implementation block
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
+(id)encodedClasses;
+(id)proxyWithPreviewItem:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(void)issueFileExtension;
-(void)consumeFileExtension;
-(id)initWithPreviewItem:(id)arg1 ;
-(id)urlForDisplay;
-(void)setUrlForDisplay:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)title;
-(int)index;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(id)previewItemURL;
-(id)previewItemContentType;
-(id)previewItemURLForDisplay;
-(id)previewItemTitle;
-(void)setIndex:(int)arg1 ;
-(void)setContentType:(id)arg1 ;
-(id)contentType;
-(id)uuid;
@end

