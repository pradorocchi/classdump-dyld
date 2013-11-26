/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <StoreKitUI/SSMetricsEventFieldProvider.h>

@class NSArray;

@interface SKUIFlowcaseComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSArray* _flowcaseItems;
	int _missingItemCount;

}

@property (nonatomic,readonly) NSArray * flowcaseItems;              //@synthesize flowcaseItems=_flowcaseItems - In the implementation block
-(int)componentType;
-(id)valueForMetricsField:(id)arg1 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(void)_updateWithMissingItems:(id)arg1 ;
-(id)flowcaseItems;
-(void).cxx_destruct;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2 ;
@end

