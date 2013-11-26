/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MapKit/MapKit-Structs.h>
@class NSNumberFormatter, NSMutableCharacterSet;

@interface MKRisonParser : NSObject {

	NSNumberFormatter* _formatter;
	NSMutableCharacterSet* _risonTerminators;
	NSMutableCharacterSet* _risonEscapes;

}
-(id)objectWithReaderInfo:(SCD_Struct_MK20*)arg1 ;
-(id)dictionaryWithReaderInfo:(SCD_Struct_MK20*)arg1 ;
-(id)stringLiteralWithReaderInfo:(SCD_Struct_MK20*)arg1 ;
-(id)arrayWithReaderInfo:(SCD_Struct_MK20*)arg1 ;
-(id)boolWithReaderInfo:(SCD_Struct_MK20*)arg1 ;
-(id)nullWithReaderInfo:(SCD_Struct_MK20*)arg1 ;
-(id)numberWithReaderInfo:(SCD_Struct_MK20*)arg1 ;
-(id)keyWithReaderInfo:(SCD_Struct_MK20*)arg1 ;
-(id)stringFromDictionary:(id)arg1 ;
-(id)stringFromArray:(id)arg1 ;
-(id)stringFromNull:(id)arg1 ;
-(id)stringFromRisonObject:(id)arg1 ;
-(id)objectFromRisonString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)stringFromNumber:(id)arg1 ;
-(id)stringFromString:(id)arg1 ;
@end

