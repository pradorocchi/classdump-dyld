/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessageEntryTextView.h>
#import <ChatKit/NSTextStorageDelegate.h>

@class NSMutableDictionary, NSArray;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate> {

	BOOL _balloonColor;
	NSMutableDictionary* _mediaObjects;
	NSMutableDictionary* _composeImages;
	NSArray* _pasteboardValues;

}

@property (assign,nonatomic) BOOL balloonColor;                                //@synthesize balloonColor=_balloonColor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mediaObjects;               //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * composeImages;              //@synthesize composeImages=_composeImages - In the implementation block
@property (nonatomic,retain) NSArray * pasteboardValues;                       //@synthesize pasteboardValues=_pasteboardValues - In the implementation block
-(void)dealloc;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(void)setBalloonColor:(BOOL)arg1 ;
-(id)mediaObjects;
-(void)setPasteboardValues:(id)arg1 ;
-(id)compositionText;
-(id)pasteboardValues;
-(id)composeImageForTransferGUID:(id)arg1 ;
-(void)previewDidChange:(id)arg1 ;
-(void)setMediaObjects:(id)arg1 ;
-(void)setComposeImages:(id)arg1 ;
-(id)composeImages;
-(void)updateComposeImages;
-(BOOL)balloonColor;
-(void)textStorage:(id)arg1 willProcessEditing:(unsigned)arg2 range:(NSRange)arg3 changeInLength:(int)arg4 ;
-(void)setCompositionText:(id)arg1 ;
@end

