/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3DatabaseConnection.h>

@protocol ML3DatabaseDistantConnectionDelegate;
@class MLMediaLibraryService, , NSUUID;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection {

	MLMediaLibraryService* _mediaLibraryService;
	BOOL _connectionOpen;
	<ML3DatabaseDistantConnectionDelegate>* _distantDelegate;
	NSUUID* _currentTransactionID;

}

@property (assign,nonatomic,__weak) <ML3DatabaseDistantConnectionDelegate> * distantDelegate;              //@synthesize distantDelegate=_distantDelegate - In the implementation block
@property (nonatomic,readonly) NSUUID * currentTransactionID;                                              //@synthesize currentTransactionID=_currentTransactionID - In the implementation block
-(BOOL)isOpen;
-(void)dealloc;
-(BOOL)close;
-(id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(BOOL)arg4 ;
-(sqlite3Ref)_sqliteHandle;
-(id)currentTransactionID;
-(id)initWithDatabasePath:(id)arg1 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(/*function pointer*/ void*)arg3 userData:(void*)arg4 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(/*^block*/ id)arg3 ;
-(void)setProfilingLevel:(int)arg1 ;
-(BOOL)_openWithFlags:(int)arg1 isRetry:(BOOL)arg2 ;
-(id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(BOOL)_internalBeginTransactionWithBehaviorType:(unsigned)arg1 ;
-(BOOL)_internalEndTransactionAndCommit:(BOOL)arg1 ;
-(int)_finalizeStatement:(id)arg1 ;
-(int)checkpointDatabase;
-(BOOL)registerModuleName:(id)arg1 moduleMethods:(const sqlite3_module*)arg2 ;
-(void)setModuleContext:(void*)arg1 forModuleName:(id)arg2 contextReleaseBlock:(/*^block*/ id)arg3 ;
-(void*)moduleContextForModuleName:(id)arg1 ;
-(void)_serviceTerminatedTransactionNotification:(id)arg1 ;
-(BOOL)_internalBeginTransactionWithBehaviorType:(unsigned)arg1 isRetry:(BOOL)arg2 ;
-(BOOL)shouldCacheStatements;
-(id)distantDelegate;
-(void)setDistantDelegate:(id)arg1 ;
-(BOOL)isReadOnly;
-(void).cxx_destruct;
-(void)setReadOnly:(BOOL)arg1 ;
@end

