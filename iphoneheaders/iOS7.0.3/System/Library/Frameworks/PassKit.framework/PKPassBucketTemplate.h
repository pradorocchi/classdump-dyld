/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PassKit/PassKit-Structs.h>
@class PKPassFieldTemplate, NSMutableArray;

@interface PKPassBucketTemplate : NSObject {

	BOOL _sitsOnStripImage;
	int _bucketAlignment;
	float _minFieldPadding;
	PKPassFieldTemplate* _defaultFieldTemplate;
	unsigned _maxFields;
	NSMutableArray* _fieldTemplates;
	CGRect _bucketRect;

}

@property (assign,nonatomic) int bucketAlignment;                                     //@synthesize bucketAlignment=_bucketAlignment - In the implementation block
@property (assign,nonatomic) CGRect bucketRect;                                       //@synthesize bucketRect=_bucketRect - In the implementation block
@property (assign,nonatomic) float minFieldPadding;                                   //@synthesize minFieldPadding=_minFieldPadding - In the implementation block
@property (nonatomic,retain) PKPassFieldTemplate * defaultFieldTemplate;              //@synthesize defaultFieldTemplate=_defaultFieldTemplate - In the implementation block
@property (assign,nonatomic) unsigned maxFields;                                      //@synthesize maxFields=_maxFields - In the implementation block
@property (assign,nonatomic) BOOL sitsOnStripImage;                                   //@synthesize sitsOnStripImage=_sitsOnStripImage - In the implementation block
@property (nonatomic,retain) NSMutableArray * fieldTemplates;                         //@synthesize fieldTemplates=_fieldTemplates - In the implementation block
-(id)defaultFieldTemplate;
-(void)setBucketAlignment:(int)arg1 ;
-(void)setBucketRect:(CGRect)arg1 ;
-(void)setMinFieldPadding:(float)arg1 ;
-(void)setMaxFields:(unsigned)arg1 ;
-(void)addFieldTemplate:(id)arg1 ;
-(CGRect)bucketRect;
-(void)setDefaultFieldTemplate:(id)arg1 ;
-(unsigned)maxFields;
-(id)templateForFieldAtIndex:(unsigned)arg1 ;
-(int)bucketAlignment;
-(float)minFieldPadding;
-(id)fieldTemplates;
-(void)setFieldTemplates:(id)arg1 ;
-(BOOL)sitsOnStripImage;
-(void)setSitsOnStripImage:(BOOL)arg1 ;
-(void)dealloc;
@end

