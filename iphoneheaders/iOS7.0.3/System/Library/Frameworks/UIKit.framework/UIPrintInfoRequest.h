/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PKPrinter;

@interface UIPrintInfoRequest : NSObject {

	PKPrinter* _printer;
	int _requestState;
	/*^block*/ id _completionHandler;

}

@property (assign,nonatomic) int requestState;                //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)requestInfoForPrinter:(id)arg1 ;
-(void)dealloc;
-(/*^block*/ id)completionHandler;
-(void)requestPrintInfo;
-(int)requestState;
-(void)setRequestState:(int)arg1 ;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
@end

