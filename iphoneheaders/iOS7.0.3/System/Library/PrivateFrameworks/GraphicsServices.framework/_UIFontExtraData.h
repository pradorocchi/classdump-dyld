/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GraphicsServices.framework/GraphicsServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GraphicsServices/GraphicsServices-Structs.h>
@class NSData, NSCharacterSet;

@interface _UIFontExtraData : NSObject {

	NSData* _latin1MappingTable;
	NSCharacterSet* _coveredCharacterSet;
	float _ascender;
	float _descender;
	float _lineHeight;
	float _lineGap;
	struct {
		unsigned _initialized : 1;
		unsigned _isSystemFont : 1;
		unsigned _hasKernPair : 1;
		unsigned _checkedLatin1Table : 1;
		unsigned _isIBTextStyleFont : 1;
	}  _fFlags;

}
-(void)dealloc;
@end

