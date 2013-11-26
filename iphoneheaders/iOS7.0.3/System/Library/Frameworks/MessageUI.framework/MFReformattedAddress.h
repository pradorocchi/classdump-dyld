/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSString;

@interface MFReformattedAddress : NSObject {

	NSString* _address;
	NSRange _middleTruncationRange;

}

@property (nonatomic,readonly) NSString * localPart; 
@property (nonatomic,readonly) NSString * domainPart; 
@property (assign,nonatomic) NSRange middleTruncationRange;              //@synthesize middleTruncationRange=_middleTruncationRange - In the implementation block
-(id)initWithAddress:(id)arg1 ;
-(id)attributedStringWithFontSize:(float)arg1 maximumWidth:(float)arg2 options:(unsigned)arg3 ;
-(float)widthWithFontSize:(float)arg1 maximumWidth:(float)arg2 options:(unsigned)arg3 ;
-(id)localPart;
-(void)setMiddleTruncationRange:(NSRange)arg1 ;
-(NSRange)middleTruncationRange;
-(id)domainPart;
-(void)dealloc;
-(id)description;
@end

