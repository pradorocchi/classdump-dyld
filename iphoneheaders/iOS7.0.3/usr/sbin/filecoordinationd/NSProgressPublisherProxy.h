/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/filecoordinationd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSProgressPublisher.h>

@protocol NSProgressPublisher;
@class , NSMutableSet, NSString, NSFileAccessNode;

@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher> {

	<NSProgressPublisher>* _forwarder;
	id _publisherID;
	NSMutableSet* _lowerCaseBundleIDsOfUnacknowledgedApps;
	NSString* _lowerCaseCategoryName;
	NSFileAccessNode* _itemLocation;

}

@property (copy) NSString * category;                            //@synthesize lowerCaseCategoryName=_lowerCaseCategoryName - In the implementation block
@property (assign) NSFileAccessNode * itemLocation; 
-(id)initWithForwarder:(id)arg1 publisherID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 ;
-(id)publisherID;
-(id)itemLocation;
-(void)setItemLocation:(id)arg1 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(oneway void)prioritize;
-(oneway void)startProvidingValuesWithInitialAcceptor:(/*^block*/ id)arg1 ;
-(oneway void)stopProvidingValues;
-(oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2 ;
-(void)dealloc;
-(id)description;
-(oneway void)cancel;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(oneway void)pause;
@end

