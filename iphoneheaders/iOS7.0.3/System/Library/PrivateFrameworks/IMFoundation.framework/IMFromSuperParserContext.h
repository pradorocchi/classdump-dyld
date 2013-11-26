/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMAttributedStringParserContext.h>

@class NSMutableArray, NSArray;

@interface IMFromSuperParserContext : IMAttributedStringParserContext {

	NSMutableArray* _inlinedFileTransferGUIDs;
	NSMutableArray* _standaloneFileTransferGUIDs;

}

@property (nonatomic,readonly) NSArray * inlinedFileTransferGUIDs;                 //@synthesize inlinedFileTransferGUIDs=_inlinedFileTransferGUIDs - In the implementation block
@property (nonatomic,readonly) NSArray * standaloneFileTransferGUIDs;              //@synthesize standaloneFileTransferGUIDs=_standaloneFileTransferGUIDs - In the implementation block
-(void)dealloc;
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
-(id)resultsForLogging;
-(void)parserDidStart:(id)arg1 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(id)inlinedFileTransferGUIDs;
-(id)standaloneFileTransferGUIDs;
@end

