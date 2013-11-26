/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSURL;

@interface TSUSafeSaveAssistant : NSObject {

	NSURL* _saveURL;
	NSURL* _temporaryDirectoryURL;
	NSURL* _writeURL;

}

@property (nonatomic,readonly) NSURL * writeURL;              //@synthesize writeURL=_writeURL - In the implementation block
+(id)temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
+(void)removeTemporaryDirectoryAtURL:(id)arg1 ;
+(void)writeAttributes:(id)arg1 toURL:(id)arg2 ;
-(void)removeTemporaryDirectory;
-(BOOL)endSaveWithSuccess:(BOOL)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
-(id)initForSavingToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)endSaveWithSuccess:(BOOL)arg1 addingAttributes:(id)arg2 error:(id*)arg3 ;
-(id)writeURL;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end

