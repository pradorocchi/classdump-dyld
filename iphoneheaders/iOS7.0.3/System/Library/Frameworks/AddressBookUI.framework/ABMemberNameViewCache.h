/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSCache;

@interface ABMemberNameViewCache : NSObject {

	NSCache* _styleProvidersCache;

}
+(id)sharedInstance;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setNameLabelFrame:(CGRect)arg1 forStyleProvider:(id)arg2 ;
-(void)setNameLabelBaselineOffsetFromBottom:(float)arg1 forStyleProvider:(id)arg2 ;
-(id)memberNameRegularFontForStyleProvider:(id)arg1 ;
-(id)memberNameBoldFontForStyleProvider:(id)arg1 ;
-(id)memberNamePlaceholderFontForStyleProvider:(id)arg1 ;
-(bool)hasNameLabelFrameForStyleProvider:(id)arg1 ;
-(CGRect)nameLabelFrameForStyleProvider:(id)arg1 ;
-(float)nameLabelBaselineOffsetFromBottomForStyleProvider:(id)arg1 ;
-(id)regularTextAttributesForStyleProvider:(id)arg1 ;
-(id)boldTextAttributesForStyleProvider:(id)arg1 ;
-(id)_cacheForStyleProvider:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

