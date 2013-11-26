/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@protocol UITextInput;
@class UITextPosition, ;

@interface AXTextViewLineElement : UIAccessibilityElement {

	UITextPosition* _start;
	UITextPosition* _end;
	<UITextInput>* _input;
	NSRange _rangeInDocument;

}

@property (nonatomic,retain) UITextPosition * start;               //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) UITextPosition * end;                 //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) <UITextInput> * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) int lineKey; 
@property (assign,nonatomic) NSRange rangeInDocument;              //@synthesize rangeInDocument=_rangeInDocument - In the implementation block
-(int)lineKey;
-(NSRange)rangeInDocument;
-(void)setRangeInDocument:(NSRange)arg1 ;
-(void)setInput:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(id)input;
-(id)start;
-(id)end;
-(id)range;
-(CGRect)accessibilityFrame;
-(void)setStart:(id)arg1 ;
-(void)setEnd:(id)arg1 ;
@end

