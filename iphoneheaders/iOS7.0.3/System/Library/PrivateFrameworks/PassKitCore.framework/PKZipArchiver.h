/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKZipArchiver : NSObject
+(void)noteBOMCopier:(BOMCopierRef)arg1 succeeded:(BOOL)arg2 ;
+(void)associateBOMCopier:(BOMCopierRef)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
+(void)disassociateBOMCopier:(BOMCopierRef)arg1 ;
-(void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)zippedDataForURL:(id)arg1 ;
@end

