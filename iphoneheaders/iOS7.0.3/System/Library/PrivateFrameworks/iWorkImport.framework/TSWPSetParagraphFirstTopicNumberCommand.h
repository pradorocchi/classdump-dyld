/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSWPTextCommand.h>

@interface TSWPSetParagraphFirstTopicNumberCommand : TSWPTextCommand {

	unsigned _firstTopicNumber;

}
-(void)doCommit;
-(int)persistenceKind;
-(id)initWithStorage:(id)arg1 selection:(id)arg2 topicNumber:(unsigned)arg3 ;
-(id)actionString;
@end

