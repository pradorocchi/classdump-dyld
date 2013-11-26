/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVConference/AVConference-Structs.h>
@interface ICEResultQuery : NSObject {

	unsigned long callID;
	tagCONNRESULT* result;
	BOOL isQueryAnswered;

}

@property (assign) tagCONNRESULT* result; 
@property (assign) unsigned long callID; 
@property (assign) BOOL isQueryAnswered; 
-(void)dealloc;
-(id)initWithResult:(tagCONNRESULT*)arg1 ;
-(id)initWithCallID:(unsigned long)arg1 ;
-(void)setResult:(tagCONNRESULT*)arg1 ;
-(tagCONNRESULT*)result;
-(unsigned long)callID;
-(void)setCallID:(unsigned long)arg1 ;
-(BOOL)isQueryAnswered;
-(void)setIsQueryAnswered:(BOOL)arg1 ;
@end

