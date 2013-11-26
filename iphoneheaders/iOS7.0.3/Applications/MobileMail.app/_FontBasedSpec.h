/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIFont, _MessageHeaderLayoutToolbox;

@interface _FontBasedSpec : NSObject {

	_FontBasedSpec* _shortVariant;
	UIFont* _font;
	_MessageHeaderLayoutToolbox* _toolbox;

}

@property (readonly) _FontBasedSpec * shortVariant;                    //@synthesize shortVariant=_shortVariant - In the implementation block
@property (assign) UIFont * font;                                      //@synthesize font=_font - In the implementation block
@property (assign) _MessageHeaderLayoutToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)fontSpecWithFont:(id)arg1 ;
-(float)leadingValueWithCoefficient:(float)arg1 ;
-(float)leadingValue;
-(id)shortVariant;
-(id)toolbox;
-(void)setToolbox:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
@end

