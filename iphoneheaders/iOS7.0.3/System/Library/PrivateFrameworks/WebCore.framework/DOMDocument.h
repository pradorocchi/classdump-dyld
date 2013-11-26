/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/DOMNode.h>

@class DOMDocumentType, DOMImplementation, DOMElement, NSString, DOMAbstractView, DOMStyleSheetList, DOMHTMLElement, DOMHTMLCollection;

@interface DOMDocument : DOMNode

@property (readonly) DOMDocumentType * doctype; 
@property (readonly) DOMImplementation * implementation; 
@property (readonly) DOMElement * documentElement; 
@property (readonly) NSString * inputEncoding; 
@property (readonly) NSString * xmlEncoding; 
@property (copy) NSString * xmlVersion; 
@property (assign) BOOL xmlStandalone; 
@property (copy) NSString * documentURI; 
@property (readonly) DOMAbstractView * defaultView; 
@property (readonly) DOMStyleSheetList * styleSheets; 
@property (copy) NSString * title; 
@property (readonly) NSString * referrer; 
@property (readonly) NSString * domain; 
@property (readonly) NSString * URL; 
@property (copy) NSString * cookie; 
@property (retain) DOMHTMLElement * body; 
@property (readonly) DOMHTMLCollection * images; 
@property (readonly) DOMHTMLCollection * applets; 
@property (readonly) DOMHTMLCollection * links; 
@property (readonly) DOMHTMLCollection * forms; 
@property (readonly) DOMHTMLCollection * anchors; 
@property (readonly) NSString * lastModified; 
@property (copy) NSString * charset; 
@property (readonly) NSString * defaultCharset; 
@property (readonly) NSString * readyState; 
@property (readonly) NSString * characterSet; 
@property (readonly) NSString * preferredStylesheetSet; 
@property (copy) NSString * selectedStylesheetSet; 
-(id)createBlockPlaceholder;
-(void)dd_resetResults;
-(id)_documentRange;
-(id)webFrame;
-(id)URLWithAttributeString:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)domain;
-(id)images;
-(id)title;
-(id)body;
-(id)createRange;
-(id)URL;
-(id)createCSSStyleDeclaration;
-(id)doctype;
-(id)getComputedStyle:(id)arg1 pseudoElement:(id)arg2 ;
-(id)createElement:(id)arg1 ;
-(id)documentElement;
-(id)links;
-(id)forms;
-(id)getElementsByTagName:(id)arg1 ;
-(id)createNodeIterator:(id)arg1 whatToShow:(unsigned)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4 ;
-(void)setBody:(id)arg1 ;
-(id)implementation;
-(id)inputEncoding;
-(id)xmlEncoding;
-(id)xmlVersion;
-(void)setXmlVersion:(id)arg1 ;
-(BOOL)xmlStandalone;
-(void)setXmlStandalone:(BOOL)arg1 ;
-(id)documentURI;
-(void)setDocumentURI:(id)arg1 ;
-(id)defaultView;
-(id)styleSheets;
-(id)referrer;
-(id)cookie;
-(void)setCookie:(id)arg1 ;
-(id)head;
-(id)applets;
-(id)anchors;
-(id)lastModified;
-(id)charset;
-(void)setCharset:(id)arg1 ;
-(id)defaultCharset;
-(id)readyState;
-(id)characterSet;
-(id)preferredStylesheetSet;
-(id)selectedStylesheetSet;
-(void)setSelectedStylesheetSet:(id)arg1 ;
-(id)compatMode;
-(id)visibilityState;
-(BOOL)hidden;
-(id)createDocumentFragment;
-(id)createTextNode:(id)arg1 ;
-(id)createComment:(id)arg1 ;
-(id)createCDATASection:(id)arg1 ;
-(id)createProcessingInstruction:(id)arg1 data:(id)arg2 ;
-(id)createProcessingInstruction:(id)arg1 :(id)arg2 ;
-(id)createAttribute:(id)arg1 ;
-(id)createEntityReference:(id)arg1 ;
-(id)importNode:(id)arg1 deep:(BOOL)arg2 ;
-(id)importNode:(id)arg1 :(BOOL)arg2 ;
-(id)createElementNS:(id)arg1 qualifiedName:(id)arg2 ;
-(id)createElementNS:(id)arg1 :(id)arg2 ;
-(id)createAttributeNS:(id)arg1 qualifiedName:(id)arg2 ;
-(id)createAttributeNS:(id)arg1 :(id)arg2 ;
-(id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2 ;
-(id)getElementsByTagNameNS:(id)arg1 :(id)arg2 ;
-(id)getElementById:(id)arg1 ;
-(id)adoptNode:(id)arg1 ;
-(id)createEvent:(id)arg1 ;
-(id)createNodeIterator:(id)arg1 :(unsigned)arg2 :(id)arg3 :(BOOL)arg4 ;
-(id)createTreeWalker:(id)arg1 whatToShow:(unsigned)arg2 filter:(id)arg3 expandEntityReferences:(BOOL)arg4 ;
-(id)createTreeWalker:(id)arg1 :(unsigned)arg2 :(id)arg3 :(BOOL)arg4 ;
-(id)getOverrideStyle:(id)arg1 pseudoElement:(id)arg2 ;
-(id)getOverrideStyle:(id)arg1 :(id)arg2 ;
-(id)createExpression:(id)arg1 resolver:(id)arg2 ;
-(id)createExpression:(id)arg1 :(id)arg2 ;
-(id)createNSResolver:(id)arg1 ;
-(id)evaluate:(id)arg1 contextNode:(id)arg2 resolver:(id)arg3 type:(unsigned short)arg4 inResult:(id)arg5 ;
-(id)evaluate:(id)arg1 :(id)arg2 :(id)arg3 :(unsigned short)arg4 :(id)arg5 ;
-(BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 value:(id)arg3 ;
-(BOOL)execCommand:(id)arg1 userInterface:(BOOL)arg2 ;
-(BOOL)execCommand:(id)arg1 ;
-(BOOL)queryCommandEnabled:(id)arg1 ;
-(BOOL)queryCommandIndeterm:(id)arg1 ;
-(BOOL)queryCommandState:(id)arg1 ;
-(BOOL)queryCommandSupported:(id)arg1 ;
-(id)queryCommandValue:(id)arg1 ;
-(id)getElementsByName:(id)arg1 ;
-(id)elementFromPoint:(int)arg1 y:(int)arg2 ;
-(id)caretRangeFromPoint:(int)arg1 y:(int)arg2 ;
-(id)getComputedStyle:(id)arg1 :(id)arg2 ;
-(id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 ;
-(id)getMatchedCSSRules:(id)arg1 pseudoElement:(id)arg2 authorOnly:(BOOL)arg3 ;
-(id)getElementsByClassName:(id)arg1 ;
-(id)querySelector:(id)arg1 ;
-(id)querySelectorAll:(id)arg1 ;
-(id)webkitGetNamedFlows;
-(id)createTouch:(id)arg1 target:(id)arg2 identifier:(int)arg3 pageX:(int)arg4 pageY:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 ;
-(id)createTouchList;
@end

