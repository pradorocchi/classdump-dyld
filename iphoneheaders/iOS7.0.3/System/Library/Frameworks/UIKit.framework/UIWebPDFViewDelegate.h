/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIWebPDFViewDelegate
@optional
-(id)passwordForPDFView:(id)arg1;
-(void)didDetermineDocumentBounds:(id)arg1;
-(void)pdfView:(id)arg1 zoomToRect:(CGRect)arg2 forPoint:(CGPoint)arg3 considerHeight:(BOOL)arg4;
-(void)resetZoom:(id)arg1;
-(void)handleLinkClick:(id)arg1 inRect:(CGRect)arg2;
-(void)handleLongPressOnLink:(id)arg1 atPoint:(CGPoint)arg2 inRect:(CGRect)arg3 contentRect:(CGRect)arg4;
@end

