/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSACPTextStyleReplacementStrategy.h>

@class TSSStyle;

@interface TSACPShapeTextStyleReplacementStrategy : TSACPTextStyleReplacementStrategy {

	TSSStyle* mShapeStyle;

}

@property (nonatomic,readonly) TSSStyle * shapeStyle; 
-(id)initWithChangePropagationVisitor:(id)arg1 storage:(id)arg2 shapeStyle:(id)arg3 forLockedObject:(BOOL)arg4 ;
-(void)populateStyleReplacements:(id)arg1 forParagraphStyle:(id)arg2 listStyle:(id)arg3 parIndex:(unsigned)arg4 ;
-(void)dealloc;
-(id)shapeStyle;
@end

