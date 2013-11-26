/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, UIImage;

@interface SLAttachment : NSObject <NSSecureCoding> {

	/*^block*/ id _previewUpdateObserver;
	/*^block*/ id _payloadUpdateObserver;
	NSString* _identifier;
	BOOL _pendingPreviewProxy;
	int _previewType;
	UIImage* _previewImage;
	int _type;
	id _payload;
	int _downsampleStatus;

}

@property (assign) int previewType;                                 //@synthesize previewType=_previewType - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id payload;                              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) int downsampleStatus;                  //@synthesize downsampleStatus=_downsampleStatus - In the implementation block
@property (assign,nonatomic) BOOL pendingPreviewProxy;              //@synthesize pendingPreviewProxy=_pendingPreviewProxy - In the implementation block
+(BOOL)attachmentTypeRepresentsAnImage:(int)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_uniqueIdentifier;
-(int)previewType;
-(void)setPendingPreviewProxy:(BOOL)arg1 ;
-(void)setPreviewUpdateObserverWithBlock:(/*^block*/ id)arg1 ;
-(id)initWithPayload:(id)arg1 type:(int)arg2 previewImage:(id)arg3 ;
-(void)setDownsampleStatus:(int)arg1 ;
-(int)downsampleStatus;
-(void)setPreviewImage:(id)arg1 ;
-(void)setPreviewType:(int)arg1 ;
-(BOOL)pendingPreviewProxy;
-(void)setPayloadUpdateObserverWithBlock:(/*^block*/ id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)identifier;
-(id)previewImage;
-(id)payload;
-(void)setPayload:(id)arg1 ;
-(void).cxx_destruct;
@end

