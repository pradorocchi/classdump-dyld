/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDurationFormatter : NSFormatter {

	NSString* mFormat;

}

@property (nonatomic,copy) NSString * format; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(void)p_commonInit;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)format;
-(void)setFormat:(id)arg1 ;
@end

