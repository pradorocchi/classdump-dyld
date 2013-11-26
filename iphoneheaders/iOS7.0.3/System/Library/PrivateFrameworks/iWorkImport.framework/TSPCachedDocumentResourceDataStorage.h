/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPDocumentResourceDataStorage.h>

@interface TSPCachedDocumentResourceDataStorage : TSPDocumentResourceDataStorage {

	BOOL _isValidated;

}
-(BOOL)needsDownload;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)performReadWithAccessor:(/*^block*/ id)arg1 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 isValidated:(BOOL)arg3 ;
-(id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)encodedLength;
@end

