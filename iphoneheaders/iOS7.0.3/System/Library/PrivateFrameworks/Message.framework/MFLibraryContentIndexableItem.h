/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray;

@interface MFLibraryContentIndexableItem : NSObject {

	unsigned _documentIdentifier;
	NSString* _content;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _senders;
	NSString* _subject;
	unsigned _mailboxID;

}

@property (assign,nonatomic) unsigned documentIdentifier;              //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * content;                         //@synthesize content=_content - In the implementation block
@property (nonatomic,copy) NSArray * to;                               //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                               //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * senders;                          //@synthesize senders=_senders - In the implementation block
@property (nonatomic,copy) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) unsigned mailboxID;                       //@synthesize mailboxID=_mailboxID - In the implementation block
-(void)dealloc;
-(int)compare:(id)arg1 ;
-(id)content;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(id)senders;
-(unsigned)mailboxID;
-(void)setMailboxID:(unsigned)arg1 ;
-(id)cc;
-(id)initWithDocumentIdentifier:(unsigned)arg1 ;
-(void)setCc:(id)arg1 ;
-(void)setSenders:(id)arg1 ;
-(unsigned)documentIdentifier;
-(void)setDocumentIdentifier:(unsigned)arg1 ;
-(id)to;
-(void)setTo:(id)arg1 ;
-(void)setContent:(id)arg1 ;
@end

