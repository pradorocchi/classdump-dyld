/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UILabel.h>

@class NSString, NSDictionary;

@interface TwoPartTopBarLabel : UILabel {

	BOOL _willUpdateText;
	int _arrangement;
	NSString* _primaryText;
	NSString* _secondaryText;
	NSDictionary* _primaryTextAttributes;
	NSDictionary* _secondaryTextAttributes;

}

@property (assign,nonatomic) int arrangement;                                   //@synthesize arrangement=_arrangement - In the implementation block
@property (nonatomic,copy) NSString * primaryText;                              //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                            //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,copy) NSDictionary * primaryTextAttributes;                //@synthesize primaryTextAttributes=_primaryTextAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * secondaryTextAttributes;              //@synthesize secondaryTextAttributes=_secondaryTextAttributes - In the implementation block
+(void)getPrimaryText:(out id*)arg1 secondaryText:(id*)arg2 forRemainingDistance:(double)arg3 detail:(int)arg4 ;
+(void)getPrimaryText:(out id*)arg1 secondaryText:(id*)arg2 forRemainingTimeInterval:(double)arg3 ;
+(id)primaryTextForShortTimeWithoutAmPmForDate:(id)arg1 ;
+(void)_updateShortTimeFormatString;
+(id)dateFormatterForShortTimeWithoutAmPm;
+(void)getDisplayValue:(out id*)arg1 displayValueIsSingular:(BOOL*)arg2 unit:(out unsigned*)arg3 forRemainingTimeInterval:(double)arg4 ;
-(void)setSecondaryText:(id)arg1 ;
-(void)setArrangement:(int)arg1 ;
-(void)setPrimaryTextAttributes:(id)arg1 ;
-(void)setSecondaryTextAttributes:(id)arg1 ;
-(void)setPrimaryText:(id)arg1 ;
-(int)arrangement;
-(id)secondaryText;
-(id)primaryText;
-(id)primaryTextAttributes;
-(id)secondaryTextAttributes;
-(void)_setAttributedTextNeedsUpdate;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateText;
-(void)_updateAttributedText;
@end

