/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/MFReader.h>

@class WMFPlayer;

@interface WMFReader : NSObject <MFReader> {

	int m_recordsRead;
	WMFPlayer* m_player;
	unsigned m_length;
	const char* m_pBuffer;
	unsigned m_cursor;

}
-(oneway void)release;
-(void)dealloc;
-(int)playHeaders;
-(int)playRecord;
-(int)checkBytesAvailable:(unsigned)arg1 ;
-(int)moveDataCursor:(unsigned)arg1 ;
-(int)play:(id)arg1 ;
-(id)initWithWMFPlayer:(id)arg1 ;
@end

