/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKCommand.h>

@protocol TSDMutableContainerInfo;
@class TSPObject, NSArray;

@interface TSDContainerInsertChildrenCommand : TSKCommand {

	TSPObject<TSDMutableContainerInfo>* mContainer;
	NSArray* mChildren;
	unsigned mIndex;

}

@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) TSPObject<TSDMutableContainerInfo> * container; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)p_do;
-(id)initWithContainer:(id)arg1 insertingChildren:(id)arg2 atIndex:(unsigned)arg3 objectContext:(id)arg4 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)container;
-(BOOL)process;
-(id)actionString;
-(id)children;
@end

