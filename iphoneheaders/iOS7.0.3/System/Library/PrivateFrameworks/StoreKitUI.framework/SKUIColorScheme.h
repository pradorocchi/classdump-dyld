/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding> {

	UIColor* _backgroundColor;
	UIColor* _highlightedTextColor;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;

}

@property (nonatomic,readonly) int schemeStyle; 
@property (nonatomic,copy) UIColor * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * highlightedTextColor;              //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,copy) UIColor * primaryTextColor;                  //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryTextColor;                //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)highlightedTextColor;
-(void)setHighlightedTextColor:(id)arg1 ;
-(id)primaryTextColor;
-(id)initWithColorSchemeDictionary:(id)arg1 ;
-(int)schemeStyle;
-(void)setPrimaryTextColor:(id)arg1 ;
-(id)secondaryTextColor;
-(void)setSecondaryTextColor:(id)arg1 ;
-(void).cxx_destruct;
@end

