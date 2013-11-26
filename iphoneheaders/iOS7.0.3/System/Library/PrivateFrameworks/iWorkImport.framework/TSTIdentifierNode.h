/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

@interface TSTIdentifierNode : TSTExpressionNode {

	NSString* mSheetName;
	NSString* mTableName;
	NSString* mIdentifier;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(IdentifierNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const IdentifierNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS266)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 forceReferenceInterpretation:(BOOL)arg3 ;
-(id)initWithContext:(id)arg1 identifier:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)identifierWithWhitespaceAppended;
-(void)setSheetName:(id)arg1 ;
-(id)tableName;
-(void)setTableName:(id)arg1 ;
-(void)dealloc;
-(id)string;
-(id)identifier;
-(id)sheetName;
-(int)tokenType;
@end

