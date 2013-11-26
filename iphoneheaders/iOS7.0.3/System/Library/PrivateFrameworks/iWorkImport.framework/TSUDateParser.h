/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSUDateParser : NSObject {

	NSMutableArray* mFormatCategories;
	CFLocaleRef mLocale;
	BOOL mIsJapaneseLocale;

}
+(id)parserForDefaultLocale;
-(void)dealloc;
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 preferredFormatString:(CFStringRef)arg2 succesTSUlFormatString:(const _CFString*)arg3 tryAggressiveFormats:(BOOL)arg4 ;
-(void)datePreferencesChanged:(id)arg1 ;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 formatCategoryMap:(id)arg3 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 succesTSUlFormatString:(const _CFString*)arg2 ;
-(void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3 ;
@end

