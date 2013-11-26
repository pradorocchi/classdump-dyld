/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <Message/MFWebAttachmentSource.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, MFConditionLock, NSArray;

@interface MFGenericAttachmentStore : MFWebAttachmentSource {

	CFDictionaryRef _attachmentSizes;
	NSMutableArray* _attachmentsOrder;
	unsigned _size;
	NSObject<OS_dispatch_queue>* _scalingQueue;
	MFConditionLock* _scalingThrottle;
	int _pendingImageScalingOperations;
	BOOL _outgoing;
	BOOL _didCancelImageScalingOperations;
	BOOL _isScalingEnabled;
	BOOL _isScalingThrottled;

}

@property (assign,nonatomic) BOOL scalingThrottled;                //@synthesize isScalingThrottled=_isScalingThrottled - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
+(void)beginPreventingInlinePDFs;
+(void)endPreventingInlinePDFs;
+(BOOL)isPreventingInlinePDFs;
+(void)addAttachmentUniqueIdentifierStore:(id)arg1 ;
-(void)cancelImageScalingOperations;
-(void)setScalingThrottled:(BOOL)arg1 ;
-(void)_enqueueScaleAttachment:(id)arg1 withFlags:(unsigned)arg2 originalSize:(unsigned)arg3 ;
-(void)_notifyAttachmentCachedSizesChanged;
-(BOOL)addAttachment:(id)arg1 allowingOverride:(/*^block*/ id)arg2 ;
-(void)_inrementPendingImageScalingOperations;
-(BOOL)didCancelImageScalingOperations;
-(void)_decrementPendingImageScalingOperations;
-(id)initOutgoing;
-(BOOL)hasPendingImageScalingOperations;
-(void)removeAttachmentsForURLs:(id)arg1 ;
-(BOOL)scalingThrottled;
-(unsigned long)sizeForScale:(unsigned)arg1 imagesOnly:(BOOL)arg2 ;
-(void)dealloc;
-(id)description;
-(BOOL)addAttachment:(id)arg1 ;
-(id)attachments;
-(BOOL)setAttachment:(id)arg1 forURL:(id)arg2 ;
-(void)removeAttachmentForURL:(id)arg1 ;
@end

