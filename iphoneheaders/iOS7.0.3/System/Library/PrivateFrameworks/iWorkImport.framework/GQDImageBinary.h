/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQDImageBinary : NSObject {

	CGSize mSize;
	CFStringRef mPath;
	CFURLRef mAbsoluteUrl;
	int mResourceType;

}
-(int)readDataAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(CFURLRef)createAbsoluteUrlForState:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(id).cxx_construct;
-(int)resourceType;
-(CFStringRef)relativePath;
@end

