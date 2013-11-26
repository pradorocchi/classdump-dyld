/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSLock, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/ id _outputBlock;
	SKUIResourceRequest* _request;

}

@property (readonly) SKUIResourceRequest * resourceRequest; 
@property (retain) SKUIClientContext * clientContext; 
@property (copy) id outputBlock; 
-(void)setOutputBlock:(/*^block*/ id)arg1 ;
-(id)init;
-(void)main;
-(id)clientContext;
-(id)initWithResourceRequest:(id)arg1 ;
-(id)resourceRequest;
-(/*^block*/ id)outputBlock;
-(id)_initSKUILoadResourceOperation;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

