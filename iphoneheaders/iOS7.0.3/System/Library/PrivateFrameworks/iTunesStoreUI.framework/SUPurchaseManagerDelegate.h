/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SUPurchaseManagerDelegate <NSObject>
@optional
-(void)purchaseManagerWillBeginUpdates:(id)arg1;
-(void)purchaseManagerDidEndUpdates:(id)arg1;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
-(void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
-(void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;
@end

