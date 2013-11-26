/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBFileLoggerDelegate.h>

@class NSMutableDictionary;

@interface SBFileLogManager : NSObject <SBFileLoggerDelegate> {

	NSMutableDictionary* _loggersByName;

}
+(id)sharedInstance;
-(void)reloadFromDefaults;
-(id)loggerForName:(id)arg1 ;
-(void)loggerEnabledStateChanged:(id)arg1 ;
-(void)_loadFileLoggers;
-(void)_enableOrDisableLoggerIfNecessary:(id)arg1 ;
-(BOOL)isClass:(Class)arg1 aKindOfClass:(Class)arg2 ;
-(void)_addLogger:(id)arg1 ;
-(void)_recordForLogNamed:(id)arg1 format:(id)arg2 arguments:(void*)arg3 ;
-(void)dealloc;
-(id)init;
-(void)flush;
@end

