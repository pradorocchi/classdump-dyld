/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/MLMediaLibraryServiceProtocol.h>

@protocol OS_dispatch_queue;
@class MLMediaLibraryWriter, NSXPCConnection, NSMutableSet, NSObject;

@interface MLLocalServiceProxy : NSObject <MLMediaLibraryServiceProtocol> {

	MLMediaLibraryWriter* _localWriter;
	NSXPCConnection* _dummyConnection;
	NSMutableSet* _validatedPaths;
	NSObject<OS_dispatch_queue>* _serialQueue;

}
-(id)init;
-(oneway void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(oneway void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(oneway void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(oneway void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(/*^block*/ id)arg4 ;
-(oneway void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(/*^block*/ id)arg5 ;
-(oneway void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(oneway void)executeTemplatedDatabaseOperation:(unsigned)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(oneway void)setOptions:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(oneway void)performImportFromSource:(unsigned)arg1 intoDatabaseAtPath:(id)arg2 withTrackData:(id)arg3 options:(id)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(oneway void)pollCurrentImportStatus:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
@end

