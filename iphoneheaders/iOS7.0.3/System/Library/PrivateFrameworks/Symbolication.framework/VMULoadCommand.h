/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface VMULoadCommand : NSObject {

	unsigned long long _cmdSize;
	unsigned _command;

}
+(id)loadCommandWithMemory:(id)arg1 ;
-(id)initWithMemory:(id)arg1 ;
-(BOOL)isDyLinker;
-(BOOL)isDySymTab;
-(unsigned long long)cmdSize;
-(BOOL)isUUID;
-(BOOL)isSymTab;
-(BOOL)isLoadDyLib;
-(BOOL)isIDDyLib;
-(BOOL)isSegment;
-(BOOL)isSegment32;
-(BOOL)isSegment64;
@end

