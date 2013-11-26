/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;              //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
-(void)dealloc;
-(void)cancel;
-(void)perform;
-(id)mecabraWrapper;
-(id)initWithWordSearch:(id)arg1 ;
-(void)setMecabraWrapper:(id)arg1 ;
@end

