/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLRemotePrintPageHelper.h>

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLRemotePrintPageHelper {

	NSMutableArray* _nodes;
	UIWebPaginationInfo* _paginationInfo;

}
-(id)_htmlPageXPath;
-(id)pdfDataForPageAtIndex:(int)arg1 withSize:(CGSize)arg2 printingDone:(BOOL*)arg3 ;
-(id)_currentNodes;
-(void)dealloc;
-(int)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
@end

