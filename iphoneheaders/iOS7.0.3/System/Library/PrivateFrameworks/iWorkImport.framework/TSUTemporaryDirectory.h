/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface TSUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(void)dealloc;
-(id)init;
-(id)path;
-(id)initWithSignature:(id)arg1 ;
-(void)_createDirectoryWithSignature:(id)arg1 ;
-(void)leakTemporaryDirectory;
@end

