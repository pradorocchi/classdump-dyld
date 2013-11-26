/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/webbookmarksd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSURL, NSDictionary;

@interface CloudTab : NSObject {

	BOOL _isShowingReader;
	NSString* _title;
	NSURL* _URL;
	NSDictionary* _readerScrollPositionDictionary;

}

@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) BOOL isShowingReader;                                     //@synthesize isShowingReader=_isShowingReader - In the implementation block
@property (nonatomic,copy) NSDictionary * readerScrollPositionDictionary;              //@synthesize readerScrollPositionDictionary=_readerScrollPositionDictionary - In the implementation block
-(BOOL)isShowingReader;
-(void)setIsShowingReader:(BOOL)arg1 ;
-(id)readerScrollPositionDictionary;
-(void)setReaderScrollPositionDictionary:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)title;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(id)_dictionaryRepresentation;
@end

