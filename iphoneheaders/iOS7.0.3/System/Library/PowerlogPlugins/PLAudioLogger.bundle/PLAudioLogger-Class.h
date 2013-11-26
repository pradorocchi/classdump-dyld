/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:32:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLAudioLogger.bundle/PLAudioLogger
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@class AVSystemController, PLEntry, NSString, NSNumber;

@interface PLAudioLogger : PLLogger {

	AVSystemController* avSystemController;
	PLEntry* _lastEntry;

}

@property (nonatomic,readonly) BOOL headphonesConnected; 
@property (nonatomic,readonly) BOOL headsetHasInput; 
@property (nonatomic,readonly) NSString * activeRoute; 
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) NSString * outputCategory; 
@property (nonatomic,readonly) NSNumber * volume; 
@property (nonatomic,readonly) BOOL active; 
@property (retain) PLEntry * lastEntry;                                //@synthesize lastEntry=_lastEntry - In the implementation block
-(BOOL)muted;
-(void)dealloc;
-(id)init;
-(BOOL)active;
-(void)log;
-(void)setupAVSystemController;
-(id)returnVolumeOrOutPutCategory:(int)arg1 ;
-(id)activeRoute;
-(id)outputCategory;
-(BOOL)headphonesConnected;
-(BOOL)headsetHasInput;
-(id)lastEntry;
-(void)setLastEntry:(id)arg1 ;
-(id)volume;
@end

