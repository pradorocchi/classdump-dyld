/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@class NSSet, KNSlideNode;

@interface KNSlideCollectionSelection : TSKSelection {

	NSSet* mSlideNodes;
	KNSlideNode* mSlideNodeToEdit;

}

@property (nonatomic,readonly) NSSet * slideNodes; 
@property (nonatomic,readonly) KNSlideNode * slideNodeToEdit; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(void)saveToArchive:(SlideCollectionSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SlideCollectionSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)slideNodes;
-(id)initWithSlideNode:(id)arg1 ;
-(id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2 ;
-(id)slideNodeToEdit;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(BOOL)isEmpty;
@end

