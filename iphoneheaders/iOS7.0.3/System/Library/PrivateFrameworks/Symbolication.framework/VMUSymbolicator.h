/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMutableArray, NSArray, NSString, VMUMachTaskContainer;

@interface VMUSymbolicator : NSObject {

	NSMutableArray* _symbolOwners;
	NSArray* _symbolOwnerAddressRanges;
	NSString* _path;
	VMUMachTaskContainer* _machTaskContainer;
	BOOL _isProtected;

}
+(BOOL)isIgnoreFunctionSymbols;
+(id)symbolicatorWithHeaders:(id)arg1 allowLazySymbolOwners:(BOOL)arg2 path:(id)arg3 machTaskContainer:(id)arg4 ;
+(id)symbolicatorForMachTaskContainer:(id)arg1 ;
+(id)symbolicatorWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3 ;
+(id)symbolicatorForPath:(id)arg1 architecture:(id)arg2 ;
+(id)symbolicatorsForPath:(id)arg1 ;
+(id)symbolicatorForTask:(unsigned)arg1 ;
+(id)symbolicatorForPid:(int)arg1 ;
+(id)symbolicatorForSignature:(id)arg1 ;
+(id)convertHeaderToSymbolOwner:(id)arg1 allowLazySymbolOwners:(BOOL)arg2 ;
+(id)symbolicatorForSignature:(id)arg1 dsymSearchPaths:(id)arg2 useMds:(BOOL)arg3 ;
+(void)ignoreFunctionSymbols:(BOOL)arg1 ;
-(id)signature;
-(BOOL)containsAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)symbols;
-(id)regions;
-(int)pid;
-(id)architecture;
-(id)symbolsForMangledName:(id)arg1 ;
-(id)sourceInfosInAddressRange:(VMURange)arg1 ;
-(BOOL)isProtected;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
-(id)programTextForAddressRange:(VMURange)arg1 ;
-(id)sourceInfos;
-(id)symbolOwners;
-(void)forceFullSymbolExtraction;
-(void)replaceSymbolOwner:(id)arg1 withSymbolOwner:(id)arg2 ;
-(id)regionForAddress:(unsigned long long)arg1 ;
-(id)faultLazySymbolOwnerAtIndex:(int)arg1 ;
-(id)regionsForName:(id)arg1 ;
-(id)symbolForAddress:(unsigned long long)arg1 ;
-(id)symbolsForName:(id)arg1 ;
-(id)symbolOwnersForName:(id)arg1 ;
-(id)symbolsInAddressRange:(VMURange)arg1 ;
-(BOOL)addSymbolRichFile:(id)arg1 ;
-(id)regionsInAddressRange:(VMURange)arg1 ;
-(id)symbolOwnerForAddress:(unsigned long long)arg1 ;
-(id)symbolOwnersInAddressRange:(VMURange)arg1 ;
-(id)symbolOwnerForName:(id)arg1 ;
-(id)symbolOwnersWithFlags:(unsigned)arg1 ;
-(id)symbolOwnerForPath:(id)arg1 ;
-(id)initWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3 ;
-(id)programTextForAddress:(unsigned long long)arg1 ;
@end

