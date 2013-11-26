/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaInfo.h>
#import <iWorkImport/TSDMixing.h>

@class TSPData, NSURL, TSDMediaStyle;

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing> {

	TSPData* mMovieData;
	NSURL* mMovieRemoteURL;
	TSPData* mImportedAuxiliaryMovieData;
	TSPData* mAudioOnlyImageData;
	double mStartTime;
	double mEndTime;
	double mPosterTime;
	TSPData* mPosterImageData;
	CGSize mNaturalSize;
	unsigned mLoopOption;
	float mVolume;
	BOOL mAudioOnly;
	BOOL mStreaming;
	TSDMediaStyle* mStyle;

}

@property (nonatomic,retain) TSPData * movieData; 
@property (nonatomic,retain) NSURL * movieRemoteURL; 
@property (nonatomic,retain) TSPData * importedAuxiliaryMovieData; 
@property (nonatomic,retain) TSPData * audioOnlyImageData; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) double posterTime; 
@property (nonatomic,retain) TSPData * posterImageData; 
@property (assign,nonatomic) unsigned loopOption; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isAudioOnly,nonatomic) BOOL audioOnly; 
@property (assign,getter=isStreaming,nonatomic) BOOL streaming; 
+(id)presetKinds;
+(double)defaultPosterTimeForDuration:(double)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(MovieArchive*)arg1 archiver:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
-(void)loadFromArchive:(const MovieArchive*)arg1 unarchiver:(id)arg2 ;
-(id)presetKind;
-(int)intValueForProperty:(int)arg1 ;
-(Class)styleClass;
-(float)floatValueForProperty:(int)arg1 ;
-(BOOL)containsProperty:(int)arg1 ;
-(Class)repClass;
-(id)animationFilters;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(Class)editorClass;
-(id)objectForProperty:(int)arg1 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(BOOL)supportsHyperlinks;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(BOOL)supportsAttachedComments;
-(BOOL)canChangeWrapType;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 ;
-(id)mediaDisplayName;
-(CGSize)rawDataSize;
-(void)p_setPropertiesFromLoadedAsset:(id)arg1 ;
-(id)movieData;
-(id)movieRemoteURL;
-(double)posterTime;
-(id)makeAVAssetWithOptions:(id)arg1 ;
-(id)makeAVAsset;
-(id)makePosterImageGeneratorWithAVAsset:(id)arg1 ;
-(id)generateEmptyPosterImageForContext:(id)arg1 ;
-(id)posterImageData;
-(double)doubleValueForProperty:(int)arg1 ;
-(unsigned)loopOption;
-(void)setMovieData:(id)arg1 ;
-(void)setMovieRemoteURL:(id)arg1 ;
-(id)importedAuxiliaryMovieData;
-(void)setImportedAuxiliaryMovieData:(id)arg1 ;
-(id)audioOnlyImageData;
-(void)setAudioOnlyImageData:(id)arg1 ;
-(void)setPosterTime:(double)arg1 ;
-(void)setLoopOption:(unsigned)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5 ;
-(void)setPosterImageData:(id)arg1 ;
-(void)setStreaming:(BOOL)arg1 ;
-(id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1 ;
-(id)titleForBuildChunk:(id)arg1 ;
-(BOOL)isAudioOnly;
-(id)mediaFileType;
-(void)dealloc;
-(void)setStyle:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)style;
-(double)startTime;
-(BOOL)isStreaming;
-(void)setEndTime:(double)arg1 ;
-(void)setAudioOnly:(BOOL)arg1 ;
-(Class)layoutClass;
-(double)endTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
@end

