/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSMutableDictionary, NSArray;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding> {

	NSMutableDictionary* _actionDisplayNames;
	NSMutableDictionary* _actionParameters;
	NSArray* _items;
	NSMutableDictionary* _priceDisplayNames;

}

@property (nonatomic,readonly) NSArray * personalizedItems; 
-(void)dealloc;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)_setPersonalizedItems:(id)arg1 ;
-(id)personalizedItems;
-(void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2 ;
-(void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2 ;
-(void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2 ;
-(id)actionParametersForItemIdentifier:(id)arg1 ;
-(id)priceDisplayForItemType:(id)arg1 ;
-(id)actionDisplayNameForItemType:(id)arg1 ;
@end

