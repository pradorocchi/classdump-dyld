/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIRotatingActionSheet.h>

@class UIWebDocumentView;

@interface UIWebRotatingSheet : _UIRotatingActionSheet {

	BOOL _wasDeferringCallbacks;
	UIWebDocumentView* _webBrowserView;

}
-(void)dealloc;
-(void)doneWithSheet;
-(id)initWithUIWebDocumentView:(id)arg1 ;
-(BOOL)presentSheet;
-(void)_enableWebView;
-(void)_disableWebView;
@end

