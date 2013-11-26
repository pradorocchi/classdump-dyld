/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/NSURLDownloadDelegate.h>

@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {

	id realDelegate;

}
-(void)setRealDelegate:(id)arg1 ;
-(void)download:(id)arg1 didFailWithError:(id)arg2 ;
-(void)downloadDidBegin:(id)arg1 ;
-(id)download:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)download:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)download:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)download:(id)arg1 didReceiveDataOfLength:(unsigned)arg2 ;
-(BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2 ;
-(void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 ;
-(void)download:(id)arg1 didCreateDestination:(id)arg2 ;
-(void)downloadDidFinish:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)download:(id)arg1 shouldBeginChildDownloadOfSource:(id)arg2 delegate:(id*)arg3 ;
-(void)download:(id)arg1 didBeginChildDownload:(id)arg2 ;
-(void)download:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
@end

