/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class WDParagraph, OIXMLElement;

@interface WMParagraphMapper : CMMapper {

	WDParagraph* wdParagraph;
	WMParagraphMapper* mCurrentMapper;
	OIXMLElement* mActiveNode;
	BOOL mIsDeleted;

}
+(void)mapPlaceholderAt:(id)arg1 rect:(CGRect)arg2 withState:(id)arg3 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)activeNode;
-(void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3 ;
-(void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3 ;
-(id)runAtIndex:(int)arg1 ;
-(BOOL)isTextFrame;
-(BOOL)containsOfficeArt;
-(void)mapParagraphBodyWithState:(id)arg1 ;
-(BOOL)isCollapsable:(id)arg1 ;
-(id)initWithBlock:(id)arg1 parent:(id)arg2 ;
@end

