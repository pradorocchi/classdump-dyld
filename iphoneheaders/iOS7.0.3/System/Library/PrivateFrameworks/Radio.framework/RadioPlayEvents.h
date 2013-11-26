/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray, NSDictionary;

@interface RadioPlayEvents : NSObject {

	long long _stationID;
	NSString* _stationHash;
	NSArray* _playEvents;
	NSString* _deviceName;

}

@property (nonatomic,readonly) NSDictionary * playInfoDictionary; 
-(id)playInfoDictionary;
-(id)initWithStation:(id)arg1 playEvents:(id)arg2 deviceName:(id)arg3 ;
-(void).cxx_destruct;
@end

