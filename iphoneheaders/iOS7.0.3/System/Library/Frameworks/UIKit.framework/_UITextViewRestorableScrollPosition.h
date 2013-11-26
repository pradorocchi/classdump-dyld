/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCoding.h>

@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding> {

	NSRange _range;
	float _offsetInLine;

}
+(id)restorableScrollPositionForTextView:(id)arg1 ;
+(id)restorableScrollPositionWithRange:(NSRange)arg1 ;
+(id)restorableScrollPositionWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSRange)range;
-(id)dictionaryRepresentation;
-(float)offsetWithinLine;
-(id)initWithTextView:(id)arg1 ;
@end

