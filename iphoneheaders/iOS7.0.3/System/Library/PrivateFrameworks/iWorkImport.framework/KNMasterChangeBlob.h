/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class KNSlide, KNSlideStyle, KNMasterSlide, KNTitlePlaceholderInfo, KNBodyPlaceholderInfo, NSArray;

@interface KNMasterChangeBlob : NSObject {

	KNSlide* mSlide;
	KNSlideStyle* mSlideStyle;
	KNMasterSlide* mMaster;
	KNTitlePlaceholderInfo* mTitlePlaceholder;
	KNBodyPlaceholderInfo* mBodyPlaceholder;
	NSArray* mChildInfos;

}

@property (nonatomic,retain) KNSlide * slide; 
@property (nonatomic,retain) KNSlideStyle * slideStyle; 
@property (nonatomic,retain) KNMasterSlide * master; 
@property (nonatomic,retain) KNTitlePlaceholderInfo * titlePlaceholder; 
@property (nonatomic,retain) KNBodyPlaceholderInfo * bodyPlaceholder; 
@property (nonatomic,retain) NSArray * childInfos; 
+(id)blobWithSlide:(id)arg1 ;
-(id)slideStyle;
-(void)saveToArchive:(MasterChangeBlobArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const MasterChangeBlobArchive*)arg1 unarchiver:(id)arg2 ;
-(id)childInfos;
-(void)setChildInfos:(id)arg1 ;
-(id)titlePlaceholder;
-(id)bodyPlaceholder;
-(void)setTitlePlaceholder:(id)arg1 ;
-(void)setBodyPlaceholder:(id)arg1 ;
-(void)setSlide:(id)arg1 ;
-(void)setSlideStyle:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setMaster:(id)arg1 ;
-(id)master;
-(id)slide;
@end

