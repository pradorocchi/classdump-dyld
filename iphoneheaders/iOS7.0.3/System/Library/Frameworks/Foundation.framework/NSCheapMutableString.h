/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSCheapMutableString : NSMutableString {

	SCD_Union_NS42* contents;
	fields flags;
	unsigned numCharacters;
	void* _reserved;

}
-(const char*)cString;
-(unsigned)cStringLength;
-(unsigned)fastestEncoding;
-(const char*)lossyCString;
-(void)setContentsNoCopy:(void*)arg1 length:(unsigned)arg2 freeWhenDone:(BOOL)arg3 isUnicode:(BOOL)arg4 ;
-(void)dealloc;
-(unsigned)length;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned)arg2 usedLength:(unsigned*)arg3 encoding:(unsigned)arg4 options:(unsigned)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(void)finalize;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

