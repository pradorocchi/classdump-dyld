/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreMIDI/CoreMIDI-Structs.h>
@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {

	MIDINetworkConnectionImpl* _impl;

}

@property (nonatomic,readonly) MIDINetworkHost * host; 
+(id)connectionWithHost:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)host;
@end

